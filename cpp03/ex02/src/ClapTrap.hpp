# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    protected:
        std::string name;
        unsigned int         hitPoints;
        unsigned int         energyPoints;
        unsigned int         attackDamage;

    public:
        ClapTrap( void );
        ClapTrap (std::string str);
        ~ClapTrap();
        ClapTrap( const ClapTrap& other);
	    ClapTrap& operator=( const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string	getName() const;
	    int			getHitPoints() const;
	    int			getEnergyPoints() const;
	    int			getAttackDamage() const;

	    void	setName(std::string name);
	    void	setHitPoints( unsigned int amount );
	    void	setEnergyPoints( unsigned int amount );
	    void	setAttackDamage( unsigned int amount );


};


# endif