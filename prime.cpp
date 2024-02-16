//
// Created by Chandu-Kumar on 16/02/24.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    int i=2;

    cout<<"Enter the number - ";
    cin>>number;

    while (i<number){

        if (number%i==0){
            cout<<"Not prime"<<i<<endl;
      }
//        else{
//            cout<<"Prime"<<i<<endl;
//        }
        i=i+1;

    }
}