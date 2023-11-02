#include<iostream>
using namespace std;
class shape{
    public:
        int l,b;
        float r;
        void area(int l,int b){
            cout<<"Area of rectangle: "<<l*b<<endl;
        }
        void area(float a){
            cout<<"Area of circle: "<<3.14*a*a<<endl;
        }
};
int main(){
    shape s;
    int l,b;
    float r;
    cin>>l>>b>>r;
    s.area(l,b);
    s.area(r);

}