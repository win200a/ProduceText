#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
	FILE *fp;
	char ch[100];
	fp = fopen("C:\\Windows\\System32\\drivers\\etc\\hosts", "a");

	if (fp == NULL)
	{
		printf("Ê§°Ü\n");
		
	}
	else
	{
		scanf("%s", ch);
		fprintf(fp, "127.0.0.1 %s\n", ch);
	}
	getch();

}