# include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
};

Animal::Animal(std::string type) : type(type) {
    std::cout << "Animal constructor called" << std::endl;
};

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
};

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal& Animal::operator=(Animal const &obj)
{
	std::cout << "Animal assignment operator call" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

std::string	Animal::getType( void ) const { return this->type; }

void	Animal::makeSound( void ) const {
	std::cout << "Undefined sound" << std::endl;
}
