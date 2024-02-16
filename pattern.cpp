//
// Created by Chandu-Kumar on 16/02/24.
//

//#include "pattern.h"
#include <iostream>
using namespace std;
//#ifndef DSA_PATTERN_H
//#define DSA_PATTERN_H


class pattern {
public:
    void patt(){

        int num;
        int i=1,j=1;

        cout<<"Enter any number - ";
        cin>>num;
        while (i<=num){
            while (j<=num){
                cout<<" * ";
                j++;
            }
            cout<<endl;
            i++;
        }
    }
    int main(){
        pattern obj;
        obj.patt();
        return 0;
    }
};
