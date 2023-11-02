#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    int pos;
    fstream obj;
    obj.open("Example1.txt",ios::out);
    obj<<"welcome";
    cout<<"Current pos: ";
    cout<<obj.tellp()<<endl;
    cout<<"Enter pos to move: ";
    cin>>pos;
    obj.seekg(pos,ios::beg);
    cout<<"current pos "<<obj.tellg()<<endl;
    cout<<"Enter pos to move: ";
    cin>>pos;
    obj.seekg(pos,ios::cur);
    cout<<"current pos "<<obj.tellg()<<endl;
    cout<<"Enter pos to move form end: ";
    cin>>pos;
    obj.seekg(-pos,ios::end);
    cout<<"current pos moved form end: "<<obj.tellg()<<endl;
    cout<<obj.tellp()<<endl;

}