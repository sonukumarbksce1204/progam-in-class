#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

class Employee{
    private:
        int emp_code;
        char name[20];
        int hra;
        int da;
        int ta;
    public:
        void read_data(){
            cout<<"\nEnter the employee code: ";
            cin>>emp_code;
            cout<<"\nEnter the name of employee: ";
            cin>>name;
            cout<<"\nEnter the HRA,DA and TA: ";
            cin>>hra>>da>>ta;
        }
        void show_data(){
            cout<<"\n EMP CODE: "<<emp_code;
            cout<<"\n NAME: "<<name;
            cout<<"\n HRA,DA and TA: "<<hra<<"\t"<<da<<"\t"<<ta;
        }
};

int main(){
    fstream FILE;
    Employee e;
    int no;
    FILE.open("employee1",ios::in|ios::binary);
    cout<<"\nEnter the object whose record has to be displayed";
    cin>>no;
    int location=(no-1)*sizeof(e);
    FILE.seekg(location);
    FILE.read((char *)&e,sizeof(e));
    e.show_data();
    FILE.close();
    
    return 0;
}