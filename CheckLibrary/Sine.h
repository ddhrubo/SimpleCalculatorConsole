#pragma once

#include "Operation.h"

class Sine: public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};