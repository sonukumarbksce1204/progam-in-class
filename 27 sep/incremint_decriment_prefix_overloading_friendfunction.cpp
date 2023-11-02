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
        void display(){
            cout<<x<<" "<<y<<endl;
        }
        friend void operator ++(abc &n);
        friend void operator --(abc &n);
        
};
void operator ++(abc &n){
    n.x=++n.x;
    n.y=n.y+2;
}
void operator --(abc &n){
    n.x=--n.x;
    n.y=--n.y;
}
int main(){
    abc s(10,-20);
    cout<<"s ";
    s.display();
    --s;
    cout<<"s ";
    s.display();
    ++s;
    cout<<"s ";
    s.display();


}