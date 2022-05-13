#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "div.hpp"
#include "mult.hpp"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* rand = new Rand();
    
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(seven, two);
    Base* div = new Div(four, two);
    Base* power = new Pow(four, two);
    Base* rand_test = new Add (four, rand);
    Base* long_eq = new Add(add, rand_test);

    std::cout << add->stringify() << " = " << add->evaluate() << std::endl;
    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    std::cout << mult->stringify() << " = " << mult->evaluate() << std::endl;
    std::cout << div->stringify() << " = " << div->evaluate() << std::endl;
    std::cout << power->stringify() << " = " << power->evaluate() << std::endl;
    std::cout << rand_test->stringify() << " = " << rand_test->evaluate() << std::endl;
    std::cout << long_eq->stringify() << " = " << long_eq->evaluate() << std::endl;

    delete three;
    delete seven;
    delete four;
    delete two;
    delete rand;

    delete mult;
    delete add;
    delete minus;
    delete div;
    delete power;
    delete rand_test;
    delete long_eq;

    return 0;
}
