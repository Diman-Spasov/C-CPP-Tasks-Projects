// Дефинирайте operator= за ca::string класа. Внимание: когато дефинираме operator= експлицитно, обикновено се налага да
// проверим за “присвояване на себе си”:
// ca::string str(“Hello”);
// str = str; // should not do anything -
// Направете въпросната проверка в началото на тялото на оператора и ако се опитваме да присвоим един стринг на себе си,
// просто не правете нищо (return)

ca::string &ca::string::operator=(const ca::string &other)
{
    if (this == &other)
    {
        return *this;
    }

    delete[] data;

    data = new char[strlen(other.data) + 1];
    strcpy(data, other.data);

    return *this;
}
