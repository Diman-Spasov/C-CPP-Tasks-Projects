// Дефинирайте функция, която merge-ва два телефонни указателя (представени с std::map) в един (пак std::map).

#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> merge_phonebooks(const map<string, string> &book1, const map<string, string> &book2)
{
    map<string, string> merged_book = book1;

    for (const auto &entry : book2)
    {
        auto name = entry.first;
        auto number = entry.second;

        if (merged_book.find(name) != merged_book.end())
        {
            continue;
        }

        merged_book.insert({name, number});
    }

    return merged_book;
}

int main()
{
    map<string, string> book1 = {
        {"Alice", "088-1234"},
        {"Bob", "088-5678"}};
    map<string, string> book2 = {
        {"Charlie", "088-9012"},
        {"Bob", "088-3456"}};

    auto merged_book = merge_phonebooks(book1, book2);

    for (const auto &entry : merged_book)
    {
        auto name = entry.first;
        auto number = entry.second;

        cout << name << ": " << number << endl;
    }

    return 0;
}
