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
        void operator ++(int n);//{
        void operator --(int n);//{
        
};
void abc::operator ++(int n){
    x=x++;
    y=y++;
}
void abc::operator --(int n){
    x=x--;
    y=y--;
}
int main(){
    abc s(10,-20);
    cout<<"s ";
    s.display();
    s++;
    cout<<"s ";
    s.display();
    s--;
    cout<<"s ";
    s.display();


}