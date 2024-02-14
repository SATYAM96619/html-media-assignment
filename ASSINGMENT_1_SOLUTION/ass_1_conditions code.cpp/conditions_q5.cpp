#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the first character:\n";
    char ch1;
    cin>>ch1;
    cout<<"Enter the second character:\n";
    char ch2;
    cin>>ch2;
    int ascii1=(int)ch1;
    int ascii2=(int)ch2;
    cout<<"Difference is : "<<ascii1-ascii2;
    return 0;
}