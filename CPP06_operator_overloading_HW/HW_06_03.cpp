// Дефинирайте оператор += за ca::string, който конкатенира лявата операнда към дясната

ca::string &ca::string::operator+=(const ca::string &other)
{
    size_t new_size = size_ + other.size_;
    char *new_data = new char[new_size + 1];
    std::memcpy(new_data, data_, size_);
    std::memcpy(new_data + size_, other.data_, other.size_ + 1);
    delete[] data_;
    data_ = new_data;
    size_ = new_size;
    return *this;
}
