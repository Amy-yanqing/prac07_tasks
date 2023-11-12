#include<concepts>
// template < std::integral key, std::floating point Value> 
//error reason：integral and floating point only exist in c++ 20
template < typename Key, typename Value> 

class KeyvaluePair

{
    private:
    Key m_key;
    Value m_value;

    public:
    KeyvaluePair(Key key, Value value)
    : m_key {key}, m_value {value}
    {}

    const Key& getkey()
    {
        return m_key;
    }

    const Value& getvalue()
    {
        return m_value;

    }

    void setkey(Key& new_key){

        m_key= new_key;
    }

    void setvalue(Value& new_value)
    {
        m_value=new_value;
    }
};
