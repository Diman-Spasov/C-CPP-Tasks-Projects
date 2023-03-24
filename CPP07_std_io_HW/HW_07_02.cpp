// Дефинирайте
// функция за отваряне на файл за четене , която приема ofstream и го връща като референция . Функцията трябва
// да приема и параметър за режима на отваряне на файла , който да има и подходяща default стойност

#include <fstream>
#include <string>

std::ifstream &open_input_file(std::ifstream &file, const std::string &filename, std::ios_base::openmode mode = std::ios_base::in)
{
    file.open(filename, mode);
    if (!file.is_open())
    {
        //hendle err.
    }
    return file;
}





int main()
{
    std::ifstream input_file;
    open_input_file(input_file, "meowmeowInput.txt");

    int x;
    while (input_file >> x)
    {
        std::cout << "Read integer: " << x << std::endl;
    }

    input_file.close();
    return 0;
}