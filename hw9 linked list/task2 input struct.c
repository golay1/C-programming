#include <stdio.h>
struct student
{
    char name[50];
    int score;
};

int main()
{
    int i,n;
    printf("Enter number of studnets (n): ");
    scanf("%d",&n);
    printf("\nEnter information of students:\n");
    struct student s[n];
    for(i=0; i<n; ++i)
    {
        printf("\nFor student %d,\n",i+1);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter score: ");
        scanf("%d",&s[i].score);
        printf("\n");
    }

    printf("\nNAME\tSCORE\n===============\n");
    for(i=0; i<n; ++i)
    {
        printf("%s\t%d",s[i].name,s[i].score);
        printf("\n");
    }
    return 0;
}
