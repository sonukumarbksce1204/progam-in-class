#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char* str="Hello, this is dynamic memory allocation";
    int len=strlen(str);
    char* ptr;
    ptr=new char[len+1];
    strcpy(ptr,str);
    cout<<"ptr= "<<ptr<<endl;
    delete []ptr;
}