#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("Before free %d \n",*ptr);

    free(ptr);

    printf("After Free %d ",*ptr);

    return 0;
}
