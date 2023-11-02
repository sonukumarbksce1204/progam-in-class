#include<iostream>
using namespace std;
class Rectangel{
    private:
        int l,b;
    public:
        int are;
        Rectangel(){
            l=20;
            b=10;
        }
        void area(){
            are=l*b;
            cout<<"Area of rectangle is: "<< are;
        }
};
int main(){
    Rectangel r1;
    r1.area();
}