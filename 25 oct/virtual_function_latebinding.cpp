#include<iostream>
using namespace std;

class bc{
    public:
        virtual void show(){
            cout<<"show() of base class"<<endl;
        }
};
class dc:public bc{
    public:
    void show(){
        cout<<"Show() of derived class "<<endl;
    }
};

int main(){
    bc *ptrb;
    bc obj;
    ptrb=&obj;
    cout<<"_____________Early binding____________"<<endl<<endl;
    cout<<"pointer to base objects"<<endl;
    ptrb->show();
    dc objd;
    ptrb=&objd;
    cout<<"pointer now to derived objects"<<endl;
    ptrb->show();

}