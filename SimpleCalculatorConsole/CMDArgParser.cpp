#pragma once

#include "stdafx.h"

#include "CMDArgParser.h"

OperationData CMDArgParser::parseCMDArgs(int argc, char *argv[]) {
	OperationData operationData;

	for (int i = 1; i<argc - 1; i++)
		operationData.operands.push_back(argv[i]);
	operationData.oprator = argv[argc - 1];

	return operationData;
}