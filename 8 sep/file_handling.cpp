#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
main(){
    char name[20];
    int rno;
    ofstream o;
    o.open("abc");
    cin>>name;
    cin>>rno;
    o<<name;
    o<<" ";
    o<<rno;

    o.close();
}