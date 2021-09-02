#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class	Karen
{
	private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	level_not_found( void );

	public:

	void	complain( std::string level );
};

#endif
