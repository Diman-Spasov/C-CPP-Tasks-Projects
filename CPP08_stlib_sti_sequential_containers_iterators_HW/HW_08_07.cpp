// Напишете програма, която моли потребителя да въведе списък от цели числа, след което принтира най
// дългата поредица от
// елементи в списъка, която е сортирана. За принтирането, използвайте функция, която работи с iterator range, вместо с const
// list<int>& параметър.

#include <iostream>
#include <list>
#include <algorithm>

template <typename Iter>
void print_range(Iter begin, Iter end)
{
    for (auto it = begin; it != end; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> lst;

    std::cout << "Enter a list of integers (EOF or non-integer to end): ";
    int num;
    while (std::cin >> num)
    {
        lst.push_back(num);
    }

    auto begin = lst.begin();
    auto end = begin;
    auto longest_begin = begin;
    auto longest_end = end;

    while (end != lst.end())
    {
        auto next = std::adjacent_find(end, lst.end(), std::greater_equal<int>());
        if (next != lst.end())
        {
            end = std::next(next);
        }
        else
        {
            end = lst.end();
        }
        if (std::distance(begin, end) > std::distance(longest_begin, longest_end))
        {
            longest_begin = begin;
            longest_end = end;
        }
        begin = end;
    }

    std::cout << "Longest sorted sequence: ";
    print_range(longest_begin, longest_end);

    return 0;
}
