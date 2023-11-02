#include<iostream>
using namespace std;

class distance1{
    float km;
    int m;
    public:
        distance1(float d1,int d){
            km=d1;
            m=d;
        }
        operator float(){
            return(km*1000);
        }
        operator int(){
            return (m/1000);
        }
        
};

int main(){
    float km;
    int m;
    cin>>km>>m;
    distance1 dis(km,m);
    m=dis;
    km=dis;
    cout<<km<<" "<<m;
}