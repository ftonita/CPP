#include "Scalar.hpp"

Scalar::Scalar(std::string str) : _str(str), _sign(1), _isPoint(false) {}

Scalar::~Scalar() {}

Scalar::Scalar(const Scalar &copy) {
	*this = copy;
}

Scalar &Scalar::operator=(const Scalar &copy) {
	if (this != &copy) {
		this->_str = copy._str;
		this->_longNum = copy._longNum;
		this->_isPoint = copy._isPoint;
	}
	return *this;
}

void Scalar::toInt()
{

}

void Scalar::toChar()
{

}

void Scalar::toFloat()
{

}

void Scalar::toDouble()
{

}

void Scalar::parse()
{
	
}