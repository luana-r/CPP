#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class	Dog : public Animal {

	public:
	
		Dog();
		Dog( const Dog& other);
		Dog& operator=( const Dog& other);
		~Dog();
	
		void	makeSound( void ) const;
		Brain*	getBrain() const;
	
	private:
	
		Brain* brain;

};

#endif