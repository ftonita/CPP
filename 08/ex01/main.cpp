#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        for (int i = 0; i < 5; ++i)
            std::cout << sp[i] << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    std::cout <<std::endl;
    std::cout << "Short Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp.longestSpan() << std::endl;

    Span sp2 = Span(10000);

    for (int i = 0; i < 10000; i++)
        sp2.addNumber(i + 1);

    std::cout << "Short Span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp2.longestSpan() << std::endl;

	std::cout << "~~~~Exception~~~~"<< std::endl;
    Span sp3 = Span(1);
	try
	{
		std::cout << "Trying add one number in first 'sp'" << std::endl;
		sp.addNumber(12);
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
    try
	{
        std::cout << "Short Span (sp3): " << sp3.shortestSpan() << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return (0);
}