#include <stdio.h>
#include <math.h>

int main () {
	
	double sayi,sonuc,sonuc2;
	printf("sayi giriniz: ");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("sonuc: %.lf\n",sonuc);
	
	sonuc2=log(sayi);
	printf("sonuc logaritma: %lf",sonuc2);
	return 0;
}
