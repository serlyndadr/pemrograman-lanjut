#include <stdio.h>
#include <stdlib.h>

float a,b,hasil2,i;
float pangkatiterasi (float a, float b){
	hasil2=1;
	if (b==0)
		return 1;
	if (b<=-1)
		for (i=-1; i>=b; i--){
			hasil2=hasil2*b;
		}
		return hasil2;
	}
int main() 
{
	
	printf("====Bentuk Iteratif====\n\n");
	printf("Masukkan angka : ");
	scanf("%f", &a);
	printf("Masukkan pangkat : ");
	scanf("%f", &b);
	
	hasil2 =pangkatiterasi(a,b);
	printf("Hasil dari pangkat iteratif adalah %f\n", hasil2);
	return 0;
}
