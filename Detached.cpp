#include <iostream>
using namespace std;
void Input(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void output(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void Detached(int a[],int n,int b[],int &m){
    m=0;
    for(int i=0;i<n;i++){
            if(a[i]<0){
                b[m++]=a[i];
        }
    }
}
void Merge(int a[],int &n,int b[],int m){
    for(int j=0;j<m;j++){
        a[n++]=b[j];
    }
}
void DeleteElement(int a[],int &n,int x){
     for(int i=x;i<n;i++){
        a[i]=a[i++];
    }
    n--;
}
void hoanvi(int &x,int &y){
    int temp =x;
    x=y;
    y=temp;
}
void tangdan(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                hoanvi(a[i],a[j]);
            }
        }
    }
}
int main()
{
    int a[100],b[100],n,m,x;
    cout<<"Nhap n: ";
    cin>>n;
    Input(a,n);
    output(a,n);
    cout<<"\nMang moi la: ";
    Detached(a,n,b,m);
    output(b,m);
    cout<<"\nMang xep tang dan la: ";
    tangdan(a,n);
    output(a,n);
    cout<<"\nMang sau khi gop la: ";
    Merge(a,n,b,m);
    output(a,n);
    cout<<"\nPhan tu can xoa la: ";
    cin>>x;
    DeleteElement(a,n,x);
    output(a,n);
    system("pause");
    return 0;
}
