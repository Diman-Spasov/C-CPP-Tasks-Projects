// Дефинирайте клас, който репрезентира колекция(поредица) от книги. Една книга би могла да е част от различни поредици.
// Дефинирайте член данни за това от кои книги се състои колекцията, метод за инициализация на колекцията и интерфейс за
// достъп до информацията клиентите на класа трябва да могат да имат достъп за четене на това кои книги са част от
// поредицата.

#include <vector>

class BookCollection
{
private:
    std::vector<BookInfo> books;

public:
    void addBook(const BookInfo &book)
    {
        books.push_back(book);
    }

    const std::vector<BookInfo> &getBooks() const
    {
        return books;
    }
};
