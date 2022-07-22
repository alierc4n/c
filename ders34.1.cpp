#include <stdio.h>
#include <math.h>

int main () {
	
	double sayi,sonuc;
	printf("sayi giriniz: ");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("sonuc: %.lf",sonuc);
	
	return 0;
}
