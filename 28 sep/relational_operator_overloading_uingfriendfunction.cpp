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
        friend void operator >(abc n1,abc n2);
        friend void operator >=(abc n1,abc n2);
        friend void operator ==(abc n1,abc n2);
        
};

void operator >(abc n1,abc n2){
    cout<<(n1.x>n2.x)<<" ";
    cout<<(n1.y>n2.y)<<" ";
    cout<<endl;
}
void operator >=(abc n1,abc n2){
    cout<<(n1.x>=n2.x)<<" ";
    cout<<(n1.y>=n2.y)<<" ";
    cout<<endl;
}
void operator ==(abc n1,abc n2){
    cout<<(n1.x==n2.x)<<" ";
    cout<<(n1.y==n2.y)<<" ";
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