#include <stdio.h>
#include <stdlib.h>

int howManyLeapYears( int year, int month, int date )
{
    int counter = 0, flag = 0;
    for( int i = 1900; i <= year; i++ )
    {
        if( i % 4 == 0 && i % 100 != 0 )
            counter++;
        if( i % 400 == 0);
            counter++;
    }

    if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
        flag = 1;
    if( flag && ( month > 2 || (month =2 && date = 29) ) )
        counter++;
    return counter;
}

int howManyDays( int leapdays, int year, int month, int date )
{
    int total = leapdays;
    total = (year - 1 - 1900) * 365;
    switch( month - 1 )
    {
    case(1):
        
    }
}

int main()
{
    scanf("%d %d %d", &year, &month, &date);


    return 0;
    
}
