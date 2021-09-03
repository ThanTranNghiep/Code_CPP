#include<iostream>
using namespace std;
const int Max =100;
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
}
void Tangdan(int a[][Max],int row,int &col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<j;k++){
                if(a[i][j]<a[i][k]){
                    int temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
}
int main(){
    int a[Max][Max],row,col,n;
    cout<<"Insert row : ";
    cin>>row;
    cout<<"\nInsert colum : ";
    cin>>col;
    ArrIn(a,row,col);
    cout<<"\nMa tran vua nhap la:"<<endl;
    ArrOut(a,row,col);
    cout<<"\nMa tran dc sap xep theo thu tu tang dan la:"<<endl;
    Tangdan(a,row,col);
    ArrOut(a,row,col);
return 0;
}