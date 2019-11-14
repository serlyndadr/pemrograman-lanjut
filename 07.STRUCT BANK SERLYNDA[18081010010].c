#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rekening
{
	int saldo;
	char nama[15];
	char bank[5];
	char kota[10];
	char jalan[15];
	char provinsi[15];
	char norek[15];
	struct {
		int tgl,bln,thn;
	} date;
};
typedef struct rekening rek;

int main() 
{

	rek data[10];
	strcpy (data[0].nama,"Serlynda");
	strcpy (data[0].bank,"BRI");
	data[0].date.thn=2000;
	data[0].date.bln=06;
	data[0].date.tgl=04;
	strcpy (data[0].kota,"Jombang");
	strcpy (data[0].provinsi,"Jawa Timur");
	strcpy (data[0].jalan,"Ingas Pendowo");
	strcpy (data[0].norek,"300410");
	data[0].saldo=5000000;
	
	strcpy (data[1].nama,"Aisyah");
	strcpy (data[1].bank,"BRI");
	data[1].date.thn=2000;
	data[1].date.bln=03;
	data[1].date.tgl=27;
	strcpy (data[1].kota,"Jombang");
	strcpy (data[1].provinsi,"Jawa Timur");
	strcpy (data[1].jalan,"Medhan Bakti");
	strcpy (data[1].norek,"300411");
	data[1].saldo=6000000;
	
	strcpy (data[2].nama,"Cantika");
	strcpy (data[2].bank,"BNI");
	data[2].date.thn=1999;
	data[2].date.bln=20;
	data[2].date.tgl=11;
	strcpy (data[2].kota,"Bogor");
	strcpy (data[2].provinsi,"Jawa Tengah");
	strcpy (data[2].jalan,"Cilendek Barat");
	strcpy (data[2].norek,"300412");
	data[2].saldo=2500000;
	
	strcpy (data[3].nama,"Subagio");
	strcpy (data[3].bank,"BTN");
	data[3].date.thn=1975;
	data[3].date.bln=04;
	data[3].date.tgl=11;
	strcpy (data[3].kota,"Surabaya");
	strcpy (data[3].provinsi,"Jawa Timur");
	strcpy (data[3].jalan,"Gebang Putih");
	strcpy (data[3].norek,"300413");
	data[3].saldo=7500000;
	
	strcpy (data[4].nama,"Aini");
	strcpy (data[4].bank,"BCA");
	data[4].date.thn=1980;
	data[4].date.bln=07;
	data[4].date.tgl=24;
	strcpy (data[4].kota,"Surakarta");
	strcpy (data[4].provinsi,"Jawa Tengah");
	strcpy (data[4].jalan,"Merpati");
	strcpy (data[4].norek,"300414");
	data[4].saldo=6000000;
	
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5 || pilih!=6){
		
		
		printf("******[ SELAMAT DATANG DI PROGRAM BANK-KU ]******\n\n\n");
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan semua data  \n");
		printf("2. Pencarian Data berdasar nama bank \n");
		printf("3. Total saldo nasabah \n");
		printf("4. Cari nasabah berdasarkan kota \n");
		printf("5. Tampilkan nasabah dengan umur tertentu \n");
		printf("6. Tampilkan nasabah dengan saldo terbanyak/tersedikit\n");
		printf("7. Selesai\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("-------MENAMPILKAN SEMUA DATA NASABAH--------\n\n\n");
			printf("Data seluruh nasabah : \n\n");
			for(i = 0; i<5; i++){
				printf("Nama			: %s\n",data[i].nama);
				printf("Bank			: %s\n",data[i].bank);
				printf("Tanggal Lahir		: %d\n",data[i].date.tgl);
				printf("Bulan Lahir		: %d\n",data[i].date.bln);
				printf("Tahun Lahir		: %d\n",data[i].date.thn);
				printf("Kota			: %s\n",data[i].kota);
				printf("Provinsi		: %s\n",data[i].provinsi);	
				printf("Nama Jalan		: %s\n",data[i].jalan);
				printf("Nomor Rekening		: %s\n",data[i].norek);
				printf("Saldo Nasabah		: %d\n",data[i].saldo);
				printf("\n");
								}
			
			
		}
		if(pilih == 2) {
			char bankk[5], salah=0;
			printf("Masukan nama bank yang dicari =  ");
			scanf("%s",&bankk);
			for(i=0;i<5;i++){
				if(!strcmp(data[i].bank,bankk)){
					
					printf("Nama			: %s\n",data[i].nama);
					printf("Bank			: %s\n",data[i].bank);
					printf("Tanggal Lahir		: %d\n",data[i].date.tgl);
					printf("Bulan Lahir		: %d\n",data[i].date.bln);
					printf("Tahun Lahir		: %d\n",data[i].date.thn);
					printf("Kota			: %s\n",data[i].kota);
					printf("Provinsi		: %s\n",data[i].provinsi);	
					printf("Nama Jalan		: %s\n",data[i].jalan);
					printf("Nomor Rekening		: %s\n",data[i].norek);
					printf("Saldo Nasabah		: %d\n\n\n\n\n",data[i].saldo);
					salah=1;
					
				}
			}
			if(salah == 0){
				printf("Bank yang dicari tidak ditemukan \n\n\n");
			}
		}
		if(pilih == 3){
			printf("--------------------TOTAL SALDO NASABAH-----------------------\n\n");
			int hasil=0;
			
			for(i=0;i<5;i++){
				hasil+=data[i].saldo;
				printf("%d\n",data[i].saldo);			
			}
			printf("--------------------------+\n");
			printf("%d\n\n",hasil);
			
		}
		
		if(pilih == 4){
			char kot[10], salah=0;
			printf("-------CARI NASABAH DENGAN KOTA--------\n\n\n");
			printf("Masukkan Kota yang Dicari = ");
			scanf("%s",&kot);
			for(i=0;i<5;i++){
				if(!strcmp(data[i].kota,kot)){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("Bank			: %s\n",data[i].bank);
						printf("Tanggal Lahir		: %d\n",data[i].date.tgl);
						printf("Bulan Lahir		: %d\n",data[i].date.bln);
						printf("Tahun Lahir		: %d\n",data[i].date.thn);
						printf("Kota			: %s\n",data[i].kota);
						printf("Provinsi		: %s\n",data[i].provinsi);	
						printf("Nama Jalan		: %s\n",data[i].jalan);
						printf("Nomor Rekening		: %s\n",data[i].norek);
						printf("Saldo Nasabah		: %d\n\n\n\n\n",data[i].saldo);
						salah=1;
				
				}
			}
			if(salah == 0){
				printf("Kota yang Dicari Tidak Terdapat pada Data \n\n\n");
				}
		}
		if(pilih == 5){
			int umur,tahun,salah=0;
			printf("-------CARI NASABAH DENGAN UMUR--------\n\n\n");
			printf("Masukan umur nasabah yang dicari = ");
			scanf("%d",&umur);
			for(i=0;i<5;i++){
			tahun=2019-umur;
				if(tahun==data[i].date.thn){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("Bank			: %s\n",data[i].bank);
						printf("Tanggal Lahir		: %d\n",data[i].date.tgl);
						printf("Bulan Lahir		: %d\n",data[i].date.bln);
						printf("Tahun Lahir		: %d\n",data[i].date.thn);
						printf("Kota			: %s\n",data[i].kota);
						printf("Provinsi		: %s\n",data[i].provinsi);	
						printf("Nama Jalan		: %s\n",data[i].jalan);
						printf("Nomor Rekening		: %s\n",data[i].norek);
						printf("Saldo Nasabah		: %d\n\n\n\n\n",data[i].saldo);
						salah=1;
						
				}
			}
			if(salah == 0){
				printf("Umur nasabah tidak ditemukan\n\n\n");
				
			}
		}
		if(pilih == 6){
			printf("-------NASABAH DENGAN SALDO TERBESAR DAN TERKECIL-------\n\n\n");
			int min=0;
			for(i=0;i<5;i++){
				if(data[i].saldo<min||min==0){
					min = data[i].saldo;
				}
				
			}
			for(i=0; i<5; i++){	
			if (data[i].saldo==min){
			printf("Data Nasabah dengan Saldo terkecil %d \n\n",min);	
			printf("Nama			: %s\n",data[i].nama);
			printf("Bank			: %s\n",data[i].bank);
			printf("Tanggal Lahir		: %d\n",data[i].date.tgl);
			printf("Bulan Lahir		: %d\n",data[i].date.bln);
			printf("Tahun Lahir		: %d\n",data[i].date.thn);
			printf("Kota			: %s\n",data[i].kota);
			printf("Provinsi		: %s\n",data[i].provinsi);	
			printf("Nama Jalan		: %s\n",data[i].jalan);
			printf("Nomor Rekening		: %s\n",data[i].norek);
			printf("Saldo Nasabah		: %d\n\n\n\n\n",data[i].saldo);
			}
			
		}
		int max=0;
		for(i=0;i<5;i++){
		if (data[i].saldo>max||max==0){
		max = data[i].saldo;
			}
		}
		for(i=0;i<5;i++){
		if (data[i].saldo==max){
			printf("Data Nasabah dengan Saldo terbesar %d \n\n",max);	
			printf("Nama			: %s\n",data[i].nama);
			printf("Bank			: %s\n",data[i].bank);
			printf("Tanggal Lahir		: %d\n",data[i].date.tgl);
			printf("Bulan Lahir		: %d\n",data[i].date.bln);
			printf("Tahun Lahir		: %d\n",data[i].date.thn);
			printf("Kota			: %s\n",data[i].kota);
			printf("Provinsi		: %s\n",data[i].provinsi);	
			printf("Nama Jalan		: %s\n",data[i].jalan);
			printf("Nomor Rekening		: %s\n",data[i].norek);
			printf("Saldo Nasabah		: %d\n\n\n\n\n",data[i].saldo);	
			}
		}
	}
		if(pilih == 7){
			printf("******* [TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI ] ******* \n\n\n");
			break;
		}
	}
		
	return 0;
}

