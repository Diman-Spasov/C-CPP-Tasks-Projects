// Направете клас Person със следните членове:
// ● ЕГН
// ● Височина
// ● Тегло
// ● Цвят на очите
// ● Първо име
// ● Фамилия
// ● Адрес от класа адрес

#include <string>


class Person
{
public:
    // Constructor
    Person(std::string egn, float height, float weight, std::string eyeColor, std::string firstName, std::string lastName, Address address)
        : egn_(egn), height_(height), weight_(weight), eyeColor_(eyeColor), firstName_(firstName), lastName_(lastName), address_(address) {}

    // Accessors
    std::string getEGN() const { return egn_; }
    float getHeight() const { return height_; }
    float getWeight() const { return weight_; }
    std::string getEyeColor() const { return eyeColor_; }
    std::string getFirstName() const { return firstName_; }
    std::string getLastName() const { return lastName_; }
    Address getAddress() const { return address_; }

    // Mutators
    void setEGN(std::string egn) { egn_ = egn; }
    void setHeight(float height) { height_ = height; }
    void setWeight(float weight) { weight_ = weight; }
    void setEyeColor(std::string eyeColor) { eyeColor_ = eyeColor; }
    void setFirstName(std::string firstName) { firstName_ = firstName; }
    void setLastName(std::string lastName) { lastName_ = lastName; }
    void setAddress(Address address) { address_ = address; }

private:
    std::string egn_;
    float height_;
    float weight_;
    std::string eyeColor_;
    std::string firstName_;
    std::string lastName_;
    Address address_;
};
