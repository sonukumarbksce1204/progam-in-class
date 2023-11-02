#include<iostream>
using namespace std;

class bc{
    public:
        void printBC(){
            cout<<"printng meassage in base class "<<endl;
        }
        void show(){
            cout<<"show() of base class"<<endl;
        }
};
class dc:public bc{
    public:
    void printDC(){
            cout<<"printng meassage in derived class "<<endl;
        }
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
    ptrb->printBC();

    dc *dptr;
    dptr=&objd;
    cout<<"\ndptr is derived type pointer "<<endl;
    dptr->show();
    dptr->printDC();
    cout<<"Type cast to acces derived members:"<<endl;
    ((dc*)ptrb)->show();
    ((dc*)ptrb)->printDC();
    //dptr=&obj;



}