#include "Serializer.hpp"

int main()
{
    // Créer une instance de Data
    Data originalData = {42, "Example", 3.14f};

    // Sérialiser le pointeur
    unsigned long int serialized = Serializer::serialize(&originalData);

    // Désérialiser l'entier
    Data* deserialized = Serializer::deserialize(serialized);

    // Vérifier que les données sont identiques
    std::cout << "Original Data:" << std::endl;
    std::cout << "ID: " << originalData.id << ", Name: " << originalData.name 
              << ", Value: " << originalData.value << std::endl;

    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "ID: " << deserialized->id << ", Name: " << deserialized->name 
              << ", Value: " << deserialized->value << std::endl;

    // Vérifier si les adresses sont identiques
    std::cout << "Are the addresses the same? " 
              << (deserialized == &originalData ? "Yes" : "No") << std::endl;

    return 0;
}