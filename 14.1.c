#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *filePointer;
	char ch;
	filePointer=fopen("dokumen.txt","r");		//akses read
	if (filePointer == NULL)
	{
		printf("File Is Not Avaliable \n");
	}
	else
	{
		while ((ch=fgetc(filePointer)) != EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(filePointer);
	return 0;
}