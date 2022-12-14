#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define LEN 20
#define LEN_A 3
#define MONTH_L 12

struct month {
    char month_na[LEN];
    char month_ab[LEN_A];
    int days;
    int month_num;
};


int cal_day(struct month m[], int);



int main( int argc, char* argv[])
{
    struct month months[MONTH_L] =
    {
        {"january", "JAN", 31, 1},
        {"february", "FEB", 28, 2},
        {"march", "MAR", 31, 3},
        {"april", "APR", 30, 4},
        {"may", "MAY", 31, 5},
        {"june", "JUN", 30, 6},
        {"july", "JUL", 31, 7},
        {"auguest", "AUG", 31, 8},
        {"september", "SEP", 30, 9},
        {"october", "OCT", 31, 10},
        {"november", "NOV", 30, 11},
        {"december", "DEC", 31, 12}

    };

    int day_to_mon = 0;



    if (argc != 2)
    {
        printf("Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }
    
    int mon_tar = atoi(argv[1]);

    if (mon_tar > 12 || mon_tar < 1)
    {
        printf("invalid arguments.\n");
        exit(EXIT_FAILURE);
    }
    

    day_to_mon = cal_day(months, mon_tar);

    printf("days is %d\n", day_to_mon);

    return 0;
}


int cal_day(struct month m[], int mon)
{
    int index = 0;
    int days = 0;
    while ( m[index].month_num != mon)
    {
        index++;
    }
    for (int i = 0; i <= index; i++)
    {
        days += m[i].days;
    }

    return days;
}

