#include <stdio.h>

int main () {
	
	FILE *belge;
	char karakter[50];
	
	belge=fopen("C:\\Users\\alier\\Desktop\\bilgi.txt","r");
	
	fgets(karakter,41,belge);
	puts(karakter);
	fclose(belge);
	
	return 0;
}
