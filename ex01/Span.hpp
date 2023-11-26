#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <vector>

class Span
{
	public :
		Span(unsigned int n);
		Span(const Span& rhs);
		Span& 	operator=(const Span& rhs);
		~Span();
		
		void	addNumber(int num);
		void	addNumbersSet(std::vector<int> v, std::vector<int>::iterator begin, 
					std::vector<int>::iterator end);
		int	shortestSpan();
		int	longestSpan();

	private :
		Span();
		
		std::vector<int> v;
		int		 size;
		int		 track;
};


#endif
