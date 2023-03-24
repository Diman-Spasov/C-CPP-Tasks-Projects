// Напишете програма, която моли потребителя да въведе текст на няколко реда (до прочитане на EOF), след което прави
// всички думи от текста да започват с главна буква и принтира текста отзад напред (целия текст отзад напред, не по редове)

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string text, line;

    while (std::getline(std::cin, line))
    {
        text += line + '\n';
    }

    bool new_word = true;
    for (char &c : text)
    {
        if (new_word && std::isalpha(c))
        {
            c = std::toupper(c);
            new_word = false;
        }
        else if (std::isspace(c))
        {
            new_word = true;
        }
        else
        {
            new_word = false;
        }
    }

    std::reverse(text.begin(), text.end());
    std::cout << text;

    return 0;
}
