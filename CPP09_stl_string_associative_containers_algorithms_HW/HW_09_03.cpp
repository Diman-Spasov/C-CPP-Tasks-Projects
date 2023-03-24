// Дефинирайте функция, която приема телефонен указател (представен с std::map) и принтира всички множества от имена,
// които имат еднакъв телефонен номер.

#include <iostream>
#include <map>
#include <vector>

void print_duplicate_numbers(const std::map<std::string, std::string> &phonebook)
{
    std::map<std::string, std::vector<std::string>> number_to_names;
    for (const auto &[name, number] : phonebook)
    {
        number_to_names[number].push_back(name);
    }
    for (const auto &[number, names] : number_to_names)
    {
        if (names.size() > 1)
        {
            std::cout << "Phone number " << number << " is shared by:";
            for (const auto &name : names)
            {
                std::cout << " " << name;
            }
            std::cout << std::endl;
        }
    }
}
