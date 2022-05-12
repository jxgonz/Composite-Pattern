#ifndef __OP_HPP__
#define __OP_HPP__
#include <iostream>
using namespace std;

#include "base.hpp"

class Op : public Base {
    private:
	double value;

    public:
        Op(double value) : Base() {
	    this -> value = value;
	}

        virtual double evaluate() {
	    return this -> value;
	}

        virtual string stringify() {
	    string result = to_string(this -> value);
	    return result;
	}
};

#endif //__OP_HPP__
