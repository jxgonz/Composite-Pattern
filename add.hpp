#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"

using namespace std;

class Add: public Base {
    private:
        Base* left;
        Base* right;
    public:
        /* Constructors */
        Add(Base* val1, Base* val2): Base(){
        left = val1;
        right = val2;
        }

        double evaluate() override {
        return (this -> left -> evaluate() + this -> right -> evaluate());
        }

        string stringify() {
        return ( "(" + this -> left -> stringify() + " + " + this -> right -> stringify() + ")");
        }
};
#endif //__ADD_HPP__
