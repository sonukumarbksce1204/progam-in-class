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
    Employee e[3],d[3];
    int i;
    FILE.open("employee1",ios::out|ios::binary);
    cout<<"\nEnter the details of three employees";
    cout<<"\n____________________________________";
    for(int i=0;i<3;i++){
        e[i].read_data();
        FILE.write((char *)&e[i],sizeof(e[i]));
    }
    FILE.close();
    FILE.open("employee1",ios::in|ios::binary);
    for(int i=0;i<3;i++){
        FILE.read((char *)&d[i],sizeof(d[i]));
        d[i].show_data();
    }
    FILE.close();
    return 0;

}