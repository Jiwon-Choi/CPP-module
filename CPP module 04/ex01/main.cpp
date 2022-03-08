#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL_SIZE 2

int main(void) {
    Animal* animal[ANIMAL_SIZE];

    for (int i = 0; i < ANIMAL_SIZE; i++) {
        std::cout << i << std::endl;
        if (i < ANIMAL_SIZE / 2) {
            animal[i] = new Cat();
            static_cast<Cat*>(animal[i])->addBrainIdea("Cat's idea");
            std::cout << "idea : " << static_cast<Cat*>(animal[i])->getBrainIdea(0) << std::endl;
        } else {
            animal[i] = new Dog();
            static_cast<Dog*>(animal[i])->addBrainIdea("Dog's idea");
            std::cout << "idea : " << static_cast<Dog*>(animal[i])->getBrainIdea(0) << std::endl;
        }
        std::cout << "type : " << animal[i]->getType() << std::endl;
        std::cout << "sound : "; animal[i]->makeSound();
    }

    std::cout << "-------------------------------------------" << std::endl;
    Cat cat = *static_cast<Cat*>(animal[0]);
    std::cout << "idea : " << cat.getBrainIdea(0) << std::endl;
    cat.addBrainIdea("Add idea");
    std::cout << "idea : " << cat.getBrainIdea(1) << std::endl;
    std::cout << "idea : " << static_cast<Cat*>(animal[0])->getBrainIdea(1) << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    for (int i = 0; i < ANIMAL_SIZE; i++) {
        std::cout << i << std::endl;
        delete animal[i];
    }

    return (0);
}
