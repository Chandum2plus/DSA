//
// Created by Chandu-Kumar on 17/02/24.
//

#include <iostream>

using namespace std;

void hello(){
//    cout<<"Hello world";
    int num;
    int i=1;
    cout<<"enter any number - ";
    cin>>num;
    int count=1;
    while (i<=num){
        int j=1;
        while (j<=num){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern1(){

    int num;
    int i=1;
    cout<<"enter the any number - ";
    cin>>num;

    while (i<=num){
        int j=1;
        while (j<=i){
            cout<<" * ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<"Jai Shri Ram";
}

void pattern2(){

    int num;
    int row=1;
    cout<<"enter any number - ";
    cin>>num;

    while (row<=num){

        int col=1;
        while (col<=row){
            cout<< row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}

void pattern3(){

    int num;
    int i=1;

    cout<<"enter the any number -";
    cin>>num;
    int count=1;
    while (i<=num){
        int j=1;

        while (j<=i ){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}

void pattern4(){
    int num;
    cout<<"enter the any number -";
    cin>>num;
    int i=1;

    while (i<=num){
        int j=1;
        int value=i;
        while(j<=i){
            cout<<value<<" ";
            value++;
            j++;

        }

        cout<<endl;
        i++;
    }
}

void pattern5(){

     int num;
     cout<<"enter the any number - ";
     cin>>num;

     int i=1;

    while (i<=num){
        int j=1;
        while (j<=i){
            cout<<i-j+1<<" ";
            j++;

        }
        cout<<endl;
        i++;
    }
}

void pattern6(){
    int num;
    cout<<"enter the any number -";
    cin>>num;
    int i=1;
    while (i<=num){
        int j=1;
        char ch='A'+i-1;
        while (j<=num){
            cout<<ch<<" ";
            j++;

        }
        cout<<endl;
        i++;
    }
}

void pattern7(){
    int num;
    cout<<"enter the any number - ";
    cin>>num;

    int i=1;
    while (i<=num){
        int j=1;
        char ch='A'+j-1;
        while(j<=num){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void increment(){
//    int i=7;
//    cout<<"value of i ="<<i<<endl;
//    cout<<"pre-increment ="<<++i<<endl;
//    cout<<"post-increment ="<<i++<<endl;
//    cout<<"post-decrement ="<<i--<<endl;
//    cout<<"pre-decrement ="<<--i<<endl;

//int a,b=1;
//a=10;
//    if (++a){
//        cout<<b<<"value of the b";
//    } else{
//        cout<<++b<<"value of the pre-increment of b";
//    }


int a=1;
int b=2;
    if (--a>0 && ++b>2){
        cout<<" stage1 - inside if";
    } else{
        cout<<"stage2 - inside else";
    }
    cout<<a <<""<<b<<endl;

}

void fibonacci(){
    
    int num;
    int a=0;
    int b=1;
    cout<<"enter the any number - ";
    cin>>num;

    cout<<a <<" "<<b<<" ";
    for (int i = 1; i <=num; ++i) {

        int sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";

        
    }
}

void prime(){

    int num;
    bool isprime=1;
    cout<<"enter the any number - ";
    cin>>num;


    for (int i = 2; i <num ; ++i) {

        if (num%i==0){

            isprime=0;
            break;
        }
    }
    if (isprime==0){
        cout<<"Not a prime number :"<<num<<endl;
    } else{
        cout<<"Prime number :"<<num<<endl;
    }
}

void forLopp1(){

    for (int i = 0; i <=5 ;i--) {
        cout<< i <<" ";
        i-- ;
        
    }
}


void arrays(){

    // declaring an array

    int a[10]={11,22,33};

    int num=10;
    for (int i = 0; i < num; ++i) {
        cout<<a[i]<<endl;

    }
    cout<<"value of the a ="<<a;
}
int main(){
    //hello();
    //pattern1();
    //pattern2();
    //pattern3();
    //pattern4();
    //pattern5();
    //pattern6();
    //pattern7();
    //increment();
    //fibonacci();
    //prime();
    //forLopp1();
    arrays();

}