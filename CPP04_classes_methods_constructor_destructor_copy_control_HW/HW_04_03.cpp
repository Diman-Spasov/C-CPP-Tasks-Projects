// Дефинирайте конструктор, който взима като параметър const char * и прави копие на подадения аргумент - заделя памет на
// хийпа с new, запазва началото й в char* data member’а си и копира съдържанието от аргумента в новосъздадената памет.

namespace ca
{
    class string
    {
    private:
        char *str;

    public:
        string() : str(nullptr) {}

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
