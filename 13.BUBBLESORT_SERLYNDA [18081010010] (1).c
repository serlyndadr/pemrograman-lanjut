#include <stdio.h>

void bubbleSort(int dataq[], int n){
     int  i,j, tmp; //tempat untuk penukaran variabel
        for(i=0; i < n; i++){
        for(j=0; j < n-1; j++){
          if(dataq[j] > dataq[j+1]){
            tmp = dataq[j];
            dataq[j] = dataq[j+1];
            dataq[j+1] = tmp;
          }
        }
    }
}
int main(){
	int i,n,data[10];
	printf("Masukkan banyaknya data :");
        scanf("%d", &n);

        //MENGINPUTKAN NILAI//
	printf("Masukkan nilai :\n");
	for (i = 0; i < n; i++)
        scanf("%d", &data[i]);
		//MENGURUTKAN DATA//
	bubbleSort(data, n);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < n; i++){
        printf("%d ", data[i]);
      	}
	return 0;
}
