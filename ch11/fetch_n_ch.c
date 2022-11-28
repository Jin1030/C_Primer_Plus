#include<stdio.h>

void fetch_char_fgets(int, char*);

int main()
{
    char words[100];
    fetch_char_fgets(100, words);
    printf("%s\n", words);
    puts("Done");


}

void fetch_char_fgets(int n, char* ch_a)
{
    fgets(ch_a, n, stdin);
}