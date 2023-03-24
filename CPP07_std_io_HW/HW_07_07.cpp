// Разширете
// функционалността на програмата за книжарници , като добавите необходимия error handling.
// Ползвайте стандартния изходен поток за грешки cerr за да уведомявате потребителя за грешки

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

class Book
{
private:
    std::string title_;
    std::string author_;
    int year_;
    double price_;

public:
    Book(const std::string &title, const std::string &author, int year, double price)
        : title_(title), author_(author), year_(year), price_(price)
    {
    }
    const std::string &getTitle() const
    {
        return title_;
    }
    const std::string &getAuthor() const
    {
        return author_;
    }
    int getYear() const
    {
        return year_;
    }
    double getPrice() const
    {
        return price_;
    }
};

class Bookstore
{
private:
    std::vector<Book> books_;

public:
    void addBook(const Book &book)
    {
        books_.push_back(book);
    }
    void printBooks() const
    {
        for (const auto &book : books_)
        {
            std::cout << book.getTitle() << " by " << book.getAuthor()
                      << ", published in " << book.getYear()
                      << ", price: " << book.getPrice() << " BGN" << std::endl;
        }
    }
};

int main()
{
    Bookstore store;

    std::string title, author;
    int year;
    double price;
    while (std::cin >> title >> author >> year >> price)
    {
        try
        {
            store.addBook(Book(title, author, year, price));
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    std::cout << "Books in the store:\n";
    store.printBooks();

    return 0;
}
