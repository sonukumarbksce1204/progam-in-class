#include<iostream>
using namespace std;
class Rectangel{
    private:
        int l,w;
    public:
        int are;
        Rectangel(int a,int b){
            l=a;
            w=b;
        }
        void area(){
            are=l*w;
            cout<<"Area of rectangle is: "<< are;
        }
};
int main(){
    int x,y;
    cin>>x>>y;
    Rectangel r1(x,y);
    r1.area();
}