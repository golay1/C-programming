#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1;

	printf("Enter the file name to be opened : ");
	scanf("%s",fname);
    fptr = fopen(fname, "a");
    printf("Enter the number of lines to be written : ");
    scanf("%d", &n);
    printf("Enter %d lines:\n",n);
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);

	fptr = fopen (fname, "r");
	printf("\nThe content of the file %s is:\n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
  return 0;
}
