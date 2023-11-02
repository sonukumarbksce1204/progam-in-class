#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream t;
    t.open("table.txt");
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        t<<n<<"*"<<i<<"="<<i*n<<'\n';
    }
    t.close();
}