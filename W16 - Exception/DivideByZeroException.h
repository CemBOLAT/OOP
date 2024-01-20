// DivideByZeroException.h
#ifndef DIVIDEBYZEROEXCEPTION_H
#define DIVIDEBYZEROEXCEPTION_H

#include <stdexcept>

class DivideByZeroException : public std::runtime_error
{
public:
	// Constructor specifies default error message
	DivideByZeroException() : std::runtime_error("attempted to divide by zero") {}
};

#endif // DIVIDEBYZEROEXCEPTION_H
