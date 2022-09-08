#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>

class Span
{
	public:
		Span(void);
		Span(unsigned int i);
		Span(const Span& clone);
		Span&	operator=(const Span& clone);
		~Span();

		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNumber(int input);
		void	addVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	print(void);

		class SizeOverloadException: public std::exception
		{
			public:
				virtual const char* what() const throw() // understand better
				{
					return ("Container is full.");
				}
		};

		class SizeUnderloadException: public std::exception
		{
			public:
				virtual const char* what() const throw() // understand better
				{
					return ("Container is empty.");
				}
		};

	private:
		std::vector<int>	_arr;
		int					_size;

};

#endif