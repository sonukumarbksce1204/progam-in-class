#include<iostream>
#include<string>
using namespace std;
class customer{
    private:
        string name;
        int acctno;
        int dob;
        int bal;
    public:
        customer(string n,int acno,int db,int ba){
            name=n;
            acctno=acno;
            dob=db;
            bal=ba;
        }
        void put(){
            cout<<name<<" "<<acctno<<" "<<dob<<" "<<bal<<endl;
        }
};
int main(){
    string name;
    int actno,bal,dob;
    //cin.ignore();
    getline(cin,name);
    cin>>actno>>dob>>bal;
    customer c(name,actno,dob,bal);
    c.put();
}