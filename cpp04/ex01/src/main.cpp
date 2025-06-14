#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "--- Testando Animal, Dog e Cat com polimorfismo ---" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound(); // deve imprimir som de gato
    j->makeSound(); // deve imprimir som de cachorro
    meta->makeSound(); // som genérico de animal

    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- Testando WrongAnimal e WrongCat (Sem Polimorfismo) ---" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;

    wrong->makeSound();      // Som genérico
    wrongCat->makeSound();   // Vai imprimir o som da classe base! (porque não é virtual)

    delete wrong;
    delete wrongCat;

    return 0;
}
