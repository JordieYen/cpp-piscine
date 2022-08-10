#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int );
		Fixed(const float);
		Fixed(const Fixed &clone);
		Fixed& operator=(const Fixed& clone);
		~Fixed(void);

		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		int		getFractionalBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					fnvalue;
		static const int	fractionalbits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif