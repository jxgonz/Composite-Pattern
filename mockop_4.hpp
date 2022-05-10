#ifndef __MOCKOP_4_HPP__
#define __MOCKOP_4_HPP__

#include "base.hpp"

class FourOpMock : public Base {
    public:
        FourOpMock() {}

        virtual double evaluate() { return 134.7; }
        virtual std::string stringify() { return ""; }
};

#endif //__OP_HPP__

