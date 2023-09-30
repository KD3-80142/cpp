#include<stdio.h>

struct Date
{
    int day,month,year;
    void initDate(struct Date* ptrDate)
    {
        d1.date=10;
        d1.month=10;
        d1.year=10;

    };
    void printDateOnConsole(struct Date* ptrDate)
    {
        printf("%d%d%d Tis is  your Date=",d1.day,d1.month,d1.year);

    };
    void acceptDateFromConsole(struct Date* ptrDate)
    {
        printf("Enter day");
        scanf("&n",day);
        printf("Enter month");
        scanf("&n",month);
        printf("Enter year");
        scanf("&n",year);

    };
}
int main()
{
    acceptDateFromConsole.d1();
    initDate.d1();
    printDateOnConsole.d1();

    return 0;
}








