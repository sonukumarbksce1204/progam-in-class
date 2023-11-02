#include<iostream>
using namespace std;
class abc{
    private:
        int x;
        int y;
    public:
        abc(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<x<<" "<<y<<endl;
        }
        void operator +(abc &n);
        void operator -(abc &n);
        void operator *(abc &n);
        void operator /(abc &n);
        void operator %(abc &n);
        
};
void abc::operator +(abc &n){
    x+=n.x;
    y+=n.y;
}
void abc::operator -(abc &n){
    x-=n.x;
    y-=n.y;
}
void abc::operator *(abc &n){
    x*=n.x;
    y*=n.y;
}
void abc::operator /(abc &n){
    x/=n.x;
    y/=n.y;
}
void abc::operator %(abc &n){
    x%=n.x;
    y%=n.y;
}
int main(){
    abc s(10,20),c(2,4);
    cout<<"s ";
    s.display();
    s+c;
    s.display();
    s-c;
    s.display();
    s*c;
    s.display();
    s/c;
    s.display();
    s%c;
    s.display();

}