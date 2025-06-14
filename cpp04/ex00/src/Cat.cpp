# include "Cat.hpp"

Cat::Cat() : Animal("cat") {
    std::cout << "Default Cat Constructor Called" << std::endl;
};

Cat::~Cat() {
	std::cout << "Default Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "Default Cat Copy Constructor Called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "miau" << std::endl;
}

