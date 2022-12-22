#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_LINE 255

int main(int argc, char* argv[])
{
    char line[1024];
    int index = 1;
    FILE* fp;


    //argc should be equal to 3
    if (argc != 3)
    {
        printf("Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }

    // the string
    char* word = argv[1];


    //open the file
    if ((fp = fopen(argv[2], "r")) == NULL) 
    {
        fprintf(stdout,"Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE); 
    }

    while (fgets(line, 1024, fp) != NULL) 
    {
        if ( index == MAX_LINE)
            break;

        if ( strstr(line, word) != NULL )
        {
            printf("Line %d: %s", index, line);
        }

        index++;
    }

    puts("");
    fclose(fp);

    return 0;
}