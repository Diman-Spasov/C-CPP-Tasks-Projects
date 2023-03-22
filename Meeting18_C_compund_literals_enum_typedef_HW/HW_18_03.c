#include <stdio.h>
#include <string.h>

enum weekDay {Monday, Tuseday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum month {January, Fabruary, March, April, May, June, July, August, Septeber, October, November, December};

int main()
{
    enum weekday today;
    today = Monday;
    printf("Day %d", today + 1);

    enum month now;
    now = April;
    printf("Month %d", now + 1);

    return 0;
}