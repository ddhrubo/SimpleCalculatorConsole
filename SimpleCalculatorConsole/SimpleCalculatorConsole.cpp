// SimpleCalculatorConsole.cpp : Defines the entry point for the console application.
//
#pragma once

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <sstream>
#include <OperationFactory.h>

#include <Add.h>
#include <Subtract.h>
#include <Multiply.h>
#include <Divide.h>
#include <Power.h>
#include <Sine.h>
#include <Cosine.h>
#include <SquareRoot.h>

#include "CMDArgParser.h"

#include <exception>

using namespace std;

int main(int argc, char *argv[])
{
	CMDArgParser cmdArgParser;
	OperationData operationData = cmdArgParser.parseCMDArgs(argc, argv);
	
	Operation *operation;
	OperationFactory operationFactory;

	if (argc >= 3) {
		operation = operationFactory.getOperation(operationData.oprator);

		try {
			cout << operation->operation(operationData.operands) << endl;
		} catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	
	return 0;

	
}

