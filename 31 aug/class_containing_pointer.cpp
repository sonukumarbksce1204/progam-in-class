#include<iostream>
using namespace std;
class book{
    int *price;
    int *year;
    public:
        void getdata(int x,int y);
        void putdata();

};
void book::getdata(int x,int y){
    price=&x;
    year=&y;
}
void book::putdata(){
    cout<<"Price is "<<*price<<endl;
    cout<<"year is "<<*year<<endl;
}
int main(){
    book b;
    b.getdata(400,2010);
    b.putdata();
}