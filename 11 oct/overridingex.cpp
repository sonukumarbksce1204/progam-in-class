#include<iostream>
#include<string>
using namespace std;

class course{
    protected:
        string cname;
        int cid;
    public:
        void get(){
            cout<<"cname: ";
            cin>>cname;
            cout<<"ID:";
            cin>>cid;
        }
};
class spelization:public course{
    protected:
        string type;
    public:
        void get(){ 
            course::get();
            cout<<"Type ";
            cin>>type;
        }
        void display(){
            cout<<"name: "<<cname<<endl;
            cout<<"ID:"<<cid<<endl;
            cout<<"Type: "<<type<<endl;
        }
};


int main(){
    spelization b;
    b.get();
    b.display();
}