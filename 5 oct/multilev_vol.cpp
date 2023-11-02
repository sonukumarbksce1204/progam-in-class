#include<iostream>
using namespace std;
class length{
    protected:
        int l;
    public:
        int getl(){
            cin>>l;
            return l;
        }

};

class width:public length{
    protected:
        int b;
    public:
        int getb(){
            cin>>b;
            return b;
        }
};
class height:public width{
    protected:
        int h;
    public:
        int geth(){
            cin>>h;
            return h;
        }
};

class volume:protected height{
    public:
    void display(){
        cout<<"Volume: "<<getl()*getb()*geth()<<endl;
    }
};

int main(){
    volume v;
    v.display();
}