#pragma once
#include <vector>
#include <string>
using namespace std;

struct OperationData {
	vector<string> operands;
	string oprator;
};

class CMDArgParser {
public:
	OperationData parseCMDArgs(int argc, char *argv[]);
};