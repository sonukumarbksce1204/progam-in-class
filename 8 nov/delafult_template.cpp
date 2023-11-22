#include<iostream>
using namespace std;
template<class T1=int,class T2=int,class T3=float>
class area1{
    private:
        T1 s;
        T1 l;
        T2 b;
    public:
        area1(T1 s,T1 l,T2 b){
            this->s=s;
            this->l=l;
            this->b=b;
        }
        void square(){
            cout<<"area of square: "<<s*s<<endl;
        }
        void rect(){
            cout<<"area of rectangle: "<<l*b<<endl;
        }

};

int main(){
    int a;
    int l;
    float b;
    cin>>l>>b;
    area1<int> ob(a,l,b);
    ob.square();
    ob.rect();

}

