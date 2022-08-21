#include <stdio.h>
int main()
{
	FILE * f;
	f = fopen ("E:\\Demo.txt","r");
	if(f==NULL)
	printf("File is not available");
	else
	printf("File is available");
	fclose(f);
	return 0;
}
