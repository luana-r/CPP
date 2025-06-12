#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called | " << this->name << " hit points: " << this->hitPoints << ", energy points: "
	<< this->energyPoints << ", attack damage: " << this->attackDamage << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
    this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called | " << this->name << " hit points: " << this->hitPoints << ", energy points: "
	<< this->energyPoints << ", attack damage: " << this->attackDamage << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void	FragTrap::attack(const std::string& target) {
	if (this->energyPoints == 0) {
		std::cout << "FragTrap " << this->name << " has no energy to attack " << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "FragTrap " << this->name << " is died and can't attack " << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing "
	<< this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void	FragTrap::highFivesGuys( void ) {
	if (this->hitPoints > 0)
		std::cout << "FragTrap " << this->name << " request a high Five!!!" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " is died and can't request high five" << std::endl;
}