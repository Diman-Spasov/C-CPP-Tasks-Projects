// Направете клас Adress със следните членове:
// ● Град
// ● Държава
// ● Улица
// ● Номер
// ● Квартал
// ● Блок номер

class Address
{
public:
    Address(const std::string &city, const std::string &country, const std::string &street,
            int number, const std::string &quarter, int blockNumber)
        : city_(city), country_(country), street_(street), number_(number), quarter_(quarter), blockNumber_(blockNumber)
    {}

    const std::string &getCity() const { return city_; }
    const std::string &getCountry() const { return country_; }
    const std::string &getStreet() const { return street_; }
    int getNumber() const { return number_; }
    const std::string &getQuarter() const { return quarter_; }
    int getBlockNumber() const { return blockNumber_; }

private:
    std::string city_;
    std::string country_;
    std::string street_;
    int number_;
    std::string quarter_;
    int blockNumber_;
};
