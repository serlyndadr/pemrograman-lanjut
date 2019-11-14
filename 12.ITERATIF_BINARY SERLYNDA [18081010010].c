#include <stdio.h> 
#include <stdlib.h> 
    int main(){ 
    int angka[9] = {3,9,11,12,15,17,23,31,35}; 
    int i,j,k; 
    int cariData,ketemu; 
    printf("Masukkan angka yang dicari = "); 
    scanf("%d",&cariData); 
    i = 0; j = 9;ketemu = 0; 
        while((ketemu == 0) && (i<=j)){ 
            k = (i + j) / 2; 
            if(angka[k] == cariData){ 
            ketemu = 1; 
        } 
        else{ 
            if(angka[k] > cariData){ 
                j = k - 1; 
            } 
            else{ 
                i = k + 1; 
            } 
        } 
    } 
    if(ketemu==1){ 
        printf("Angka %d terdapat pada indeks ke- %i \n",cariData, k++ ); 
    }else{ 
        printf("Angka %d tidak terdapat pada kumpulan data\n",cariData ); 
    } 
}

