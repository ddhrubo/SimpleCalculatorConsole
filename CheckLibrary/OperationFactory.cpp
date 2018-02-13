#pragma once

#include "stdafx.h"
#include "OperationFactory.h"

Operation* OperationFactory::getOperation(string oprator) {
	if (oprator == "+") {
		return new Add;
	} else if (oprator == "-") {
		return new Subtract;
	} else if (oprator == "*") {
		return new Multiply;
	} else if (oprator == "/") {
		return new Divide;
	} else if (oprator == "pow") {
		return new Power;
	} else if (oprator == "sin") {
		return new Sine;
	} else if (oprator == "cos") {
		return new Cosine;
	} else if (oprator == "sqrt") {
		return new SquareRoot;
	} else {
		return nullptr;
	}
}