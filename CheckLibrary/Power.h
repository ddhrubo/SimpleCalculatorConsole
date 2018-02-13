#pragma once

#include "Operation.h"

class Power : public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};