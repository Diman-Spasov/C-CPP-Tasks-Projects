// Напишете програма, която моли потребителя да въведе цели числа във vector, след което принтира всички уникални
// елементи на контейнера

#include <iostream>
#include <vector>
#include <set>

int main()
{
    std::vector<int> numbers;
    int input;
    while (std::cin >> input)
    {
        numbers.push_back(input);
    }

    std::set<int> unique_numbers;
    for (auto num : numbers)
    {
        unique_numbers.insert(num);
    }

    std::cout << "Unique elements: ";
    for (auto num : unique_numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
