#include <stdio.h>
#include <conio.h>

int main() {
int i, j, nilai, jumlahsmt, jumlahmk, sks[20][20], jumlahnilai, skssmt[14], jumlahsks, totalsks=0;
char nama[50][50], mk[30], varnilai[30][30], matkul[50][50][30];
float ipk,nr[14], totalnr=0;
   
printf("+-----------------------------------------+\n");
printf("|     Program Menghitung IP Mahasiswa     |");
printf("\n+-----------------------------------------+\n\n");

printf("\n");
printf("Masukkan jumlah semester : ");
scanf("%d", &jumlahsmt);
  if (jumlahsmt < 1 || jumlahsmt > 5) {
    printf("Jumlah semester salah!\n");
    return 0;
  }
  else {
    for (i = 0; i < jumlahsmt; i++){
      jumlahnilai = 0;
      jumlahsks = 0;
      printf("Masukkan jumlah mata kuliah semester %d: ", i + 1);
      scanf("%d", &jumlahmk);
      if (jumlahmk < 1) {
        printf("Jumlah matakuliah kurang dari 1 setiap semester\n");
        return 0;
      }
      else {
      	printf("\n\n");
        for (j = 0; j < jumlahmk; j++) {
          printf("Masukkan mata kuliah ke %d\n", j + 1);
          printf("Masukkan nama matkul: ");
          scanf(" %s", matkul[i][j]);
          printf("Masukkan jumlah sks matkul: ");
          scanf("%d", &sks[i][j]);
          printf("Masukkan nilai matkul: ");
          scanf(" %c", &varnilai[i][j]);
          printf("--------------------------------------------\n");
          if (varnilai[i][j] == 'a') {
            nilai = 4 * sks[i][j];
          }
          else if (varnilai[i][j] == 'b') {
            nilai = 3 * sks[i][j];
          }
          else if (varnilai[i][j] == 'c') {
            nilai = 2 * sks[i][j];
          }
          else if (varnilai[i][j]=='d') {
            nilai = 1 * sks[i][j];
          }
          else if (varnilai[i][j]=='e') {
            nilai = 0 * sks[i][j];
          }
          else {
            printf("Masukan salah silahkan cobalagi!!\n");
            return 0;
          }
          jumlahnilai = jumlahnilai + nilai;
          jumlahsks = jumlahsks + sks[i][j];
        }
        if(jumlahsks > 24){
          printf("Jumlah SKS semester lebih dari 5\n");
          return 0;
        } else {
          skssmt[i] = jumlahsks;
          nr[i] = jumlahnilai / jumlahsks;
        }   
      }
	}
}
printf("**********************************\n");
printf(" OUTPUT DATA IPK MAHASISWA\n");
printf("**********************************\n");
  
  for(i = 0; i < jumlahsmt; i++){
    printf("\nNilai IPK Semester %d :\n", i+1);
    printf("\n%12s%12s%12s","Mata Kuliah", "SKS", "Nilai\n");
    for(j = 0; j < jumlahmk; j++){
      printf("%12s%12d%12c\n",matkul[i][j],sks[i][j],varnilai[i][j]);
    }
    totalsks = totalsks + skssmt[i];
    totalnr = totalnr+(skssmt[i]*nr[i]);
    printf("TOTAL SKS\t: %d\n", totalsks);
    printf("TOTAL NILAI\t: %.2f\n", totalnr);
    printf("=======================================\n");
  	}
  	ipk = totalnr/jumlahsks;
  	printf("NILAI IPK\t\t: %.2f\n", ipk);
  	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
  	printf("||\t	PROGRAM SELESAI \t|| \n\n");
  	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
  	
	return 0;
}
