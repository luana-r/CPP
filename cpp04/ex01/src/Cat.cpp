# include "Cat.hpp"

Cat::Cat() : Animal("cat") {
    std::cout << "Default Cat Constructor Called" << std::endl;
	this->brain = new Brain();
};

Cat::~Cat() {
	std::cout << "Default Cat Destructor Called" << std::endl;
	delete this->brain;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "Default Cat Copy Constructor Called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
		if (this != &other) {
			this->other.type;
			delete this->brain;
			this->brain = new Brain(*obj.brain);
		}
		return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "miau" << std::endl;
}

