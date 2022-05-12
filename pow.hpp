#ifndef __POW_HPP__
#define __POW_HPP__
#include <iostream>
#include <math.h>
using namespace std;

#include "base.hpp"
#include "op.hpp"

class Pow : public Base {
    private:
        Base* left;
	Base* right;

    public:
        Pow(Base* left, Base* right) : Base() {
            this -> left = left;
	    this -> right = right;
        }

        double evaluate() override {
	    double result = pow(this -> left -> evaluate(), this -> right -> evaluate());
	    return result;
	}

        string stringify() override {
	    string result = ("(" +  this -> left -> stringify() + " ** " + this -> right -> stringify() + ")" );
	    return result;
	}
};

#endif //__POW_HPP__

