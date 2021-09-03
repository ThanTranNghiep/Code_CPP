#include<iostream>
using namespace std;
void In(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void Out(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
bool ktra(int a[],int n,int x ){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return true;
		}
	}
		return false;
}
void hoanvi(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
void TangDan(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				hoanvi(a[i],a[j]);	
			}
		}
	}	
}
// them phan tu
/*
void themphtu(int a[],int &n,int vitri,int phantu){
	for(int i=n-1;i>=vitri;i--){
		a[i+1]=a[i];
	}
	n++;
	a[vitri]=phantu;
}  */
void themphtu(int a[], int &n, int vitri, int phantu)
{
	if(vitri>=0 && vitri<=n)
	{
		for(int i=n; i>vitri; i--)
			a[i] = a[i-1]; //D?ch các ph?n t? sang ph?i 1 v? trí
		a[vitri]=phantu; //Thêm x vào v? trí vt
		n++; //Tang s? ph?n t? lên 1		
	}
	else
	cout<<"\nVi tri "<<vitri<<" khong hop le."<<endl;
}
int main(){
	int a[100],n,x,vitri,phantu;
	cout<<"Nhap n: ";
	cin>>n;
	In(a,n);
	Out(a,n);
	//tim kiem
	cout<<"\nNhap phan tu can tim kiem: ";
	cin>>x;
	//vitri
	cout<<"\nEnter add new element: ";
	cin>>phantu;
	cout<<"\nEnter add new location:";
	cin>>vitri;
	//xuat tim kiem
	bool timkiem=ktra(a,n,x);
	if(timkiem==true){
		cout<<"\nPhan tu "<<x<<" co ton tai trong mang"<<endl;
	}
	else{
		cout<<"\nPhan tu "<<x<<" khong ton tai trong mang"<<endl;
	}
	// xuat tang dan
	cout<<"\nCac phan tu theo thu tu tang dan la:"<<endl;
	TangDan(a,n);
	Out(a,n);
	// xuat vitri
	cout<<"\nMang moi la:";
	themphtu(a,n,vitri,phantu); 
	Out(a,n);
system("pause");
return 0;
}