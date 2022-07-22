#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {

    char kitapad[30],yazar[30],kitapyazar[60];

    printf("kitap adi ve yazari giriniz: ");
    scanf("%s%s",kitapad,yazar);

    strcat(kitapyazar,kitapad);
    strcat(kitapyazar," ");
    strcat(kitapyazar,yazar);
    printf("\n\n");
    printf("%s",kitapyazar);

    return 0;
}