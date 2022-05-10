#ifndef __MOCKOP_3_HPP__
#define __MOCKOP_3_HPP__

#include "base.hpp"

class ThreeOpMock : public Base {
    public:
        ThreeOpMock() {}

        virtual double evaluate() { return 0.4; }
        virtual std::string stringify() { return ""; }
};

#endif //__OP_HPP__

