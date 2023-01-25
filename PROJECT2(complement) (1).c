#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i;
int binary(int number,int* result);
void complement1(int k,int arr[50],int* result);
void complement2(int k,int cp1[50],int* result1);
int main() {
	int number,k;
	printf("entrer un number : ");
	scanf("%d",&number);

		int arr[50];
		k=binary(number,arr);
			printf("valeur signee : ");
	for(i=0;i<=k;i++)
	{	
	printf("%d ",arr[i]);
	}
	if(number >= 0){
	    		printf("\n complement a 1 :");
	for(i=0;i<=k;i++)
	{	
	printf("%d ",arr[i]);
	}
	   		printf("\n complement a 2 :");
	for(i=0;i<=k;i++)
	{	
	printf("%d ",arr[i]);
	}//CP1=CP2=VS
	}
	else {
	int cp2[50];
	int cp1[50];
	complement1(k,arr,cp1);
	complement2(k,cp1,cp2);
	printf("\n complement a 1 :");
	for(i=0;i<=k;i++)
	{	
	printf("%d ",cp1[i]);
	}
		printf("\n complement a 2 :");

	for(i=0;i<=k;i++)
	{	
	printf("%d ",cp2[i]);
	}
	}
	return 0;
}
int binary(int number,int* result){

	int i,T[50],k,j,P;
	int n;
	 i=0;
	 int num;
	 if(number <= 0)
	 num=-number;
	 else 
	 	 num=number;

	while(num!=0){
		n=num%2;
		num=num/2;
		T[i]=n;
		i++;
	}
	k=i;
	int m=1;
	while(k>pow(2,m)){
	m++;	}
	P=pow(2,m)-1;

		for(i=P ,j=0;i>=k;i--,j++)
	{
	result[j]=0;
	}

	for(i=k-1 ;i>=0;i--,j++)
	{
	result[j]=T[i];

	}
	if (k!=P+1){
	
if(number <= 0)
		result[0]=1;
		else 
			result[0]=0;}
	return P;
}
void complement1(int k,int arr[50],int* result){
	int cp1[50];
	cp1[0]=arr[0];
	for(i=1;i<=k;i++){
		if(arr[i]==0)
		cp1[i]=1;
		else 
		cp1[i]=0;
	}	
			for(i=0;i<=k;i++)
	{	
	result[i]=cp1[i];
	}
	}

void complement2(int k,int cp1[50],int* result1){
	int cp2[50];
		for(i=0;i<=k;i++)
	cp2[i]=cp1[i];
		cp2[k]=cp2[k]+1;
	for(i=k;i>=1;i--){
if (cp2[i]>1)
{
cp2[i]=0;
if((i-1)!=0)
cp2[i-1]=cp2[i-1]+1;}
}
	


	
	

	for(i=0;i<=k;i++)
	result1[i]=cp2[i];


}

