#include <stdio.h>

int main () {
	
	FILE *yenibelge;
	char text[256];
	yenibelge= fopen ("yaz.txt","a");
	
	if ( yenibelge ==NULL) {
		printf("dosya olusmadi");
	}
	else {
		
		printf("bir sey yaziniz: ");
		fgets(text,256,stdin);
		fputs(text,yenibelge);
		printf("dosya yazildi: ");
		fclose(yenibelge);
	}
	
	return 0;
}
