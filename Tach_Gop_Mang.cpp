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

//tim kiem phan tu trong mang 
bool timkiem(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x)
			return true;
	}
	return false;
}
// Tach mang : Tách các phan tu am thanh mang moi
int TachMang(int a[],int n,int b[],int &m){
	m=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[m++]=a[i];
		}
	}
} 
// Gop mang : Gop cac phan tu vua tách vô mang ban dau  
int GopMang(int a[],int &n,int b[],int m){
	n+=m;
	for(int i=(n-m);i<n;i++){
		a[i]=b[i-(n-m)];
	}	
}
// Sap xep cho mang theo thu tu tang dan
void HoanVi(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
void TangDan(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				HoanVi(a[i],a[j]);
			}
		}
	}
}
// Them phan tu vao mang
/*
  code này chèn phan tu va vi tri moi vao ben phai vi tri cu
  Note: vd n=5 và chèn 6 vào vi tri 3
  1 2 3 4 5					1 2 3 4 5
  1 2 (3) 4 5 6      =>     1 2 X 3 4 5
  
void AddElement(int a[],int &n,int vitri,int phantu ){			
	for(int i=n;i>=vitri+1;i--){								
		a[i]=a[i-1];											
	}
	n++;
	a[vitri]=phantu	;
}									*/
// them phan tu vao mang
/*
code này chèn phan tu va vi tri moi vao ben trai vi tri cu
*/
void AddElement(int a[],int &n,int vitri,int phantu ){			
	for(int i=n-1;i>=vitri;i--){								
		a[i+1]=a[i];										
	}
	n++;
	a[vitri]=phantu	;
}
// Ham main
int main(){
//nhap n
	int a[100],n,x,b[100],m;
	cout<<"Nhap n: ";
	cin>>n;
//nhap mang
	In(a,n);
//nhap phan tu can tim kiem
	cout<<"\nPhan tu can tim kiem la: ";
	cin>>x;
// nhap vi tri va phan tu can them vao mang
	int vitri,phantu;
	cout<<"\nEnter add new element: "<<endl;
	cin>>phantu;
	do{
		cout<<"\nEnter add location:"<<endl;
		cin>>vitri;
		if(vitri<0||vitri>n)
			cout<<"Nhap sai! Nhap lai vitri!";
	}while(vitri<0||vitri>n);
	AddElement(a,n,vitri,phantu);
	cout<<"\nMang sau khi them phan tu la"<<endl;
	Out(a,n);
//xuat mang
	cout<<"\nMang vua nhap la:"<<endl;
	Out(a,n);
// Sap xep tang dan
	cout<<"\n\n\t\t****Sap xep tang dan****"<<endl;
	TangDan(a,n);
	Out(a,n);											// Xuat mang tang dan
// Tach mang
	cout<<"\nNew array include element is:"<<endl;
	TachMang(a,n,b,m);
	Out(b,m);											// Xuat mang vua tach ra
	cout<<"\nMang sau khi gop lai la:"<<endl;
	GopMang(a,n,b,m);
	Out(a,n);										   // Xuat mang vua gop lai

// Tim kiem phan tu trong mang
	bool check=timkiem(a,n,x);
	if(check==true){
		cout<<"\nPhan tu "<<x<<" co ton tai trong mang"<<endl;}
	else{
		cout<<"\nPhan tu "<<x<<" khong ton tai trong mang"<<endl;}
system("pause");
return 0;
}		
