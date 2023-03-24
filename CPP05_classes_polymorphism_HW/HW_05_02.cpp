// Дефинирайте класове (които наследяват Product) за всеки вид продукт, който ще продава книжарницата (поне 2 вида).
// Дефинирайте класове BookProduct и BookSeriesProduct
// кнужарницата предлага както отделни книги, така и цяла колекция накуп
// като отделен продукт (цялостта на колекцията не се нарушава продава се цялата наведнъж)

#include <string>
#include "Product.h"

enum E_ProductType
{
    BOOK_PRODUCT,
    BOOK_SERIES_PRODUCT
};

class BookProduct : public Product
{
public:
    BookProduct(double price, const std::string &title, const std::string &author)
        : Product(price), m_title(title), m_author(author) {}

    virtual E_ProductType GetProductType() const override
    {
        return BOOK_PRODUCT;
    }

    const std::string &GetTitle() const
    {
        return m_title;
    }

    const std::string &GetAuthor() const
    {
        return m_author;
    }

private:
    std::string m_title;
    std::string m_author;
};

class BookSeriesProduct : public Product
{
public:
    BookSeriesProduct(double price, const std::string &seriesName, int numBooks)
        : Product(price), m_seriesName(seriesName), m_numBooks(numBooks) {}

    virtual E_ProductType GetProductType() const override
    {
        return BOOK_SERIES_PRODUCT;
    }

    const std::string &GetSeriesName() const
    {
        return m_seriesName;
    }

    int GetNumBooks() const
    {
        return m_numBooks;
    }

private:
    std::string m_seriesName;
    int m_numBooks;
};
