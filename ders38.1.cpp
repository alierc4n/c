#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	
	char kelime [100];
	printf("kelimeyi giriniz: ");
	scanf("%s",&kelime);
	printf("kelimenin uzunlugu: %d",strlen(kelime));	
	
	return 0;
}
