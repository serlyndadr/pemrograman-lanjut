#include <stdio.h>
#include <stdlib.h>

struct data_mahasiswa{
	int npm;
	float ipk;
};
typedef struct data_mahasiswa mhs;
int main(){
	int i, cari;
	mhs data[3];
	data [0].npm=1717;
	data [0].ipk=4.00;
	data [1].npm =1716;
	data [1].ipk = 3.9;
	data[2].npm =1715;
	data[2].ipk = 3.8;
	
		printf("Data Mahasiswa \n\n");
	for(i<0;i<=2;i++){
		printf("%d = %f \n\n", data[i].npm, data[i].ipk);
	}
		printf("Reverse Data Mahasiswa \n\n");
			for (i=2;i>=0;i--){
		printf("%d = %f \n\n", data[i].npm, data[i].ipk);
	}
	
	printf("Masukkan NPM yang dicari : \n ");
	scanf("%d", &cari);
	for (i=0; i<5; i++)
	{
		if (data[i].npm == cari)
		{  
			printf("Hasil Pencarian : \n\n");
			printf("%d = %f\n\n", data[i].npm, data[i].ipk);
			break;
		}
	}
	return 0;
}
	

