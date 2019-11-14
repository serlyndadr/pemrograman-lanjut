#include <stdio.h>
#include <string.h>

int BinarySearch(int data[], int awal, int akhir, int cari){
    int tengah = (awal+akhir)/2;
    if(awal>akhir){
      return -1;
    } 
    if(data[tengah] == cari){
      return tengah;
    }
    if(data[tengah] < cari){
      return BinarySearch(data, tengah+1, akhir, cari);
    } else {
      return BinarySearch(data, awal, tengah-1, cari);
    }
}

int main(){
    int angka[9] = {3,9,11,12,15,17,23,31,35}; 
    int i, j, posisi, cari;

    int n = sizeof(angka)/sizeof(angka[0]);

    printf("Masukkan angka yang dicari : "); scanf("%d", &cari);
    posisi = BinarySearch(angka, 0, n-1, cari);
    
    if(posisi < 0){
      printf("Angka %d tidak terdapat pada kumpulan data\n",cari ); 
    } else {
      printf("Angka %d terdapat pada indeks data ke- %i \n",cari, posisi++ ); 
    }
    getch();
    return 0;
}
