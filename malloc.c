#include<stdio.h>
#include<stdlib.h>

#define STRING "Hello World 1"

int main()
{
    char *ptr = malloc((strlen(STRING) + 1) * sizeof(char));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    strcpy(ptr, STRING);
    printf("data in ptr: %s\n", ptr);
    free(ptr);
    return 0;
}