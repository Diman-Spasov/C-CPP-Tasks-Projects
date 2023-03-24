// За програма за менажиране на книгите в библиотека, дефинирайте клас BookInfo с private член данни за следната
// информация:
// ●
// ISBN (International Standard Book Number)
// уникален идентификатор на заглавието
// ●
// Заглавие
// ●
// Номер на издание
// ●
// Автор(и)
// ●
// Жанр(ове)
// ●
// Потребителски рейтинг
// число от 0 до 5
// ●
// .. (каквото друго е необходимо в следващите задачи)

#include <string>
#include <vector>

class BookInfo
{
private:
    std::string isbn;
    std::string title;
    int edition;
    std::vector<std::string> authors;
    std::vector<std::string> genres;
    int rating;

public:
    BookInfo(std::string isbn, std::string title, int edition,
             std::vector<std::string> authors, std::vector<std::string> genres,
             int rating);

    std::string get_isbn() const;
    std::string get_title() const;
    int get_edition() const;
    std::vector<std::string> get_authors() const;
    std::vector<std::string> get_genres() const;
    int get_rating() const;

    void set_isbn(std::string isbn);
    void set_title(std::string title);
    void set_edition(int edition);
    void set_authors(std::vector<std::string> authors);
    void set_genres(std::vector<std::string> genres);
    void set_rating(int rating);

    bool operator==(const BookInfo &other) const;
};
