#include<stdio.h>
int main(void)
{
    char line[20];
    int i, j;
    printf("Enter a word: ");
    fgets(line,20,stdin);
    for(i=0;line[i]!='\0';i++)
    {
        while (!((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z')||line[i]=='\0'))
        {
            for(j=i;line[j]!='\0';j++)
            {
                line[j]=line[j+1];
            }
        }
    }
    printf("output: ");
    puts(line);
}
