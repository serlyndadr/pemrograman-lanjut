#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	struct kontainer {
	int kont,ukuran, berat;
	char vendor [9];
	char jenis[9];	
	};
	typedef struct kontainer kntr;
	int main() 
{
	
	kntr data[9];
	data[0].kont=1;
	data[0].ukuran=20;
	data[0].berat=100;
	strcpy (data[0].vendor,"Meratus");
	strcpy (data[0].jenis,"Elektronik");
	
	data[1].kont=2;
	data[1].ukuran=40;
	data[1].berat=150;
	strcpy (data[1].vendor,"Mearsk");
	strcpy (data[1].jenis,"Elektronik");
	
	data[2].kont=6;
	data[2].ukuran=60;
	data[2].berat=200;
	strcpy (data[2].vendor,"Pelni Logistics");
	strcpy (data[2].jenis,"Elektronik");
	
	data[3].kont=9;
	data[3].ukuran=20;
	data[3].berat=100;
	strcpy (data[3].vendor,"Meratus");
	strcpy (data[3].jenis,"Elektronik");
	
	data[4].kont=3;
	data[4].ukuran=20;
	data[4].berat=100;
	strcpy (data[4].vendor,"Meratus");
	strcpy (data[4].jenis,"Goods");
	
	data[5].kont=4;
	data[5].ukuran=60;
	data[5].berat=200;
	strcpy (data[5].vendor,"Meratus");
	strcpy (data[5].jenis,"Goods");
	
	data[6].kont=8;
	data[6].ukuran=40;
	data[6].berat=150;
	strcpy (data[6].vendor,"Pelni Logistics");
	strcpy (data[6].jenis,"Goods");
	
	data[7].kont=5;
	data[7].ukuran=20;
	data[7].berat=100;
	strcpy (data[7].vendor,"Mearsk");
	strcpy (data[7].jenis,"Chemical");
	
	data[8].kont=7;
	data[8].ukuran=20;
	data[8].berat=100;
	strcpy (data[8].vendor,"Mearsk");
	strcpy (data[8].jenis,"Chemical");
	
	char jeniss[9];
	int i;
	printf("Masukan jenis yang dicari (Elektronik, Goods, Chemical )=  ");
	scanf("%s",&jeniss);
		for(i=0;i<9;i++){
		if(!strcmp(data[i].jenis,jeniss)){
		
		printf("Kontainer		: %d\n",data[i].kont);
		printf("Ukuran			: %d\n",data[i].ukuran);
		printf("Berat			: %d\n",data[i].berat);
		printf("Vendor			: %s\n",data[i].vendor);
		printf("Jenis			: %s\n",data[i].jenis);	
		printf("\n\n");
				}
			}

	return 0;
}
