#include <stdio.h>
#include <stdlib.h>

int howManyLeapYears( int year, int month, int date )
{
    int counter = 0, flag = 0;
    for( int i = 1900; i < year; i++ )
    {
        if( i % 4 == 0 && i % 100 != 0 )
            counter++;
        if( i % 400 == 0)
            counter++;
    }

    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        flag = 1;
    if( flag && ( month > 2 || (month == 2 && date == 29) ) )
        counter++;
    return counter;
}

int howManyDays( int leapdays, int year, int month, int date )
{
    int total = leapdays;
    total += (year - 1900) * 365;
    if( month == 2 )
        total += 31;
    if( month == 3 )
        total += 28 + 31;
    if( month == 4 )
        total += 31 + 31 + 28;
    if( month == 5 )
        total += 31 + 31 + 28 + 30;
    if( month == 6 )
        total += 31 + 31 + 28 + 30 + 31;
    if( month == 7 )
        total += 31 + 31 + 28 + 30 + 31 + 30;
    if( month == 8 )
        total += 31 + 31 + 28 + 30 + 31 + 30 + 31;
    if( month == 9 )
        total += 31 + 31 + 28 + 30 + 31 + 30 + 31 + 31;
    if( month == 10 )
        total += 31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30;
    if( month == 11 )
        total += 31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    if( month == 12 )
        total += 31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    total += date;
    return total - 1;
}

int main()
{
    int year, month, date;
    scanf("%d %d %d", &year, &month, &date);
    int daysPast = howManyDays( howManyLeapYears( year, month, date ), year, month, date );
    if( daysPast % 7 == 0 )
        printf("Monday");
    if( daysPast % 7 == 1 )
        printf("Tuesday");
    if( daysPast % 7 == 2 )
        printf("Wednesday");
    if( daysPast % 7 == 3 )
        printf("Thursday");
    if( daysPast % 7 == 4 )
        printf("Friday");
    if( daysPast % 7 == 5 )
        printf("Saturday");
    if( daysPast % 7 == 6 )
        printf("Sunday");

    return 0;

}
