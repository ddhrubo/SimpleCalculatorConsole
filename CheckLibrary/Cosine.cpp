#pragma once

#include "stdafx.h"

#include "Cosine.h"

double Cosine::operation(vector<string> argv) throw(InvalidArgumentException) 
{
	if (argv.size() != 1)
		throw InvalidArgumentException("Incorrect number of operands");
	else if (!isNumber(argv[0]))
		throw InvalidArgumentException("Operand 1 not a number");
	else
	{
		return cos(((double)atof(argv[0].c_str()) / 180.0)*3.1416);;
	}
}