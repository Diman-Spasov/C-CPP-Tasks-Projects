// Дефинирайте операторите за сравняване на стрингове: лексикографски, според ANSI таблицата. ( ==, !=, >, >=, <, <=)

bool operator==(const ca::string &s1, const ca::string &s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    for (size_t i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

bool operator!=(const ca::string &s1, const ca::string &s2)
{
    return !(s1 == s2);
}

bool operator>(const ca::string &s1, const ca::string &s2)
{
    size_t i = 0;
    while (i < s1.length() && i < s2.length())
    {
        if (s1[i] > s2[i])
        {
            return true;
        }
        else if (s1[i] < s2[i])
        {
            return false;
        }
        i++;
    }
    return (i == s1.length() && i < s2.length());
}

bool operator>=(const ca::string &s1, const ca::string &s2)
{
    return (s1 > s2 || s1 == s2);
}

bool operator<(const ca::string &s1, const ca::string &s2)
{
    return !(s1 >= s2);
}

bool operator<=(const ca::string &s1, const ca::string &s2)
{
    return !(s1 > s2);
}
