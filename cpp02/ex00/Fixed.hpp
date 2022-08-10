#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &clone);
		Fixed& operator=(const Fixed& clone);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					fnvalue;
		static const int	fractionalbits = 8;

};

#endif