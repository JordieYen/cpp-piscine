#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"
# include <cmath>

//  >, <, >=, <=, == and != +, -, *, and /.

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &clone);

		Fixed&	operator=(const Fixed& clone);
		bool	operator>(const Fixed& clone) const;
		bool	operator<(const Fixed& clone) const;
		bool	operator>=(const Fixed& clone) const;
		bool	operator<=(const Fixed& clone) const;
		bool	operator==(const Fixed& clone) const;
		bool	operator!=(const Fixed& clone) const;

		Fixed&	operator+(const Fixed& clone) const;
		Fixed&	operator-(const Fixed& clone) const;
		Fixed&	operator*(const Fixed& clone) const;
		Fixed&	operator/(const Fixed& clone) const;

		Fixed&	operator++(void);
		Fixed&	operator++(int);
		Fixed&	operator--(int);
		Fixed&	operator--(void);

		~Fixed(void);

		int						toInt(void) const;
		float					toFloat(void) const;
		int						getRawBits(void) const;
		int						getFractionalBits(void) const;
		void					setRawBits(int const raw);
		static Fixed&			max(Fixed& n1, Fixed& n2);
		static const Fixed&	max(const Fixed& n1, const Fixed& n2);
		static Fixed&			min(Fixed& n1, Fixed& n2);
		static const Fixed&	min(const Fixed& n1, const Fixed& n2);

	private:
		int					fnvalue;
		static const int	fractionalbits = 8;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif