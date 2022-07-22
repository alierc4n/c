#include <stdio.h>

int main () {
	
	FILE *belge;
	char karakter;
	belge=fopen("C:\\Users\\alier\\Desktop\\bilgi.txt","r");
	
	do 
	{
	karakter=getc(belge);
	
	printf("%c",karakter);
	}
	while(karakter!= EOF);
	
	fclose(belge);
	
	return 0;
}
