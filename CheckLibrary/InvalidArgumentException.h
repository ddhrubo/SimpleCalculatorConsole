#pragma once

#include <stdexcept>

using namespace std;

class InvalidArgumentException : public exception
{
public:
	InvalidArgumentException(const char* message);
public:
	const char* what() const throw();
private:
	const char* message;
};