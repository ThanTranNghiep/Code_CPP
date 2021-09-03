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
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}/*
int Tong(int a[][Max],int row,int col){
    int s=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<=j)
                s+=a[i][j];
        }
    }
    return s;
}*/
int Tongtren(int a[][Max],int row,int col){
    int s=0;
    for(int i=0;i<row;i++){
        for(int j=i;j<row;j++){
            s+=a[i][j];
        }
    }
    return s;
}
int main(){
    int a[Max][Max],row,col;
    cout<<"Insert row: ";
    cin>>row;
    cout<<"\nInsert colum: ";
    cin>>col;
    ArrIn(a,row,col);
    cout<<"\nMa tran vua nhap la:"<<endl;
    ArrOut(a,row,col);
    cout<<"\nTong nua ma tran tren la:"<<Tongtren(a,row,col);
    return 0;
}