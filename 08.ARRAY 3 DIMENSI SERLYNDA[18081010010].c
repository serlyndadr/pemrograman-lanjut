#include <stdio.h>
#include <math.h>

int main() {
	int jarak[15];
	int data[3][3][3]={{{5,1,5},{6,7,8},{1,2,1}},{{-3,2,1},{-4,3,4},{-5,7,8}},{{-2,1,-3},{-5,4,1},{-2,4,5}}};
	int p,q,r,i,j,k,d=0;
	
	for(p=0;p<3;p++){
		printf("__________________________________________\n");
		printf("Nilai X\t\tNilai Y\t\tNilai Z\n");
		printf("__________________________________________\n");
		for(q=0;q<3;q++){
			for(r=0;r<3;r++){
				printf("%d\t\t",data[p][q][r]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	int data [3] [4]= {{1,20,100},{2,40,150},{6,60,200},{9,20,100}};
printf("***************************************************\n");
printf("\t\t O U T P U T\t\t\t\n");
printf("***************************************************\n");
printf("\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			for(k=0;k<=2;k++){
			if(j<2){
			jarak[d] = data[i][j][k] - data[i][j+1][k];
			printf("Jarak : %d\n",jarak[d]);
			d++;
			}
		}
		printf("\n");
		}
		printf("\n");
	}
printf("***************************************************\n");
printf("\t\t R E S U L T\t\t\t\n");
printf("***************************************************\n");
printf("\n");
float hasil1 = (sqrt(pow(jarak[0],2)+pow(jarak[1],2)+pow(jarak[2],2)))+(sqrt(pow(jarak[3],2)+pow(jarak[4],2)+pow(jarak[5],2)));
float hasil2 = (sqrt(pow(jarak[6],2)+pow(jarak[7],2)+pow(jarak[8],2)))+(sqrt(pow(jarak[9],2)+pow(jarak[10],2)+pow(jarak[11],2)));
float hasil3 = (sqrt(pow(jarak[12],2)+pow(jarak[13],2)+pow(jarak[14],2)))+(sqrt(pow(jarak[15],2)+pow(jarak[16],2)+pow(jarak[17],2)));
	
	printf("Hasil %f\n",hasil1);
	printf("Hasil %f\n",hasil2);
	printf("Hasil %f\n",hasil3);
	return 0;
}

