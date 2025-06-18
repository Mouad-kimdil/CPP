#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *x = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound(); // will output the cat sound
    i->makeSound(); // will output the dog sound
    meta->makeSound(); // will outout the animal message


    std::cout << x->getType() << " " << std::endl;
    x->makeSound();
    wrong->makeSound();

    delete meta;
    delete i;
    delete j;
    delete wrong;
    delete x;

    return 0;
}