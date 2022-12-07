#include<stdio.h>
#include<stdlib.h>

int* make_array(unsigned int elem, int val);

void show_array(const int ar[], int n);

int main(void)
{
    int* pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");     
    }
    printf("Done\n");
    printf("Bye\n");   
    return 0;


}

int* make_array(unsigned elem, int val)
{
    int* p_i = (int*)malloc(elem * sizeof(int));
    if (p_i == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < elem; i++)
    {
        p_i[i]  = val;
    }
    return p_i;
}


void show_array(const int ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    puts("\n");
}