#include <stdio.h>

int main () {
	
	FILE *dosya;
	
	dosya=fopen("C:\\Users\\alier\\Desktop\\bilgi.txt","w");
	
	putc('a',dosya);
	
	fclose(dosya);
	
	
	return 0;
}
