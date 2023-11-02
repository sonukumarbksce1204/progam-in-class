#include<iostream>
using namespace std;
class complex{
    private:
        int x;
        int y;
    public:
        complex(){

        }
        complex(int a,int b){
            x=a;
            y=b;
        }
        complex operator +(complex n1){
            complex temp;
            temp.x=x+n1.x;
            temp.y=y+n1.y;
            return temp;
        }
        void display(){
            cout<<x<<"+i"<<y<<endl;
        }
        
};

int main(){
    complex s(10,20),c(2,4),res;
    res=s+c;
    res.display();
    
}