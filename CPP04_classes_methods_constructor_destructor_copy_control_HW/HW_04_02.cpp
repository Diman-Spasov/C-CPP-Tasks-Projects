// Дефинирайте клас ca::string (клас с име string в namespace ca).
// Дефинирайте private data member от тип char *, който сочи към динамично-алокирания на хийпа символен низ.
// Дефинирайте интерфейсна (public) функция c_str, която връща низа като константен c-style string - const char *.

namespace ca
{
    class string
    {
    private:
        char *str;

    public:
        string(const char *s)
        {
            str = new char[strlen(s) + 1];

            strcpy(str, s);
        }

        ~string()
        {
            delete[] str;
        }

        const char *c_str() const
        {
            return str;
        }
    };
}
