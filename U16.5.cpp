#include<stdio.h>
#include<stdlib.h>
#define Max 5
#define arr int num[Max]
#define number "%d %d %d %d %d"
#define num5 n1,n2,n3,n4,n5
#define scnum &n1,&n2,&n3,&n4,&n5
void get_min(int [Max]);
int main(void){
	int num5;
	printf("請輸入5個數字");
	scanf(number,scnum);
    arr={num5};
	get_min(num);	
}
void get_min(arr){
	int box;
	for(int i=0;i<Max;i++)
		for(int j=i+1;j<Max;j++){
			if(num[i]>num[j]){
				box=num[i];
				num[i]=num[j];
				num[j]=box;
			}
		} 
	printf("\n最小的數字為:");
	printf("%d",num[0]);
}
