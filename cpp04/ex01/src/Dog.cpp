#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog Constructor Called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Default Dog Destructor Called" << std::endl;
	delete this->brain;
}

Dog::Dog( const Dog& other ) : Animal(other) {
	std::cout << "Default Dog Copy Constructor Called" << std::endl;
	this->brain = new Brain(*other.rain);
}

Dog& Dog::operator=( const Dog& other ) {
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void	Dog::makeSound( void ) const { std::cout << "au au" << std::endl; }

Brain*	Dog::getBrain() const { return this->brain; }