#include <stdio.h>
#include <stdlib.h>

int main() {
	char fname[50];
	int i,n;
    printf("Enter name of text file: ");
	scanf("%s",fname);
	printf("Enter number of students: ");
	scanf("%d",&n);

	/*2D array to store student names, 1D array to store scores*/
    char **snames;
    int *scores;
    snames = (char**)malloc(n*sizeof(char*));
    scores = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter Name %d :", i+1);
        snames[i] = (char *) malloc (20 * sizeof(char) );
        scanf("%s", snames[i]);
        printf("Enter Score %d :", i+1);
        scanf("%d", &scores[i]);
    }

	FILE *fptr;
	char *filename = fname;
	fptr=(fopen(fname,"w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	fprintf(fptr,"NAME\tSCORE\n==============\n");
	for (i=0;i<n;++i) {
		fprintf(fptr,"%s\t%d\n",snames[i],scores[i]);
	}
	fclose(fptr);

    /*print file*/
    printf("\n\nOutput of file:\n\n");
    fptr = fopen (fname, "r");
    char str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
	return 0;
}
