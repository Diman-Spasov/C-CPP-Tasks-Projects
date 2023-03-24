// Дефинирайте оператори за вход и изход на книга и на колекция от книги

std::istream &operator>>(std::istream &is, BookInfo &book)
{
    std::string title, authors, genres;
    int edition;
    double rating;
    std::vector<std::string> series;

    std::getline(is, book.isbn);
    std::getline(is, title);
    is >> edition;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(is, authors);
    std::getline(is, genres);
    is >> rating;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string seriesList;
    std::getline(is, seriesList);

    std::istringstream seriesStream(seriesList);
    std::string seriesName;
    while (std::getline(seriesStream, seriesName, ','))
    {
        series.push_back(seriesName);
    }

    book.setTitle(title);
    book.setEdition(edition);
    book.setAuthors(authors);
    book.setGenres(genres);
    book.setRating(rating);
    book.setSeries(series);

    return is;
}

std::ostream &operator<<(std::ostream &os, const BookInfo &book)
{
    os << "ISBN: " << book.getISBN() << std::endl;
    os << "Title: " << book.getTitle() << std::endl;
    os << "Edition: " << book.getEdition() << std::endl;
    os << "Authors: " << book.getAuthors() << std::endl;
    os << "Genres: " << book.getGenres() << std::endl;
    os << "Rating: " << book.getRating() << std::endl;
    os << "Series: ";
    for (const auto &series : book.getSeries())
    {
        os << series << ", ";
    }
    os << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, BookCollection &collection)
{
    std::string bookList;
    std::getline(is, bookList);

    std::istringstream bookStream(bookList);
    std::string bookIsbn;
    while (std::getline(bookStream, bookIsbn, ','))
    {
        collection.addBook(bookIsbn);
    }

    return is;
}

std::ostream &operator<<(std::ostream &os, const BookCollection &collection)
{
    os << "Books in collection: " << std::endl;
    for (const auto &book : collection.getBooks())
    {
        os << book << std::endl;
    }
    return os;
}
