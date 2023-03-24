// Напишете
// функция , подобна на тази от предходната задача , но да работи с floating point числа и да принтира
// резултата в колони от по 8 символа , подравнени отдясно , с точност до 3 цифри след десетичната запетая

#include <iostream>
#include <iomanip>

void printMinMaxAverage(std::istream &input)
{
    int count = 0;
    double min = INFINITY;
    double max = -INFINITY;
    double sum = 0.0;

    double x;
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

    std::cout << std::setw(8) << std::right << std::fixed << std::setprecision(3) << min << std::endl;
    std::cout << std::setw(8) << std::right << std::fixed << std::setprecision(3) << max << std::endl;
    std::cout << std::setw(8) << std::right << std::fixed << std::setprecision(3) << average << std::endl;
}

int main()
{
    std::cout << "Enter numbers: ";
    printMinMaxAverage(std::cin);
    return 0;
}
