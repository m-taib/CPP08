#include "Span.hpp"

int	main()
{
	try
	{
		Span s(3);
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (const std::exception& exp)
	{	
		std::cout << exp.what() << std::endl;
	}
	return (0);
}
