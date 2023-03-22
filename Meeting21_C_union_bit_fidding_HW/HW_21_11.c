// Променете структурата, която ползваме за репрезентация на календарна дата да ползва bitfields за годината, месеца и деня от месеца. Оставете
// коментар за допустимите стойности за година при декларацията на побитовото поле за година в дефиницията на структурата за календарна дата.


typedef struct 
{
  // Year bit field: allows values between 1900 and 2199
  unsigned int year : 12;
  // Month bit field: allows values between 1 and 12
  unsigned int month : 4;
  // Day of the month bit field: allows values between 1 and 31
  unsigned int day : 5;
} CalendarDate;