#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="abcxyzAabb";
    string s2;
    cout<<"enter the string: ";
    getline(cin, s2);
    cout<<s1.compare(s1)<<endl;
    cout<<s1.compare(0,2,s2)<<endl;
    cout<<s1.compare(0,2,s2,5,2)<<endl;
    cout<<s1.find("ab")<<endl;
    cout<<s1.rfind("ab")<<endl;
    cout<<s1.find_last_of('b')<<endl;
    cout<<s1.find_first_of('b')<<endl;
    string s3=s1.substr(0,2);
    cout<<s3<<endl;
    cout<<s1.at(3)<<endl;

}