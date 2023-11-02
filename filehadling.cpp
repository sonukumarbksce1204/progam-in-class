#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj;
    obj.open("try.txt");
    string name;
    int roll;
    string sec;
    cin>>name>>roll>>sec;
    obj<<name<<" "<<roll<<" "<<sec<<"\n";
    ifstream fr;
    fr.open("try.txt");
    // while(fr){
        string n,s;
        int r;
        fr>>n>>s>>r;
        cout<<n<<" "<<s<<" "<<r;
    // }
}
