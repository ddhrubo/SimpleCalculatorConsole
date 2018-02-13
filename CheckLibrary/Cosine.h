#pragma once

#include "Operation.h"

class Cosine : public Operation {
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};