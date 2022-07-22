#include <stdio.h>
#include <math.h>

int main (){
	
	double sayi,sonuc1,sonuc2;
	
	printf("degeri giriniz: ");
	scanf("%lf",&sayi);
	sonuc1=floor(sayi);
	printf("sonuc: %.f\n",sonuc1);
	sonuc2=ceil(sayi);
	printf("sonuc: %.f",sonuc2);	
	
	return 0;
}
