// Напишете
// функция , която приема име на файл , който да отвори и от който да чете . Функцията трябва да прочита всички думи
// от файла и да ги записва в обратен ред във втори файл , който има името на първия , но с “_reverse” в името

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void reverseWords(const std::string &filename)
{
    std::ifstream input_file(filename);
    if (!input_file)
    {
        std::cerr << "Error opening input file: " << filename << std::endl;
        return;
    }

    std::string output_filename = filename;
    size_t dot_pos = output_filename.find_last_of('.');
    if (dot_pos != std::string::npos)
    {
        output_filename = output_filename.substr(0, dot_pos);
    }
    output_filename += "_reverse.txt";

    std::ofstream output_file(output_filename);
    if (!output_file)
    {
        std::cerr << "Error opening output file: " << output_filename << std::endl;
        return;
    }

    std::string word;
    std::vector<std::string> words;
    while (input_file >> word)
    {
        words.push_back(word);
    }

    std::reverse(words.begin(), words.end());

    for (const auto &w : words)
    {
        output_file << w << " ";
    }
}
