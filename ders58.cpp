#include <stdio.h>

int main () {
	
	FILE *metinbelgesi;
	char veri1[30]="bilgisayar";
	char veri2[30]="programciligi";
	char veri3[30]="bolumu";
	
metinbelgesi=fopen("C:\\Users\\alier\\Desktop\\bilgi.txt","w");
	
	fputs(veri1,metinbelgesi);
	
	fputs(veri2,metinbelgesi);
	
	fputs(veri3,metinbelgesi);
	
	return 0;
}
