//
// Created by Chandu-Kumar on 16/02/24.
//
#include <iostream>
using namespace std;

// sum of the even number using the user input

int main(){
 int num;
 cout<<"enter the number -";
 cin>>num;
 int sum=0;
 int i=1;

    while (i<=num){
        if (i%2==0){
            cout<<"Even number - "<<i<<endl;
            sum=sum+i;

        }
        i++;
    }
    cout<<"sum of the even number -"<<sum<<endl;


}