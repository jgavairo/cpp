// #include <iostream>
// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

#include <iostream>
#include <cstdlib>  // Pour srand et rand
#include <ctime>    // Pour time
#include <exception> // Pour std::out_of_range
#include "Array.hpp"

#define MAX_VAL 10

// Fonction d'affichage des éléments d'un tableau
template <typename T>
void printArray(const Array<T>& array) {
    for (size_t i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    srand(time(NULL));  // Initialisation du générateur de nombres aléatoires

    // 1. Test de la création d'un tableau vide
    std::cout << "Test 1: Création d'un tableau vide" << std::endl;
    Array<int> emptyArray;
    std::cout << "Taille du tableau vide : " << emptyArray.size() << std::endl;

    // 2. Test de la création d'un tableau avec une taille spécifique
    std::cout << "\nTest 2: Création d'un tableau avec une taille de " << MAX_VAL << std::endl;
    Array<int> numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; ++i) {
        numbers[i] = rand() % 100;  // Remplir le tableau avec des nombres aléatoires entre 0 et 99
    }
    std::cout << "Contenu du tableau après initialisation : ";
    printArray(numbers);

    // 3. Test de la copie du tableau avec le constructeur de copie
    std::cout << "\nTest 3: Test du constructeur de copie" << std::endl;
    Array<int> copiedArray = numbers;
    std::cout << "Contenu du tableau copié : ";
    printArray(copiedArray);

    // 4. Test de l'opérateur d'affectation
    std::cout << "\nTest 4: Test de l'opérateur d'affectation" << std::endl;
    Array<int> assignedArray(MAX_VAL);
    assignedArray = numbers;
    std::cout << "Contenu du tableau affecté : ";
    printArray(assignedArray);

    // 5. Test des indices valides
    std::cout << "\nTest 5: Test de l'accès aux indices valides" << std::endl;
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << "Element à l'indice " << i << ": " << numbers[i] << std::endl;
    }

    // 6. Test de l'accès aux indices hors limites (indice négatif)
    std::cout << "\nTest 6: Test d'accès à un indice hors limites (indice négatif)" << std::endl;
    try {
        numbers[-1] = 42;  // Indice négatif
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur attrapée (indice négatif) : " << e.what() << std::endl;
    }

    // 7. Test de l'accès aux indices hors limites (indice supérieur ou égal à la taille)
    std::cout << "\nTest 7: Test d'accès à un indice hors limites (indice trop grand)" << std::endl;
    try {
        numbers[MAX_VAL] = 42;  // Indice supérieur ou égal à MAX_VAL
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur attrapée (indice trop grand) : " << e.what() << std::endl;
    }

    // 8. Test de la taille du tableau avec la méthode size()
    std::cout << "\nTest 8: Test de la méthode size()" << std::endl;
    std::cout << "Taille du tableau 'numbers' : " << numbers.size() << std::endl;

    // 9. Test de modification des éléments du tableau
    std::cout << "\nTest 9: Test de la modification des éléments du tableau" << std::endl;
    for (size_t i = 0; i < numbers.size(); ++i) {
        numbers[i] = rand() % 100;  // Nouvelle valeur aléatoire
    }
    std::cout << "Contenu du tableau après modification : ";
    printArray(numbers);

    // 10. Test de destruction du tableau
    std::cout << "\nTest 10: Test de la destruction du tableau" << std::endl;
    // Après la destruction, le tableau `numbers` sera libéré
    // Il n'y a pas de sortie à attendre ici, c'est juste pour vérifier que la destruction fonctionne sans erreur

    // Tableau temporaire pour tester la portée de l'objet
    {
        Array<int> tmp(MAX_VAL);
        for (size_t i = 0; i < tmp.size(); ++i) {
            tmp[i] = rand() % 100;
        }
        std::cout << "Contenu du tableau tmp (portée limitée) : ";
        printArray(tmp);
    } // `tmp` est détruit ici, et la mémoire allouée doit être correctement libérée

    return 0;
}
