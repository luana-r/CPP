#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "--- Teste ClapTrap ---" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("Target A");
    clap.takeDamage(3);
    clap.beRepaired(2);

    std::cout << "\n--- Teste ScavTrap ---" << std::endl;
    ScavTrap scav("Scavy");
    scav.attack("Target B");
    scav.guardGate();
    scav.takeDamage(20);
    scav.beRepaired(10);

    std::cout << "\n--- Teste FragTrap ---" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("Target C");
    frag.highFivesGuys();
    frag.takeDamage(50);
    frag.beRepaired(25);

    std::cout << "\n--- Teste destrutores ---" << std::endl;
    return 0;
}