#include<iostream>
using namespace std;
class abc{
    private:
        int x;
        int y;
        int z;
    public:
        abc(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void display(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        void operator !();//{
        //     x=!x;
        //     y=!y;
        //     z=!z;
        // }

        // 

};
void abc::operator !(){
    x=!x;
    y=!y;
    z=!z;
}
int main(){
    abc s(10,-20,0);
    cout<<"s ";
    s.display();
    !s;   //s.operator !();
    cout<<"s ";
    s.display();


}