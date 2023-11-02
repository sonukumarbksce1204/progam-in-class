#include<iostream>
#include<string.h>
using namespace std;
class address{
    public:
        int hno;
        string city;
        
            address(){
                strcpy(name,"abc");
            }
            ~address(){
                cout<<"Department class destroyed"<<endl;
            }
};
class professor{
    public:
        int pid;
        int exp;
        department *d;
            professor(int a,int b,department *d){
                pid=a;
                exp=b;
                this->d=d;
            }
            ~professor(){
                cout<<"Professor class destroyed"<<endl;
            }
};

int main(){
    department d;
    {
        professor(101,5,&d);
    }
    cout<<"Professor is destroyed but department not"<<endl;
}
