#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "==== ClapTrap Test ====" << std::endl;
    ClapTrap c1("Clappy");
    c1.attack("Enemy");
    c1.takeDamage(3);
    c1.beRepaired(2);

    std::cout << "\n==== ScavTrap Test ====" << std::endl;
    ScavTrap s1("Scavy");
    s1.attack("Invader");
    s1.guardGate();
    s1.takeDamage(30);
    s1.beRepaired(20);

    std::cout << "\n==== Destruction Order ====" << std::endl;
    return 0;
}