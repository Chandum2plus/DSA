#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the value -: "<<endl;
    cin>>ch;
    if ((ch>='a'&&ch<='z')||(ch>='A'&& ch<='Z'))
    {
        cout<<"Character" <<ch<<endl;
    }else if (ch>='0'&&ch<='9')
    {
        cout<<"Digit" <<ch<<endl;
    }else{
        cout<<"Special Symbol "<<ch<<endl;
    }
    return 0;

}