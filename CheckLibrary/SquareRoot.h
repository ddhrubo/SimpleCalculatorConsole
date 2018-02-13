#pragma once

#include "Operation.h"

class SquareRoot: public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};