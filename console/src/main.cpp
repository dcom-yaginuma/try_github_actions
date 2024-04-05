#include <iostream>
#include "../include/calc.h"

// https://ryokrm-m.com/tech/cpplint%E3%81%AE%E3%83%AB%E3%83%BC%E3%83%AB%E4%B8%80%E8%A6%A7/
int main() {
    calc cal(0);
    std::cout << "add 10 = " << cal.add(10) << std::endl;
    std::cout << "add 20 = " << cal.add(20) << std::endl;
    std::cout << "add 30 = " << cal.add(30) << std::endl;

    std::cout << "minus 10 = " << cal.minus(10) << std::endl;
    std::cout << "minus 30 = " << cal.minus(30) << std::endl;

    std::cout << "Hello World!\n";
}
