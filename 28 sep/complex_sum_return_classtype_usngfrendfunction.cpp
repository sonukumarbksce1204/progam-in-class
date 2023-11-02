#include<iostream>
using namespace std;
class complex{
    private:
        int x;
        int y;
    public:
        complex(int a,int b){
            x=a;
            y=b;
        }
        friend complex operator +(complex n1,complex n2);
        void display(){
            cout<<x<<"+i"<<y<<endl;
        }
        
};

complex operator +(complex n1,complex n2){
    int x=n1.x+n2.x;
    int y=n1.y+n2.y;
    complex rel(x,y);
    return rel;
}

int main(){
    complex s(10,20),c(2,4);
    complex res=s+c;
    res.display();
    
}