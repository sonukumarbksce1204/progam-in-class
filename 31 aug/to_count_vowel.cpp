#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string vow("aeiouAEIOU");
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(vow.find_first_of('s[i]')>=0){
            count++;
        }
    }
    cout<<"Number of vowles in string is: "<<count<<endl;
}