#pragma once

#include "Operation.h"

class Divide: public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};