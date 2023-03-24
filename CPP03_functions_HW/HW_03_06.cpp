// Добавете член данна в BookInfo, която репрезентира колекцията от поредици, в които присъства всяка книга. Дефинирайте
// интерфейс за достъп за четене до поредиците, в които присъства всяка книга.
// Правим тази двойна връзка (хем колекцията пази от кои книги се състои, хем всяка книга пази колекциите, в които е) за да
// можем да имаме бърз достъп до:
// ●
// Поредиците, в които присъства дадена книга, без да трябва да обхождаме всички поредици и книгите в тях
// ●
// Книгите, които присъстват в дадена поредица, без да трябва да обхождаме

#include <string>
#include <vector>

class BookInfo
{
public:
    BookInfo(std::string isbn, std::string title, int edition,
             std::string author, std::vector<std::string> genres,
             int user_rating);

    std::string get_isbn() const;
    std::string get_title() const;
    int get_edition() const;
    std::string get_author() const;
    std::vector<std::string> get_genres() const;
    int get_user_rating() const;
    std::vector<std::string> get_series() const; 

    void set_user_rating(int rating);

    void add_series(std::string series);

private:
    std::string isbn_;
    std::string title_;
    int edition_;
    std::string author_;
    std::vector<std::string> genres_;
    int user_rating_;
    std::vector<std::string> series_; 
};

BookInfo::BookInfo(std::string isbn, std::string title, int edition,
                   std::string author, std::vector<std::string> genres,
                   int user_rating)
    : isbn_(isbn), title_(title), edition_(edition), author_(author),
      genres_(genres), user_rating_(user_rating) {}

std::string BookInfo::get_isbn() const
{
    return isbn_;
}

std::string BookInfo::get_title() const
{
    return title_;
}

int BookInfo::get_edition() const
{
    return edition_;
}

std::string BookInfo::get_author() const
{
    return author_;
}

std::vector<std::string> BookInfo::get_genres() const
{
    return genres_;
}

int BookInfo::get_user_rating() const
{
    return user_rating_;
}

std::vector<std::string> BookInfo::get_series() const
{
    return series_;
}

void BookInfo::set_user_rating(int rating)
{
    user_rating_ = rating;
}

void BookInfo::add_series(std::string series)
{
    series_.push_back(series);
}
