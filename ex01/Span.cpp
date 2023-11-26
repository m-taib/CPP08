#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int n)
{
	v.reserve(n);
	size = n;
	track = 0;	
}

Span::Span(const Span& rhs)
{
	*this = rhs;
}

Span&	Span::operator=(const Span& rhs)
{
	int	i;

	i = -1;
	if (this == &rhs)
		return (*this);
	size = rhs.size;
	v.reserve(size);
	track = rhs.track;
	while (++i < size)
		v[i] = rhs.v[i];	
	return (*this);
}

void	Span::addNumber(int num)
{
	track++;
	if (track > size)
		throw std::out_of_range("out of range");
	v.push_back(num);
}

void	Span::addNumbersSet(std::vector<int> v, std::vector<int>::iterator begin, 
					std::vector<int>::iterator end)
{
	track++;
	if (track > size)
		throw std::out_of_range("out of range");
	while (begin != end)
	{
		this->v[*begin] = v[*begin];
		begin++;
	}
}

int	Span::shortestSpan()
{
	int	i;
	int	j;
	int	min;

	min = abs(v[0] - v[1]);
	i = 0;
	while (i < track)
	{
		j = i + 1;
		while (j < track)
		{
			if (min > abs(v[i] - v[j]))
				min = abs(v[i] - v[j]);
			j++;
		}
		i++;
	}
	return (min);
}


int	Span::longestSpan()
{
	int	i;
	int	j;
	int	max;

	max = abs(v[0] - v[1]);
	i = 0;
	while (i < track)
	{
		j = i + 1;
		while (j < track)
		{
			if (max < abs(v[i] - v[j]))
				max = abs(v[i] - v[j]);
			j++;
		}
		i++;
	}
	return (max);
}

Span::~Span()
{

}
