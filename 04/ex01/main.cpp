#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal* k = new WrongCat();
    
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // k->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete i;
    // delete j;
    // delete k;

    Cat* cat = new Cat();
    Cat* cat2 = new Cat();
    

    cat->setIdea("MIAOU", 0);
    std::cout << "idea 0 of cat: " << cat->getIdea(0) << std::endl;

    cat2->setIdea("WOUAF", 0);
    std::cout << "idea 0 of dog: " << cat2->getIdea(0) << std::endl;

    cat2 = cat;

    std::cout << "idea 0 of dog: " << cat2->getIdea(0) << std::endl;
    
    cat->setIdea("C PAS MOI C LOIC", 1);

    std::cout << "idea 1 of cat: " << cat->getIdea(1) << std::endl;

    std::cout << "idea 1 of dog: " << cat2->getIdea(1) << std::endl;


    return 0;
}