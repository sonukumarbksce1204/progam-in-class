#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
    fstream obj1;
    obj1.open("Example1.txt",ios::in);//in ::app for merging 
    fstream obj2;
    obj2.open("copy.txt",ios::app);
    char ch;
    if(!obj1||!obj2){
        cout<<"\n File not opend";
        exit(1);
    }
    ch=obj1.get();
   while(obj1.eof()==0){
        obj2.put(ch);
        ch=obj1.get();
    }
    cout<<"\n marged";
    return 0;

}