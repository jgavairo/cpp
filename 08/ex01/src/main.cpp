#include "Span.hpp"
#include <iostream>

void testCopyAndAssignmentIndependence() 
{
    std::cout << "\n===== Test 8 : Independence of Copies =====" << std::endl;

    // Créer un objet Span et y ajouter des nombres
    Span sp(5);
    sp.addNumber(10);
    sp.addNumber(20);
    sp.addNumber(30);

    // Création par copie
    Span spCopy(sp);
    spCopy.addNumber(40);

    // Affectation
    Span spAssign(5);
    spAssign = sp;
    spAssign.addNumber(50);

    // Vérification des objets originaux et modifiés
    std::cout << "Original Span - Shortest: " << sp.shortestSpan() << ", Longest: " << sp.longestSpan() << std::endl;
    std::cout << "Copied Span - Shortest: " << spCopy.shortestSpan() << ", Longest: " << spCopy.longestSpan() << std::endl;
    std::cout << "Assigned Span - Shortest: " << spAssign.shortestSpan() << ", Longest: " << spAssign.longestSpan() << std::endl;
}


int main() {
    try {
        std::cout << "===== Test 1 : Basic functionality =====" << std::endl;

        // Création d'un objet Span avec une capacité de 5
        Span sp(10);

        // Ajout de 5 nombres
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        // Calcul des spans
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl; // Résultat attendu : 2
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;   // Résultat attendu : 14

        // std::cout << "\n===== Test 2 : Adding more than capacity =====" << std::endl;
        // try {
        //     sp.addNumber(42); // Devrait lever une exception
        // } catch (const std::exception& e) {
        //     std::cerr << "Error: " << e.what() << std::endl;
        // }

        std::cout << "\n===== Test 3 : Not enough numbers for spans =====" << std::endl;
        Span sp2(3);
        sp2.addNumber(10);

        try {
            std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl; // Devrait lever une exception
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        try {
            std::cout << "Longest span: " << sp2.longestSpan() << std::endl; // Devrait lever une exception
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << "\n===== Test 4 : Duplicates =====" << std::endl;
        Span sp3(3);
        sp3.addNumber(10);
        sp3.addNumber(10); // Ajout de doublons
        sp3.addNumber(20);

        // Calcul des spans
        std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl; // Résultat attendu : 0
        std::cout << "Longest span: " << sp3.longestSpan() << std::endl;   // Résultat attendu : 10

        std::cout << "\n===== Test 5 : Negative numbers =====" << std::endl;
        Span sp4(4);
        sp4.addNumber(-5);
        sp4.addNumber(-10);
        sp4.addNumber(0);
        sp4.addNumber(5);

        // Calcul des spans
        std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl; // Résultat attendu : 5
        std::cout << "Longest span: " << sp4.longestSpan() << std::endl;   // Résultat attendu : 15

        std::cout << "\n===== Test 6 : Copy constructor =====" << std::endl;
        Span spCopy(sp); // Copie de sp dans spCopy
        std::cout << "Shortest span (copied): " << spCopy.shortestSpan() << std::endl; // Résultat attendu : 2
        std::cout << "Longest span (copied): " << spCopy.longestSpan() << std::endl;   // Résultat attendu : 14

        // Vérifier que les objets sont indépendants
        spCopy.addNumber(42);
        std::cout << "Added 42 to spCopy" << std::endl;
        std::cout << "Original span longest span: " << sp.longestSpan() << std::endl; // Doit rester 14
        std::cout << "Copied span longest span: " << spCopy.longestSpan() << std::endl; // Résultat attendu : 42 - 3 = 39

        std::cout << "\n===== Test 7 : Assignment operator =====" << std::endl;
        Span spAssign(10); // Création d'un autre objet
        spAssign = sp;     // Affectation de sp à spAssign
        std::cout << "Shortest span (assigned): " << spAssign.shortestSpan() << std::endl; // Résultat attendu : 2
        std::cout << "Longest span (assigned): " << spAssign.longestSpan() << std::endl;   // Résultat attendu : 14

        // Vérifier que les objets sont indépendants après l'affectation
        spAssign.addNumber(100);
        std::cout << "Added 100 to spAssign" << std::endl;
        std::cout << "Original span longest span: " << sp.longestSpan() << std::endl; // Doit rester 14
        std::cout << "Assigned span longest span: " << spAssign.longestSpan() << std::endl; // Résultat attendu : 100 - 3 = 97

        std::cout << std::endl; 
        testCopyAndAssignmentIndependence();
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }

    return 0;
}
