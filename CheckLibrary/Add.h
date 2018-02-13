#pragma once

#include "Operation.h"

class Add : public Operation 
{
public:
	double operation(vector<string> argv) throw(InvalidArgumentException);
};