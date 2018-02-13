#include "stdafx.h"
#include <string.h>

#include "check.h"

bool isNumber(char* str) {
	int len = strlen(str);

	// flags
	bool decimalPointFound = false;
	bool digitFound = false;
	bool unaryMinusFound = false;

	for (int i = 0; i < len; i++) {
		if (str[i] == '.') {
			if (decimalPointFound) {
				// already found a decimal before, so invalid number
				return false;
			} else {
				decimalPointFound = true;
			}
		} else if (str[i] == '-') {
			if (decimalPointFound || digitFound || unaryMinusFound) {
				// if anything came before minus, invalid
				return false;
			} else {
				unaryMinusFound = true;
			}
		} else if (str[i]<'0' || str[i]>'9') {
			// after '.' and '-', anything other than digits is invalid
			return false;
		} else {
			digitFound = true;
		}
	}

	//the decimal point and/or unary minus are in valid position if any
	if (digitFound) {
		return true;
	} else {
		return false;
	}
}