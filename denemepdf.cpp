#include <stdio.h>
#include <stdlib.h>
	void mevsim (int ay) {
	switch (ay) {
	
	case 12:
	case 1:
	case 2: printf ("kis"); break;
	case 3:
	case 4:
	case 5: printf ("ilkbahar"); break;
	case 6:
	case 7:
	case 8: printf ("yaz"); break;
	case 9:
	case 10:
	case 11: printf ("sonbahar"); 
}
}

	int main(){
		printf("ay yaziniz: ");
		scanf("%d",&mevsim);
		//system("pause");
		return 0;
	}
	

