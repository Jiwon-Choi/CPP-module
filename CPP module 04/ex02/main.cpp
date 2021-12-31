#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    // const Animal* animal = new Animal();
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    delete cat;
    delete dog;

    return (0);
}
