#include<iostream>
using namespace std;

class academic{
    protected:
        float arr[5];
        float tot=0;
    public:
        float get(){
            for(int i=0;i<5;i++){
                cin>>arr[i];
                tot+=arr[i];
            }
            return tot;
        }
};

class sports{
    protected:
        int wat;
    public:
        int getsp(){
            cin>>wat;
            return wat;
        }
};

class result:public academic,public sports{   //will aso work for protected but in public
    public:                                  //we can call member function in main() but not in protected;
        void cal(){
            cout<<"result"<<((get()+getsp())/600)*100<<endl;
        }
};


int main(){
    result r;
    r.cal();
}