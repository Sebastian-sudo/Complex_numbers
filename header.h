#ifndef HEADERS
#define HEADERS

#include <iostream>

class Complex {
private:
	double real, imag;
public:
	Complex();
};

Complex::Complex() {
	this->real = 0.0;
	this->imag = 0.0;
}

#endif