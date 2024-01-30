#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Date getNextDate(struct Date x);

void main()
{
    struct Date today, tomorrow;
    today.day = 11;
    today.month = 1;
    today.year = 2023;
    tomorrow = getNextDate(today);
    printf("%d\n%d\n%d", tomorrow.day, tomorrow.month, tomorrow.year);

}
struct Date getNextDate(struct Date x)
{
    struct Date y;
    if(x.month == 2)
    {
        if(x.day == 28)
        {
            y.month = x.month + 1;
            y.day = 1;
        }
    }
    else if(x.month == 1, 3, 5, 7, 8, 10)
    {
        if(x.day == 31)
        {
            y.month = x.month + 1;
            y.day = 1;
        }
    }
    else if(x.month == 4, 6, 9, 11)
    {
        if(x.day == 30)
        {
            y.month = x.month + 1;
            y.day = 1;
        }
    }
    else if(x.month == 12)
    {
        if(x.day == 31)
        {
            y.year = x.year + 1;
            y.month = 1;
            y.day = 1;
        }
    }else
    {
        y.year = x.year;
        y.month = x.month;
        y.day = x.day + 1;
    }
    return y;
}