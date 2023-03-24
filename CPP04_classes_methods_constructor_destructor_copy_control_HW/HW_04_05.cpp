// Дефинирайте деструктор, който освобождава алокираната от класа памет.ca::string ще има нужда от deep copy, защото когато копираме ca::string обект, не искаме те да споделят обща памет на хийпа
// (промяна в единия низ да се отразява на другия). Това, което дефинираните имплицитно от компилатора copy constructor и
// operator= правят е именно това - те копират стойността на char * data member’а. Това, което трябва да направим е да
// алокираме наново паметта при копиране и да копираме стойностите от оригиналната памет в паметта на новия стринг (за
// който се вика copy constructor или operator=)

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

        string(const string &other) : str(nullptr)
        {
            if (other.str != nullptr)
            {
                str = new char[strlen(other.str) + 1];

                strcpy(str, other.str);
            }
        }

        string &operator=(const string &other)
        {
            if (this != &other)
            {
                delete[] str;
                str = nullptr;

                if (other.str != nullptr)
                {
                    str = new char[strlen(other.str) + 1];

                    strcpy(str, other.str);
                }
            }

            return *this;
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
