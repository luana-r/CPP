#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->name = "scavtrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called | " << this->name << " hit points: " << this->hitPoints << ", energy points: "
	<< this->energyPoints << ", attack damage: " << this->attackDamage << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called | " << this->name << " hit points: " << this->hitPoints << ", energy points: "
	<< this->energyPoints << ", attack damage: " << this->attackDamage << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->energyPoints == 0) {
		std::cout << "ScavTrap " << this->name << " has no energy to attack " << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ScavTrap " << this->name << " is died and can't attack " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
	<< this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void	ScavTrap::guardGate( void ) {
	if (this->hitPoints > 0)
		std::cout << "ScavTrap " << this->name << " is now in Guard Gate mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is died and can't be in Guard Gate mode" << std::endl;
}