#include "task1KeyValuePair.h"
#include <string>
#include <iostream>

int main() {

KeyvaluePair kv1 = KeyvaluePair("John", 35);

KeyvaluePair kv2 = KeyvaluePair(25,"Amy");

std::cout << kv1.getkey() <<" " <<kv1.getvalue()<< std::endl;
std::cout << kv2.getkey() <<" " <<kv2.getvalue()<< std::endl;

}

 
