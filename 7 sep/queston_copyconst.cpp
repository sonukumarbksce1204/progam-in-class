#include<iostream>
using namespace std;
class marks{
    int scm;
    int mtm;
    public:
        marks(int m1,int m2){
            scm=m1;
            mtm=m2;
        }
        marks(marks &obj){
            scm=obj.scm;
            mtm=obj.mtm;
        }
        void display(){
            cout<<"Science marks "<<scm<<endl<<"maths marks "<<mtm<<endl;;
        }
};

int main(){
    marks m1(90,95);
    marks m2(m1);
    m1.display();
    m2.display();
}