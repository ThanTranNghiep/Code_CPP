#include<iostream>
using namespace std;
const int Max=100;
void ArrIn(int a[][Max],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
}
void ArrOut(int a[][Max],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}/*
void doihang(int a[][Max],int &row,int &col,int x,int y){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int temp=a[x][j];
            a[x][j]=a[y][j];
            a[y][j]=temp;
        }
    }
}*/
void hoanvi(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void doihang(int a[Max][Max],int &row,int &col,int x,int y){
//    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            hoanvi(a[x][j],a[y][j]);
        }
  //  }
}
int main(){
    int a[Max][Max],row,col,x,y;
    cout<<"Insert row: ";
    cin>>row;
    cout<<"\nInsert col: ";
    cin>>col;
    ArrIn(a,row,col);
    cout<<"\nMa tran vua nhap la:"<<endl;
    ArrOut(a,row,col);
    cout<<"\nDoi vi tri hang thu ";
    cin>>x;
    cout<<" va hang thu ";
    cin>>y;
    if(x<row&&y<row)
    {
        cout<<"\nMa tran sau khi doi hang thu "<<x<<" va hang thu "<<y<<" la:"<<endl;
        doihang(a,row,col,x,y);
        ArrOut(a,row,col);
    }
    return 0;
}