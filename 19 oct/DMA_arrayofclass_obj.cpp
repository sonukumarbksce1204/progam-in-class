#include<iostream>
using namespace std;
class empl{
    private:
        int sal,id;
    public:
        void input(){
            cin>>id>>sal;
        }
        void display(){
            cout<<"ID: "<<id<<"\nSalary: "<<sal<<endl;
        }
};

int main(){
    int *n=new int;
    cin>>*n;
    empl *ptr=new empl[*n];
    for(int i=0;i<*n;i++){
        ptr->input();//ptr[i].input();
        ptr++;
    }
    
    for(int i=0;i<*n;i++){
        ptr--;
    }

    for(int i=0;i<*n;i++){
        ptr->display();//ptr[i].display();
        ptr++;
    }
    
    delete []ptr,n;


}