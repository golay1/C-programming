#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char text[200];
printf("Enter a sentence to insert into a file: ");
fgets(text,200,stdin);

char *filename = "FileName.txt";

FILE *fp = fopen(filename, "w");
 if (fp == NULL)    {
     printf("Error opening file!\n");
      exit(1);
 }
else {
fprintf(fp,"%s\n",text);
printf("The file FileName.txt created successfully...!\n",filename);
fclose(fp);
   }
}
