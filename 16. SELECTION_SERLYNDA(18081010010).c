#include<stdio.h>

void selection(int angka[], int n){
	int i,j,indexmin,temp;
	for(i=0; i<n; i++){
		indexmin=i;
		for(j=i; j<n; j++){
			if(angka[indexmin]>angka[j]){
				indexmin=j;
			}
		}
		//swap value (tukar)
		temp=angka[indexmin];
		angka[indexmin]=angka[i];
		angka[i]=temp;
	}
}

int main(){
int angka[10],n,i,j;

printf("================================== \n");
printf("|     METODE SELECTION SORT      |\n");
printf("================================== \n\n");
printf("Masukkan banyaknya data :");
scanf("%d", &n);
  //proses penginputan data
  for(i=0;i<n;i++)
  {
    printf("Angka ke-%d:",i+1);
    scanf("%d",&angka[i]);
  }
  
selection(angka, n);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < n; i++){
        printf("%d ", angka[i]);
      	}
	getchar();
	return 0;
}
