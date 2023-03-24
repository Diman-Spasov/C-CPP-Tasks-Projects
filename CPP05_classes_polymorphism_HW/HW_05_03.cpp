// Дефинирайте мениджър клас ProductManager. Направете така, че да не може да се създават обекти от тип Product (или който и да
// е тип от Product йерархията) от никъде освен от метод на ProductManager.

class Product
{
protected:
    double price;

public:
    virtual ~Product() {}
    virtual E_ProductType getProductType() const = 0;

    double getPrice() const
    {
        return price;
    }

    friend class ProductManager;
};

class BookProduct : public Product
{
private:
    std::string title;
    std::string author;

protected:
    BookProduct(double price, const std::string &title, const std::string &author)
        : title(title), author(author)
    {
        this->price = price;
    }

public:
    virtual E_ProductType getProductType() const override
    {
        return E_ProductType::BOOK;
    }

    const std::string &getTitle() const
    {
        return title;
    }

    const std::string &getAuthor() const
    {
        return author;
    }

    friend class ProductManager;
};

class BookSeriesProduct : public Product
{
private:
    std::string seriesTitle;
    int numBooks;

protected:
    BookSeriesProduct(double price, const std::string &seriesTitle, int numBooks)
        : seriesTitle(seriesTitle), numBooks(numBooks)
    {
        this->price = price;
    }

public:
    virtual E_ProductType getProductType() const override
    {
        return E_ProductType::BOOK_SERIES;
    }

    const std::string &getSeriesTitle() const
    {
        return seriesTitle;
    }

    int getNumBooks() const
    {
        return numBooks;
    }

    friend class ProductManager;
};

class ProductManager
{
public:
    static BookProduct *createBookProduct(double price, const std::string &title, const std::string &author)
    {
        return new BookProduct(price, title, author);
    }

    static BookSeriesProduct *createBookSeriesProduct(double price, const std::string &seriesTitle, int numBooks)
    {
        return new BookSeriesProduct(price, seriesTitle, numBooks);
    }
};
