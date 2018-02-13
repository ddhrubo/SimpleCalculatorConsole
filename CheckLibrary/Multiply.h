#pragma once

#include "Operation.h"

class Multiply : public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};