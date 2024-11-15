#include "ScalarConverter.hpp"

int main(int argc, char**argv)
{
    if (argc == 2)
        ScalarConverter::convert(argv[1]);
    else
        std::cout << "bad argument\n";
    return 0;
}
// int main() {
//     try {
//         std::cout << "--Int--" << std::endl;
//         ScalarConverter::convert("42");
//         std::cout << std::endl << std::endl;

//         std::cout << "--Float--" << std::endl;
//         ScalarConverter::convert("3.14f");
//         std::cout << std::endl << std::endl;

//         std::cout << "--Double--" << std::endl;
//         ScalarConverter::convert("nan");
//         std::cout << std::endl << std::endl;

//         std::cout << "--Char--" << std::endl;
//         ScalarConverter::convert("'c'");
//         std::cout << std::endl << std::endl;

//     } catch (const std::exception& e) {
//         std::cout << "Erreur : " << e.what() << std::endl;
//     }
//     return 0;
// }