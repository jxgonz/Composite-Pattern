#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"

using namespace std;

class Mult: public Base {
    private:
	Base* left;
        Base* right;
    public:
	Mult(Base* val1, Base* val2): Base(){
	left = val1;
	right = val2;
	}

	double evaluate() override {
	return (this -> left -> evaluate() * this -> right -> evaluate());
	}

	string stringify() override {
	return ( "(" + this -> left -> stringify() + " * " + this -> right -> stringify() + ")");
	}

};
#endif //__MULT_HPP
