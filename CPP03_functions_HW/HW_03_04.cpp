// Дефинирайте getter методи за достъп за четене до всички член данни от предходната задача.
// Дефинирайте setter метод само за потребителския рейтинг (тъй като само той се очаква да се променя
// останалите членове,
// веднъж инициализирани, запазват стойността си непроменена до затваряне на програмата, поне такова очакване имаме до
// момента).

class BookInfo
{
private:
    std::string isbn;
    std::string title;
    int edition;
    std::vector<std::string> authors;
    std::vector<std::string> genres;
    int userRating;

public:
    std::string getISBN() const { return isbn; }
    std::string getTitle() const { return title; }
    int getEdition() const { return edition; }
    std::vector<std::string> getAuthors() const { return authors; }
    std::vector<std::string> getGenres() const { return genres; }
    int getUserRating() const { return userRating; }

    void setUserRating(int rating) { userRating = rating; }
};
