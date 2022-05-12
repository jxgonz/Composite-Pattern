#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "div.hpp"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);

    //Base* mult = new Mult(seven, four);
    Base* div = new Div(four, two);
    //Base* add = new Add(three, mult);
    //Base* minus = new Sub(add, two);
    Base* power = new Pow(four, two);

    std::cout << div->stringify() << " = " << div->evaluate() << std::endl;
    std::cout << power->stringify() << " = " << power->evaluate() << std::endl;

    delete three;
    delete seven;
    delete four;
    delete two;
    delete div;
    delete power;

    return 0;
}
