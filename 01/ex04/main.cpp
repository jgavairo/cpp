/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:20:27 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/06 16:45:11 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstddef>
#include <string>

std::string replaceOccurences(std::string content, const std::string& s1, const std::string& s2)
{
    size_t i = 0;
    
    while ((i = content.find(s1, i)) != std::string::npos)
    {
        content.erase(i, s1.length());
        content.insert(i, s2);
        i += s2.length();
    }
    return (content);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        return (std::cerr << "Bad arguments, please type './sed <filename> <s1> <s2>' (search s1 and replace of s2)" << std::endl, -1);
    }
    std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];
    
    if (s1.empty())
        return (std::cerr << "Error: s1 cannot be an empty string." << std::endl, -1);
    
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
        return (std::cerr << "Error: could not open file" << std::endl, -1);

    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    std::string newContent = replaceOccurences(content, s1, s2);

    std::string outputFileName = filename + ".replace";
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open())
        return (std::cerr << "Error: could not create a new file" << std::endl, -1);
    
    outputFile << newContent;
    outputFile.close();

    std::cout << "File processed successfully. Output written to: " << outputFileName << std::endl;

    return (0);    
}
