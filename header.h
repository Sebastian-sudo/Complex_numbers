#ifndef HEADERS
#define HEADERS

#include <iostream>
#include <string>

class Complex {
private:
	double real, imag;
public:
	Complex();
	Complex(double real, double imag);
	~Complex() {}
	double getReal() const { return this->real; }
	double getImag() const { return this->imag; }
	Complex & operator=(const Complex &);
	const Complex operator+(const Complex &);
	Complex & operator++(void);
	Complex operator++(int);
	friend std::ostream& operator<<(std::ostream& os, const Complex&);
	friend std::istream& operator>>(std::istream& is, Complex&);
};

Complex::Complex() {
	this->real = 0.0;
	this->imag = 0.0;
}

Complex::Complex(double real, double imag) {
	this->real = real;
	this->imag = imag;
}

Complex & Complex::operator=(const Complex &) {

}

const Complex Complex::operator+(const Complex &) {

}

Complex & Complex::operator++(void) {

}

Complex Complex::operator++(int) {

}

std::ostream& operator<<(std::ostream& os, const Complex& temp) {

}

std::istream& operator>>(std::istream& is, Complex& temp) {

}

#endif