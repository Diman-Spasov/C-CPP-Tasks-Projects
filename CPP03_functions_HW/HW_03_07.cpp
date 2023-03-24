// Въпрос:
// Къде ще “живеят” обектите с информацията за книгите и поредиците от книги? Кой ще се грижи за тяхната памет, за инициализация
// та и
// достъпа до информацията? Отговор: “мениджър” клас(ове), например:
// ●
// BookManager за книгите и поредиците от книги
// ●
// BookInfoManager за книгите и BookSeriesInfoManager за поредиците от книги.
// Дефинирайте класа(класовете) и техните член данни.


Например класът BookManager може да има следните членове на данни:

std::vector<BookInfo> за съхранение на колекцията от обекти BookInfo
Int за проследяване на броя на книгите в колекцията
Може да има и следните методи:

Конструктор за инициализиране на колекцията от BookInfo обекти
Метод addBookInfo за добавяне на нов обект BookInfo към колекцията
Метод removeBookInfo за премахване на обект BookInfo от колекцията
Метод getBookInfo за извличане на обект BookInfo от колекцията въз основа на неговия ISBN
Метод printBookInfo за отпечатване на всички BookInfo обекти в колекцията
Класът BookSeriesManager може да има подобни членове на данни и методи, но ще бъде съобразен с нуждите на информацията за серията книги.