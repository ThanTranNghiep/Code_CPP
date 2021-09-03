#include<iostream>
#include<math.h>
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
}
int ktngto(int n){
    if(n<=1)
        return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void lkngto(int a[][Max],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(ktngto(a[i][j])==1)
                cout<<a[i][j]<<" ";
        }
    }
}
int main(){
    int a[Max][Max], row, col;
    cout<<"Insert row: ";
    cin>>row;
    cout<<"\nInsert col: ";
    cin>>col;
    ArrIn(a,row,col);
    ArrOut(a,row,col);
    cout<<"\nCac so ngto trong ma tran la: ";
    lkngto(a,row,col);
    return 0;
}
