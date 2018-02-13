#pragma once

#include "stdafx.h"
#include <vector>
#include <string>

#include "Utility.h"
#include "InvalidArgumentException.h"
using namespace std;

class Operation {
public:
	virtual double operation(vector<string> argv) throw(InvalidArgumentException) = 0;
};
