#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> r1;
    r1.push_back(10);
    r1.push_back(20);
    r1.push_back(30);
    r1.push_back(15);
    r1.push_back(25);
    list<int>::iterator it=r1.begin();
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    r1.pop_front();
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    r1.pop_back();
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    r1.sort();
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    r1.reverse();
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    it=r1.begin();
    it++;
    it++;
    r1.insert(it,56);
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    it=r1.begin();
    it++;
    r1.erase(it);
    cout<<"\nElement in linked list are"<<endl;
    for(it=r1.begin();it!=r1.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}