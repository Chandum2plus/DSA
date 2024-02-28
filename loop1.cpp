//
// Created by Chandu-Kumar on 17/02/24.
//

#include <iostream>
using namespace std;

int main(){

    int num;
    int i=1;
     cout<<"Enter any number -";
     cin>>num;

    while (i<=num){

        int j=1;
        while (j<=num){
            cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }
}