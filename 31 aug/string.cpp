#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="123";
    cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
    cout<<s1+s2<<endl;
    cout<<s1+"hii"+s1<<endl;
    swap(s1,s2);
    cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
    cout<<s1.append(s2)<<endl;
    cout<<s1.size()<<" "<<s2.length()<<endl;
    cout<<boolalpha<<s1.empty()<<endl;
    cout<<s1.max_size()<<endl;
    cout<<s2.insert(2,s1)<<endl;
    cout<<s1.erase(1,2)<<endl;
    cout<<s1.replace(1,3,s2)<<endl;

}