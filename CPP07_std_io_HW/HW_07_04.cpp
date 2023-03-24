// Напишете
// функция , която прави същото като функцията от предходната задача , но с множество файлове функцията трябва
// да приема контейнер с имена на файлове , от които да чете

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void reverseWordsInFiles(const std::vector<std::string> &filenames)
{
    for (const auto &filename : filenames)
    {
        std::ifstream input(filename);
        if (!input)
        {
            std::cerr << "Error: could not open input file " << filename << std::endl;
            continue;
        }
        std::ofstream output(filename + "_reverse");
        if (!output)
        {
            std::cerr << "Error: could not open output file " << filename << "_reverse" << std::endl;
            continue;
        }
        std::string word;
        std::vector<std::string> words;
        while (input >> word)
        {
            words.push_back(word);
        }
        for (auto it = words.rbegin(); it != words.rend(); ++it)
        {
            output << *it << " ";
        }
        output.close();
        input.close();
    }
}
