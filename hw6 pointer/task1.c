#include <stdio.h>

int main(void)
{
    int a, *ptra;
    float ab, *ptrab;
    char abc, *ptrabc;
    printf("Input integer a: ");
    scanf("%d",&a);
    printf("Input float ab: ");
    scanf("%f",&ab);
    printf("Input char abc: ");
    scanf(" %c",&abc);
    ptra=&a;
    ptrab=&ab;
    ptrabc=&abc;
    printf("\nPointer: Demonstrate the use of & and * operator:\n-------------------------------------\n-------------------------------------\n");
    printf("a = %d\nab = %.2f\nabc = '%c'\n\n",*ptra,*ptrab,*ptrabc);
    printf("Using & operator:\n-------------------------------------\n-------------------------------------\n");
    printf("address of a = %p\naddress of ab = %p\naddress of abc = %p\n\n",&ptra,&ptrab,&ptrabc);
    printf("Using & and * operator:\n-------------------------------------\n-------------------------------------\n");
    printf("value at address of a = %d\nvalue at address of ab = %.2f\nvalue at address of abc = '%c'\n\n",*ptra,*ptrab,*ptrabc);
}
