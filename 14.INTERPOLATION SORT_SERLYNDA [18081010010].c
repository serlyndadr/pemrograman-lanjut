#include<stdio.h>

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
int main()
{
  //deklarasi variable
  int A[10], n, i,j,k,tkr,low,high,pos,tm;
  
printf("Masukkan banyaknya data :");
scanf("%d", &n);
  //proses penginputan data
  for(i=0;i<n;i++)
  {
    printf("data ke-%d:",i+1);
    scanf("%d",&A[i]);
  }
  
  bubbleSort(A, n);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
      	}
  //Input data yang akan dicari
  printf("\nMasukkan data yang akan anda cari:");
  scanf("%d",&k);

  //proses pencarian data
  tm=0;
  high=n;
  low=0;
  do
  {
      pos = ((k - A[low]) / (A[high] - A[low]))*(high-low) + low;
      if (A[pos] == k)
        {
            tm++;
            break;
        }
      if (A[pos] > k)
      high = pos-1;
            else
      if (A[pos] < k)
      low = pos + 1;
  }
  while(k >= A[low] && k <= A[high]);
  if (tm>0)
  {
     printf("data %d yang dicari ada dalam array\n",k);
  }
  //jika tidak ditemukan
  else
  {
     printf("data tidak ditemukan dalam array\n");
  }
 getch();
 return 0;
}

