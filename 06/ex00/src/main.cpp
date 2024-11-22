#include "ScalarConverter.hpp"

int main(int argc, char**argv)
{
    if (argc == 2)
    {
        if (argv[1][0] == 't')
        {
            try
            {
                // Liste des tests
                const char* tests[] = 
                {
                    "0", "-42", "42", "127", "a", "z", "9", 
                    "0.0", "-4.2", "4.2", "42.0f", "3.14", "-3.14", 

                    "nan", "nanf", "+inf", "-inf", "+inff", "-inff", 

                    "2147483647", "-2147483648", "340282346638528859811704183484516925440.0f",
                    "-340282346638528859811704183484516925440.0f",
                    "1.175494351e-38f",
                    "-1.175494351e-38f", 
                    "1.7976931348623157e+308",
                    "-1.7976931348623157e+308",

                    "text", "42.0.0", "--42", "4.2.2f", "NaN", "'\\n'", "''", 

                    NULL
                };
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