#include<iostream>
using namespace std;

class distance1{
    int km;
    public:
        distance1(int d){
            km=d*1000;
        }
        void show(){
            cout<<km<<endl;
        }
};

int main(){
    distance1 dis(16);
    dis.show();
}