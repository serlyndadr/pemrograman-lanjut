#include <stdio.h>
#include <stdlib.h>

float pangkat (float a, float b)
{
	if (b==0){
		return 1;
	}	
	if (b<=-1)
		return pangkat(a, b+1)/a;
	else
        return pangkat(a, b-1)*a;
    }

int main() 
{
float a,b,hasil1;
	printf("====Bentuk Rekursif====\n\n");
	printf("Masukkan angka yang ingin dipangkatkan : ");
	scanf("%f", &a);
	printf("Masukkan pangkat : ");
	scanf("%f", &b);
	
	hasil1=pangkat(a,b);
	printf("Hasil pangkat rekursifnya adalah %f \n", hasil1);
	return 0;
}
