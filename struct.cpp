#include<iostream>
using namespace std;
struct trannghiep{
    int id;
    std::string name;
    int ngay;
};
int main(){
    trannghiep ttn;
    ttn.id=20;
    ttn.name="thantrannghiep";
    ttn.ngay=26;
    cout<<ttn.id<<ttn.name;
    return 0;
}