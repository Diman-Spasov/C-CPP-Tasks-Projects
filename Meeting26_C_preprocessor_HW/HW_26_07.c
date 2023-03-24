// Дефинирайте макрос IS_PALINDROME(num, type), който проверява дали дадено цяло число е палиндром
// (първата цифра е равна на последната, втората - на предпоследната и т.н.)

#define IS_PALINDROME(num, type) ({        \
    type n = (type)(num);                  \
    type reversed = 0;                     \
    type original = n;                     \
    while (n > 0)                          \
    {                                      \
        reversed = reversed * 10 + n % 10; \
        n /= 10;                           \
    }                                      \
    original == reversed;                  \
})