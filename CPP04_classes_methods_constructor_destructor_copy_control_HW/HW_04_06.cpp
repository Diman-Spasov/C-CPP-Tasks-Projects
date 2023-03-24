// Дефинирайте copy constructor за ca::string

namespace ca
{
    class string
    {
    private:
        char *data;

    public:
        string(const char *str)
        {
        }

        string(const string &other)
        {
            data = new char[strlen(other.data) + 1];

            strcpy(data, other.data);
        }
    };
}
