#include <stdio.h>

int main() {
	int i, cari;
	int npm[3] = {1717, 1716, 1715};
	float ipk[3] = {4.00 ,3.9, 3.8};

		printf("Menampilkan Data Mahasiswa : \n\n");
			for(i = 0 ; i<3; i++){
				printf("NPM : %d\n", npm[i]);
				printf("NILAI IPK : %f\n\n", ipk[i]);	
		}	
		
		printf("Reverse Data Mahasiswa : \n\n");
			for(i =2 ; i>=0; i--){
				printf("NPM : %d\n", npm[i]);
				printf("Nilai IPK : %f\n\n", ipk[i]);	
		}	
		printf("Masukkan NPM yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<3; i++)
			{
				if(npm[i] == cari){
					printf("Hasil Pencarian : \n\n");
					printf("NPM : %d\n", npm[i]);
					printf("Nilai IPK : %f\n\n", ipk[i]);
					break;
				}			
			}
	return 0;
}
