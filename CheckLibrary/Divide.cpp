#pragma once

#include "stdafx.h"

#include "Divide.h"

double Divide::operation(vector<string> argv) throw(InvalidArgumentException) 
{
	if (argv.size() != 2)
		throw InvalidArgumentException("Incorrect number of operands");
	else if (!isNumber(argv[0]))
		throw InvalidArgumentException("Operand 1 not a number");
	else if (!isNumber(argv[1]))
		throw InvalidArgumentException("Operand 2 not a number");
	else if (atof(argv[1].c_str())==0.0)
		throw InvalidArgumentException("Dividend is zero");
	else
	{
		return (double)atof(argv[0].c_str()) / (double)atof(argv[1].c_str());
	}
}