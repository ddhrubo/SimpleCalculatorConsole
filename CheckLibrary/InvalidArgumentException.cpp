#pragma once

#include "stdafx.h"

#include "InvalidArgumentException.h"

InvalidArgumentException::InvalidArgumentException(const char* message)
{
	this->message = message;
}

const char* InvalidArgumentException::what() const throw()
{
	return message;
}