#include "ClapTrap.hpp"  // ou apenas incluir a classe diretamente se estiver no mesmo arquivo

int main() {
    std::cout << "==== Teste 1: Ataques até acabar energia ====" << std::endl;
    ClapTrap ct1("Warrior");
    for (int i = 0; i < 12; ++i) {
        ct1.attack("Dummy");
    }

    std::cout << "\n==== Teste 2: Tomando dano até morrer ====" << std::endl;
    ClapTrap ct2("Tank");
    ct2.takeDamage(5);
    ct2.takeDamage(3);
    ct2.takeDamage(4); // Isso deve zerar os HP
    ct2.attack("Target"); // Não deve funcionar
    ct2.beRepaired(5);    // Também não deve funcionar

    std::cout << "\n==== Teste 3: Reparando-se ====" << std::endl;
    ClapTrap ct3("Healer");
    ct3.takeDamage(4);
    ct3.beRepaired(3);
    ct3.beRepaired(3); // Ainda tem energia para isso
    ct3.attack("Target");

    std::cout << "\n==== Teste 4: Reparando até acabar energia ====" << std::endl;
    ClapTrap ct4("Mechanic");
    for (int i = 0; i < 11; ++i) {
        ct4.beRepaired(1);
    }

    std::cout << "\n==== Teste 5: Ataque e dano intercalados ====" << std::endl;
    ClapTrap ct5("Fighter");
    ct5.attack("Enemy1");
    ct5.takeDamage(2);
    ct5.beRepaired(2);
    ct5.attack("Enemy2");
    ct5.takeDamage(9);
    ct5.attack("Enemy3"); // Deve falhar por falta de HP

    return 0;
}
