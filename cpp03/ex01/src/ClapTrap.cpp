# include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "ClapTrap constructor called" << std::endl;
    this->name = "claptrap";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string str) {
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = str;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->name = other.getName();
		this->hitPoints = other.getHitPoints();
		this->energyPoints = other.getEnergyPoints();
		this->attackDamage = other.getAttackDamage();
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy points to attack or is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " is died" << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and now has "
	<< this->hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints == 0 ) {
		std::cout << "ClapTrap " << this->name << " has no energy points to repair itself " << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " has no hit points to repair itself " << std::endl;
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " of hit points and now has "
	<< this->hitPoints << " hit points!"<< std::endl;
}

std::string	ClapTrap::getName() const { return this->name; }
int	ClapTrap::getHitPoints() const { return this->hitPoints; }
int	ClapTrap::getEnergyPoints() const { return this->energyPoints; }
int	ClapTrap::getAttackDamage() const { return this->attackDamage; }

void	ClapTrap::setName(std::string name) { this->name = name; }
void	ClapTrap::setHitPoints( unsigned int amount ) {	this->hitPoints = amount; }
void	ClapTrap::setEnergyPoints( unsigned int amount ) { this->energyPoints = amount; }
void	ClapTrap::setAttackDamage( unsigned int amount ) { this->attackDamage = amount; }


