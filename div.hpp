#ifndef __DIV_HPP__
#define __DIV_HPP__
#include <iostream>
using namespace std;

#include "base.hpp"
#include "op.hpp"

class Div : public Base {
    private:
        Base* left;
        Base* right;

    public:
        Div(Base* left, Base* right) : Base() {
            this -> left = left;
            this -> right = right;
        }

        double evaluate() override {
            double result = this -> left -> evaluate() / this -> right -> evaluate();
            return result;
        }

        string stringify() override {
            string result = ("(" +  this -> left -> stringify() + " / " + this -> right -> stringify() + ")" );
            return result;
        }
};

#endif //__DIV_HPP__

