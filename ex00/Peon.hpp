#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>

class Peon
{

	public:

		Peon();
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif /* ************************************************************ PEON_H */