#pragma once

#include "Operation.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "Power.h"
#include "Sine.h"
#include "Cosine.h"
#include "SquareRoot.h"

class OperationFactory {
public:
	Operation* getOperation(string oprator);
};