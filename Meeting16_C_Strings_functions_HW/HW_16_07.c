// Напишете функция, която връща общия брой на срещанията на всички стрингове
// от подаден масив от стрингове в двуизмерен масив от char, по редове
#include <stdio.h>
int main()
{
    char c_to_search[5] = "name";

    char text[68] = "hello my name is \0 there is some other string behind it \n\0 asdf";

    int pos_search = 0;
    int pos_text = 0;
    int len_search = 4;
    int len_text = 67;
    for (pos_text = 0; pos_text < len_text - len_search; ++pos_text)
    {
        if (text[pos_text] == c_to_search[pos_search])
        {
            ++pos_search;
            if (pos_search == len_search)
            {
                // match
                printf("match from %d to %d\n", pos_text - len_search, pos_text);
                
            }
        }
        else
        {
            pos_text -= pos_search;
            pos_search = 0;
        }
    }
    // no match
    printf("no match\n");
    return 0;
}
