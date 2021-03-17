#include <iostream>
#include <string>
#include <array>
#include "snowman.hpp"
using namespace std;
using namespace ariel;


int main(){
std::cout << ariel::snowman(11114411) << std::endl;
std::cout << ariel::snowman(22343221) << std::endl;
std::cout << ariel::snowman(22343211) << std::endl;
std::cout << ariel::snowman(2234211) << std::endl; // bad input
std::cout << ariel::snowman(-5) << std::endl; 

return 0;
}
