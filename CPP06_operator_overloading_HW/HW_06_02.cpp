// Дефинирайте бинарен + оператор за ca::string, който дa конкатенира аргументите си

ca::string operator+(const ca::string &lhs, const ca::string &rhs)
{
    ca::string result(lhs);
    result.append(rhs);
    return result;
}
