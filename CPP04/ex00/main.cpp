#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound(); // will output the cat sound
    i->makeSound(); // will output the dog sound
    meta->makeSound(); // will outout the animal message

    delete meta;
    delete i;
    delete j;
    return 0;
}