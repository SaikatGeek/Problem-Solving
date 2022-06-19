// C program to illustrate fgetc() function
#include <stdio.h>

int main ()
{
	// open the file
	FILE *fr = fopen("mam.txt","r");
	FILE *fw = fopen("mam_copy.txt","w");
    char string[10];

	// Return if could not open file
	if (fr && fw)
	{
        while(fgets(string, 10, fr) != NULL){
            fputs(string , fw);
            printf("%s", string);
        }

        fclose(fr);
        fclose(fw);

    }

 	return(0);
}
