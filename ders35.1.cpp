#include <stdio.h>
#include <math.h>

int main () {
	
	double derece,sonucsin,sonuccos;
	
	printf("dereceyi giriniz: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);
	printf("cos: %lf",sonuccos);
	
	return 0;
}
