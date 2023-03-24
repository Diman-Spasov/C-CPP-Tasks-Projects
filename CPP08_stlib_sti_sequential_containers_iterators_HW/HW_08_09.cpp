// Дефинирайте list от имена на другари, който партията желае сортиран лексикографски.
// Напишете цикъл, в който потребителя въвежда имена до въвеждане на празен низ или EOF.
// “Сортирайте” списъка, премахвайки името на всеки другар, което нарушава лексикографската подредба.

#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> companions = {"Amy", "Bill", "Clara", "Danny", "Evelyn", "Frobisher", "Graham"};

    std::cout << "Enter companion names (empty line to exit):\n";

    std::string name;
    while (std::getline(std::cin, name) && !name.empty())
    {
        companions.push_back(name);
    }

    companions.sort();

    auto it = companions.begin();
    while (it != companions.end())
    {
        auto current = it++;
        if (it != companions.end() && *it < *current)
        {
            companions.erase(current);
        }
    }

    std::cout << "The final list of companions is:\n";
    for (const auto &companion : companions)
    {
        std::cout << " - " << companion << "\n";
    }

    return 0;
}
