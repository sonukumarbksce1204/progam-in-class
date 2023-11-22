#include<iostream>
using namespace std;
template<class T1,class T2>
class max1{
    private:
        T1 x;
        T2 y;
    public:
        max1(T1 x,T2 y){
            this->x=x;
            this->y=y;
        }
        void find();

};
template<class T1,class T2>
void max1<T1,T2>::find(){
            if(x>y){
                cout<<"The maxinum number is: "<<x;
            }
            else{
                cout<<"The maxinum number is: "<<y;
            }
        }

int main(){
    int x;
    float y;
    cin>>x>>y;
    max1<int,float>ob(x,y);
    ob.find();

}