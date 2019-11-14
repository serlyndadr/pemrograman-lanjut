#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int data[8] = {8, 10, 6, -2, 11, 7, 1, 100};
	int i, cari;
	int ketemu=0;
	
	printf("Masukkan data yang ingin dicari : ");
	scanf("%d", &cari);
	for (i=0; i<8; i++){
	if(data[i]==cari)
	{
	ketemu=1;
	break;
	}
	}
	if (ketemu==1){
		printf("Data tersedia pada indeks ke- %d", i);}
		else printf("Data tidak tersedia!!!");

	return 0;
}
