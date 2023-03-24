// Дефинирайте макрос SUM_DIGITS(num, type), който връща сумата от цифрите на цяло число. Вторият
// параметър указва типа и е нужен за дефиниция на променлива за сумата. Пример за извикване:
// int num1 = 12345;
// printf("The sum of the digits of %d is %d\n", num1, SUM_DIGITS(num1, int));
// long num2 = 12345L;
// printf("The sum of the digits of %ld is %ld\n", num1, SUM_DIGITS(num2, long));

#define SUM_DIGITS(num, type) ({ \
    type sum = 0;                \
    type n = (type)(num);        \
    while (n > 0)                \
    {                            \
        sum += n % 10;           \
        n /= 10;                 \
    }                            \
    sum;                         \
})