
#pragma once
// import <compare>;
#include <string>
#include <iostream>
// #include <compare>



class Person
{
public:
	// Two-parameter constructor automatically creates initials and
	// delegates the work to the three-parameter constructor.
	Person(std::string firstName, std::string lastName)
		: Person{ firstName, lastName,
		std::string(firstName.substr(0,1) + lastName.substr(0,1)) }
	{
	}

	Person() = default;

	Person(std::string firstName, std::string lastName, std::string initials)
		: m_firstName{ std::move(firstName) }
		, m_lastName{ std::move(lastName) }
		, m_initials{ std::move(initials) }
	{
	}

	const std::string& getFirstName() const { return m_firstName; }
	void setFirstName(std::string firstName) { m_firstName = std::move(firstName); }

	const std::string& getLastName() const { return m_lastName; }
	void setLastName(std::string lastName) { m_lastName = std::move(lastName); }

	const std::string& getInitials() const { return m_initials; }
	void setInitials(std::string initials) { m_initials = std::move(initials); }

	const void output(std::ostream& stream)
	{
		stream << m_firstName << " " << m_lastName <<" " << m_initials << std::endl;

	}

	//// Only this single line of code is needed to add support
	//// for all six comparison operators.
	//[[nodiscard]] auto operator<=>(const Person&) const = default;


private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_initials;
};



//// The ordering of Persons depends on the order of the data members
//// in the Person class definition. In the above implementation, Persons
//// are ordered on first name, then on last name, then on initials.
//// If instead you want to order them first on last name, then first name
//// then initials, you have to rearrange the data members as follows:
////	private:
////		std::string m_lastName;
////		std::string m_firstName;
////		std::string m_initials;

