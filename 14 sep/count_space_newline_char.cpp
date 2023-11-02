#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    fstream obj1;
    obj1.open("Example1.txt",ios::in);//in ::app for merging
    char ch;
    if(!obj1){
        cout<<"\n File not opend";
        exit(1);
    }
    ch=obj1.get();
    int chr=0,space=0,newline=0;
    while(obj1.eof()==0){
        if(ch==' '){
            space++;
        }
        else if(ch=='\n'){
            newline++;
        }
        else{
            chr++;
        }
        ch=obj1.get();
    }
    cout<<"total no of character: "<<chr<<endl;
    cout<<"total no of space: "<<space<<endl;
    cout<<"total no of newline: "<<newline<<endl;
    return 0;
}