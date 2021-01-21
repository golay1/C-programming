#include <stdio.h>
int main(void)
{
    char word[20];
    printf("Please enter a word: ");
    scanf("%s",word);
    printf("%s starts with ",word);
    if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'||word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U')
    {
        printf("a vowel.\n");
    }
    else if((word[0]>='A'&&word[0]<='Z')||(word[0]>='a'&&word[0]<='z'))
    {
        printf("a consonant.\n");
    }
    else
    {
        printf("neither a vowel nor a consonant.\n");
    }
}
