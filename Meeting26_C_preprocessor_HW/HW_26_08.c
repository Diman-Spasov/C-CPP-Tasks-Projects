// Дефинирайте макрос SWAP, който сменя стойностите на две променливи.

#define SWAP(x, y, type) \
    {                    \
        type temp = x;   \
        x = y;           \
        y = temp;        \
    }