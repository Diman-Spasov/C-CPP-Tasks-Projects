// Напишете функция, която взима std::string (by reference) и го принтира в stderr.
// Добавете default аргумент за std::string параметъра, така че ако се извика без аргумент да принтира default съобщение
// (стойността на default

void printToStderr(std::string &message, const std::string &defaultMsg = "Default message")
{
    if (message.empty())
    {
        std::cerr << defaultMsg << std::endl;
    }
    else
    {
        std::cerr << message << std::endl;
    }
}

// std::string msg = "Error message";
// printToStderr(msg); // prints "Error message" to stderr
// printToStderr(msg, "Default error message"); // prints "Error message" to stderr
// std::string emptyMsg = "";
// printToStderr(emptyMsg); // prints "Default message" to stderr
