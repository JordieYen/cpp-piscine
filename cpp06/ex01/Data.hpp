#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
using std::string;

class Data
{
	private:
		void	*_ptr;

	public:
		Data(void);
		Data(void *ptr);
		Data(const Data& clone);
		Data&	operator=(const Data& clone);
		~Data();

		void	*getData(void);
};

#endif