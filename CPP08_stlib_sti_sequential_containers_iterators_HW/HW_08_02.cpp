// Напишете функция, която приема deque от int числа и премахва всички нечетни числа от контейнера.

#include <iostream>
#include <deque>

void remove_odd_numbers(std::deque<int> &numbers)
{
    for (auto it = numbers.begin(); it != numbers.end();)
    {
        if (*it % 2 != 0)
        {
            it = numbers.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

int main()
{
    std::deque<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Before: ";
    for (auto num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    remove_odd_numbers(numbers);

    std::cout << "After: ";
    for (auto num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
