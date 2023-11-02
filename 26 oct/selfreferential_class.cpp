#include<iostream>
#include<conio.h>
using namespace std;
class s{
    int rollno;
    char name[10];
    int age;
    s *next;
    public:
        s(){
            next=NULL;
        }
        void getdata(){
            cout<<"Enter rollno, name, age "<<endl;
            cin>>rollno>>name>>age;
        }
        void link(s *t){
            next=t;
        }
        void print(){
            s *p=this;
            while(p!=NULL){
                cout<<"Roll no = "<<p->rollno<<"Name= "<<p->name<<"Age= "<<p->age<<endl;
                p=p->next;
            }
        }

};
main(){
    s o1,o2,o3;
    o1.getdata();
    o2.getdata();
    o3.getdata();
    o1.link(&o2);
    o2.link(&o3);
    o1.print();
    getch();
}