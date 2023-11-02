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
        void operator >(abc &n);
        void operator >=(abc &n);
        void operator ==(abc &n);
        
};
void abc::operator >(abc &n){
    cout<<(x>n.x)<<" ";
    cout<<(y>n.y)<<" ";
    cout<<endl;
}
void abc::operator >=(abc &n){
    cout<<(x>=n.x)<<" ";
    cout<<(y>=n.y)<<" ";
    cout<<endl;
}
void abc::operator ==(abc &n){
    cout<<(x==n.x)<<" ";
    cout<<(y==n.y)<<" ";
    cout<<endl;
}
int main(){
    abc s(10,20),c(2,4);
    cout<<"s>c: ";
    s>c;
    cout<<"s>=c: ";
    s>=c;
    cout<<"s==c: ";
    s==c;
}