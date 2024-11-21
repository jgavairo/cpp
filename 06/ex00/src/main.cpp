#include "ScalarConverter.hpp"

int main(int argc, char**argv)
{
    ScalarConverter ok;
    if (argc == 2)
    {
        if (argv[1][0] == 't')
        {
            try
            {
                // Liste des tests
                const char* tests[] = 
                {
                    // Cas classiques
                    "0", "-42", "42", "127", "a", "z", "9", 
                    "0.0", "-4.2", "4.2", "42.0f", "3.14", "-3.14", 

                    // Pseudo-littéraux
                    "nan", "nanf", "+inf", "-inf", "+inff", "-inff", 

                    // Cas limites
                    "2147483647", "-2147483648", "340282346638528859811704183484516925440.0f", // FLT_MAX
                    "-340282346638528859811704183484516925440.0f", // -FLT_MAX
                    "1.175494351e-38f", // FLT_MIN
                    "-1.175494351e-38f", 
                    "1.7976931348623157e+308", // DBL_MAX
                    "-1.7976931348623157e+308", // -DBL_MAX

                    // Cas non-convertibles
                    "text", "42.0.0", "--42", "4.2.2f", "NaN", "'\\n'", "''", 

                    NULL // Indicateur de fin
                };
                // Boucle pour tester tous les cas
                for (int i = 0; tests[i] != NULL; i++) 
                {
                    std::cout << "Test " << i + 1 << ": " << tests[i] << std::endl;
                    ScalarConverter::convert(tests[i]);
                    std::cout << std::endl << std::endl;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << "Test error: " << e.what() << std::endl;
            }
        }
        else
        {
            try
            {
                ScalarConverter::convert(argv[1]);
            }
            catch(const std::exception& e)
            {
                std::cout << "Error : " << e.what() << std::endl;
            }
        }
    }
    else
        std::cout << "bad argument\n";


    return 0;
}