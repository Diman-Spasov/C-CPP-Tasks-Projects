// Напишете
// функция , която чете от istream цели числа и принтира най голямото , най малкото и средното
// аритметично от на всички прочетени числа

#include <iostream>
#include <limits>
#include <cmath>

void printMinMaxAverage(std::istream &input)
{
    int count = 0;
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    double sum = 0.0;
    int x;
    while (input >> x)
    {
        count++;
        if (x < min)
        {
            min = x;
        }
        if (x > max)
        {
            max = x;
        }
        sum += x;
    }

    if (count == 0)
    {
        std::cerr << "No numbers were read.\n";
        return;
    }

    double average = sum / count;
    int roundedAverage = std::round(average);

    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;
    std::cout << "Average: " << roundedAverage << " (rounded from " << average << ")\n";
}

int main()
{
    std::cout << "Enter numbers: ";
    printMinMaxAverage(std::cin);
    return 0;
}
