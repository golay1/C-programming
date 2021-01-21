#include <stdio.h>
int main(void)
{
    char word[30];
    int i;
    printf("Enter a word: ");
    scanf("%s",word);
    for(i=0;i<30;i++)
    if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
    {
        word[i]='Q';
    }
    printf("output: %s\n",word);
}
