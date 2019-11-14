#include <stdio.h>

int main() 
{
	char nama [50], npm [20], jurusan [20], alamat [100], ttlahir[50], agama [10], telp[20], email [20];
	
	printf("\t~~~~~~~~~~~~~~~~~~~~~ \n");
	printf("\tB I O D A T A D I R I\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~ \n");
	printf("\n");
	
	printf("Masukkan Nama\t\t\t : ");
	gets(nama);
	
	printf("Masukkan NPM\t\t\t : ");
	gets(npm);
	
	printf("Masukkan Jurusan\t\t : ");
	gets(jurusan);
	
	printf("Masukkan Alamat\t\t\t : ");
	gets(alamat);
	
	printf("Masukkan Tempat, Tanggal Lahir \t : ");
	gets(ttlahir);
	
	printf("Masukkan Agama\t\t\t : ");
	gets(agama);
	
	printf("Masukkan No.Telepon\t\t : ");
	gets(telp);
	
	printf("Masukkan Email\t\t\t : ");
	gets(email);
	
	printf("\n\n");
	printf ("\t===== R E S U L T =====");
	printf("\n\n");
	
	printf(" Nama\t\t\t : %s \n ", nama);
	printf("NPM\t\t\t : %s \n", npm);
	printf(" Jurusan\t\t : %s \n ", jurusan);
	printf("Alamat\t\t\t : %s \n", alamat);
	printf(" Tempat, Tanggal Lahir \t : %s \n", ttlahir);
	printf(" Agama\t\t\t : %s \n", agama);
	printf(" No.Telepon\t\t : %s \n",telp);
	printf(" Email\t\t\t : %s \n", email);
	
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~ \n");
	printf("\t SEKIAN TERIMA KASIH :)\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~ \n");
	
	return 0;
}
