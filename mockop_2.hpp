#ifndef __MOCKOP_2_HPP__
#define __MOCKOP_2_HPP__

#include "base.hpp"

class TwoOpMock : public Base {
    public:
        TwoOpMock() {}

        virtual double evaluate() { return -134.7; }
        virtual std::string stringify() { return ""; }
};

#endif //__OP_HPP__

