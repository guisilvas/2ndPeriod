#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inserirInicio(char charInput, char* beiju, int* end, int* begin)
{
    for(int i = *end; i > *begin; i--)
    {
        
    }
}

int main()
{   
    char array[1001];
    char beiju[1001];

    while(fgets(array, sizeof(array), stdin) != EOF)
    {
        beiju[0] = "\0";
        int end = 0, begin = 0, ver = 0, nextLine = 0;

        for(int i = 0; i < strlen(array); i++)
        {
            if(array[i] == '[')
            {
                ver = 1;
            }
            else if(array[i] == ']')
            {
                ver = 0;
            }
            if(ver == 1)
            {
                inserirInicio(array[i], beiju, &end, &begin);
            }
        }
    }
    return 0;
}