#include <stdio.h>
#include <stdlib.h>

void insertion(int data[], int n){
	int i,j,temp;
	for (i=0; i<n; i++){
		for(j=i; j>0 && data[j]< data[j-1]; j-- ){
			temp=data[j-1];
			data[j-1]=data[j];
			data[j]=temp;
		}
	}
}
int main() 
{
int data[10],n,i,j;

printf(" ************************************ \n");
printf(" |     METODE INSERTION SORT        |\n");
printf(" ************************************ \n\n");
printf("Masukkan banyaknya data :");
scanf("%d", &n);
  //proses penginputan data
  for(i=0;i<n;i++)
  {
    printf("Data ke-%d:",i+1);
    scanf("%d",&data[i]);
  }
  
insertion(data, n);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < n; i++){
        printf("%d ", data[i]);
      	}
	getchar();
	return 0;
}
	
