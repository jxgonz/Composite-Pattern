#ifndef __MOCKOP_5_HPP__
#define __MOCKOP_5_HPP__

#include "base.hpp"

class FiveOpMock : public Base {
    public:
        FiveOpMock() {}

        virtual double evaluate() { return 0; }
        virtual std::string stringify() { return ""; }
};

#endif //__OP_HPP__

