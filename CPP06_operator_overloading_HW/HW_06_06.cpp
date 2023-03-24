// Дефинирайте subscript оператор за индексиране книга от колекция от книги

BookInfo &operator[](int index)
{
    if (index < 0 || index >= books.size())
    {
        throw std::out_of_range("Invalid index");
    }
    return books[index];
}
