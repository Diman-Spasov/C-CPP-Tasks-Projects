// Напишете програма, която моли потребителя да въведе цели числа във list, след което, премахва всички дублиращи се
// елементи и го принтира в обратен ред.

#include <iostream>
#include <list>
#include <algorithm>

int main()
{
    std::list<int> numbers;
    int input;
    while (std::cin >> input)
    {
        numbers.push_back(input);
    }

    numbers.sort();
    numbers.unique();

    std::cout << "Unique elements (reversed): ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
