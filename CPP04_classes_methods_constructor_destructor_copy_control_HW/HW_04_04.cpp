// Дефинирайте default constructor и инициализирайте паметта с празен с-стринг.

namespace ca
{
    class string
    {
    private:
        char *str;

    public:
        string() : str(new char[1])
        {
            *str = '\0';
        }

        string(const char *s) : str(nullptr)
        {
            if (s != nullptr)
            {
                str = new char[strlen(s) + 1];

                strcpy(str, s);
            }
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
