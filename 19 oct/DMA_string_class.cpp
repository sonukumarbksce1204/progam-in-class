#include<iostream>
#include<string.h>
using namespace std;
class string1{
    private:
        char* str;
    public:
        string1(char* s){
            int len=strlen(s);
            str=new char[len+1];
            strcpy(str,s);
        }
        ~string1(){
            cout<<"Deleting str\n";
            delete []str;
        }
        void display(){
            cout<<str<<endl;
        }
};

int main(){
    string1 s1("This is DMA example for string");
    cout<<"s1=";
    s1.display();
    return 0;
}