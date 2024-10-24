#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    /*+++++++++++++++++First test++++++++++++++++++++*/

    // std::cout << "===== Construction =====" << std::endl << std::endl;
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal* k = new WrongCat();
    
    // std::cout << std::endl << std::endl;
    // std::cout << "===== Function call =====" << std::endl << std::endl;
    // std::cout << "___getType____" << std::endl;
    // std::cout << j->getType() << std::endl;
    // std::cout << i->getType() << std::endl;
    // std::cout << k->getType() << std::endl;
    // std::cout << meta->getType() << std::endl << std::endl;
    // std::cout << "___makeSound____" << std::endl;
    // i->makeSound();
    // j->makeSound();
    // k->makeSound();
    // meta->makeSound();
    // std::cout << std::endl << std::endl;
    // std::cout << "===== Destruction =====" << std::endl << std::endl;

    // delete meta;
    // delete i;
    // delete j;
    // delete k;


    /*+++++++++++++++++Second test++++++++++++++++++++*/

    std::cout << "===== Construction & Assignation =====" << std::endl << std::endl;
    Cat* cat = new Cat();

    cat->setIdea("test", 0);

    Cat* cat2 = new Cat(*cat);
    Cat cat3;
    cat3 = *cat;
    std::cout << std::endl;
    
    std::cout << "===== First step =====" << std::endl;
    std::cout << "idea 0 of cat: " << cat->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat2: " << cat2->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat3: " << cat3.getIdea(0) << std::endl;
    std::cout << std::endl;

    cat->setIdea("cat", 0);

    std::cout << "===== Second step =====" << std::endl;
    std::cout << "idea 0 of cat: " << cat->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat2: " << cat2->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat3: " << cat3.getIdea(0) << std::endl;
    std::cout << std::endl;

    cat2->setIdea("cat2", 0);
    
    std::cout << "===== third step =====" << std::endl;
    std::cout << "idea 0 of cat: " << cat->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat2: " << cat2->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat3: " << cat3.getIdea(0) << std::endl;
    std::cout << std::endl;

    cat3.setIdea("cat3", 0);

    std::cout << "===== Last step =====" << std::endl;
    std::cout << "idea 0 of cat: " << cat->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat2: " << cat2->getIdea(0) << std::endl;
    std::cout << "idea 0 of cat3: " << cat3.getIdea(0) << std::endl;
    std::cout << std::endl;

    std::cout << "===== Destruction =====" << std::endl << std::endl;
    delete cat;
    delete cat2;

    return 0;
}