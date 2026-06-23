#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[] ="Hello World";
    char *ptr = malloc(10 * sizeof(char));
    
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    else 
    {
        printf("Memory allocation successful\n");
        printf("data in arr: %s\n", arr);
        printf("data in ptr: %s\n", ptr);
        free(ptr);
    }


}