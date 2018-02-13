#pragma once

#include "Operation.h"

class Subtract : public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};