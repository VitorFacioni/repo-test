#include <stdio.h>
#include <stdlib.h>

int* makeArray(){
    int* arr = malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        arr[i] = i + 1;
    }
    
    return arr; 
}

int main(int argc , char const *argv[])
{
    int* p  = malloc(sizeof(int));

    *p = 10;
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);
    free(p);
    int v1[] = {1, 2, 3, 4, 5};
    int* v2 = malloc(5 * sizeof(int));
    v2[0] = 1;
    v2[1] = 2;
    v2[2] = 3;
    v2[3] = 4;
    v2[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d", v2[i]);
          
    }   
    printf("\n");
    free(v2);
    int* v3 = makeArray();

    for (int i = 0; i < 4; i++)
    {
        printf("%d", v3[i]);
          
    } 
    printf("\n");
    free(v3);
    return 0;

}