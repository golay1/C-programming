#include <stdio.h>

int main(void)
{
int a;
printf("Input character: ");
scanf("%c",&a);

if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||
    a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("%c is a vowel\n",a);
else
    printf("%c is a consonant\n",a);
}
