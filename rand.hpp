#ifndef __RAND_HPP__
#define __RAND_HPP__
#include <iostream>
using namespace std;

#include "base.hpp"

class Rand : public Base {
    private:
	double value;

    public:
        Rand() : Base() {
	    srand(time(0));
	    this -> value = rand() % 100;
	}

        virtual double evaluate() {
	    return this -> value;
	}

        virtual string stringify() {
	    string result = to_string(this -> value);
	    return result;
	}
};

#endif //__RAND_HPP__

