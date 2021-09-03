#include<stdio.h>
void ArrIn(int a[],int n);
void ArrOut(int a[],int n);
float Tich(int a[],int n);
int Max(int a[],int n);
int Min(int a[],int n);
int main(){
	int a[100],n;
	do{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}while(n<2 || n>=100);
	printf("\nNhap Mang:\n");
	ArrIn(a,n);
	printf("\nMang vua nhap la: ");
	ArrOut(a,n);
	printf("\nTich cac phan tu la: %.2f \n",Tich(a,n));
	printf("Max : %d - Min: %d\n",Max(a,n),Min(a,n) );
	return 0;
}
int Min(int a[],int n){
	int i,min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i])
			min=a[i];
	}
	return min;
}
int Max(int a[],int n){
	int max=a[0],i;
	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
float Tich(int a[],int n){
	int i,s=1;
	for(i=0;i<n;i++){
		s*=a[i];
	}
	return s;
}
void ArrOut(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
void ArrIn(int a[],int n){
	int i;
	do{
		for(i=0;i<n;i++){
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
	}while(a<0);
}
