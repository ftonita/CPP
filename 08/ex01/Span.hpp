#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>

class Span
{
	private:
    unsigned int        _N;
    std::vector<int>    _data;
    Span();

	public:
    Span(unsigned int n);
    Span(const Span & copy);
    Span & operator=(const Span & copy);

    ~Span();

    int & operator[] (unsigned int index);

    void addNumber(unsigned int num);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class	SpanException : public std::exception {
    	private:
        std::string _msg;

    	public:
        SpanException(std::string msg): _msg(msg){};
        virtual const char* what() const throw(){ return (_msg.c_str());};

        virtual ~SpanException() throw (){};
    };
};



#endif