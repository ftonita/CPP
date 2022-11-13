#ifndef SCALAR_HPP
#define SCALAR_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <climits>
# include <iomanip>
# include <exception>

class Scalar
{
	private:
	std::string	_str;
	double 		_longNum;
	int 		_sign;
	bool 		_isPoint;

	public:
	Scalar(std::string str);
	~Scalar();
	Scalar(const Scalar &copy);

	Scalar &operator=(const Scalar &copy);
	void toInt();
	void toChar();
	void toFloat();
	void toDouble();
	void parse();
};


#endif