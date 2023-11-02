#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream w;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    w.open("num.txt");
    if(!w){
        cout<<"\nFile could not created"<<endl;
        exit(1);
    }
    w<<n1<<" "<<n2<<" "<<n3;
    w.close();

    ifstream r;
    r.open("num.txt");
    int a1,a2,a3;
    r>>a1;
    r>>a2;
    r>>a3;
    r.close();

    ofstream o("large.txt");
    if(a1>a2&&a1>a3){
        o<<a1;
    }
    else if(n2>n1&&n2>n3){
        o<<a2;
    }
    else{
        o<<a3;
    }
    o.close();

}