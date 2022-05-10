#ifndef __MOCKOP_1_HPP__
#define __MOCKOP_1_HPP__

#include "base.hpp"

class OneOpMock : public Base {
    public:
	OneOpMock() {}        

        virtual double evaluate() { return -0.4; }
        virtual std::string stringify() { return ""; }
};

#endif //__OP_HPP__
