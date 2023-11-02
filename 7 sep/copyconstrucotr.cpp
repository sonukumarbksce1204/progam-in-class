#include<iostream>
using namespace std;
class counter{
    int c;
    public:
        counter(int a){  //single parameter
            c=a;
        }
        counter(counter &obj){  //copy
            cout<<"Copy construcotr invoked";
            c=obj.c;
        }
};
int main(){
    counter c(5);
    counter c1(c);
}