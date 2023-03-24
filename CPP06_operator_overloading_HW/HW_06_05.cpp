// Дефинирайте оператори за вход и изход на ca::string с istream и ostream.

std::istream &operator>>(std::istream &is, ca::string &str)
{
    char c;
    str.clear();
    while (is.get(c))
    {
        if (c == '\n')
        {
            break;
        }
        str += c;
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, const ca::string &str)
{
    os.write(str.c_str(), str.size());
    return os;
}
