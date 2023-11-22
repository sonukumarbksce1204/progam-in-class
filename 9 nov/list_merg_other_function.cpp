#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l){
    list<int>::iterator p;
    cout<<"\n"<<*p;
}

int main(){
    list<int>list1;
    list<int>list2(5);
    for(int i=0;i<3;i++){
        list1.push_back(i);
    }
    cout<<"Displaying first list: ";
    display(list1);
    list<int>::iterator p;
    for(p=list2.begin();p!=list2.end();p++){
        *p=1;
    }
    cout<<"Displaying second list: ";
    display(list2);
    cout<<"\n Poping element from front:";
    display(list2);
    cout<<"\nsorting first list:";
    list1.sort();
    display(list1);
    cout<<"\n Sorting second list:";
    list2.sort();
    display(list2);
    cout<<"\n Merge list:";
    list1.merge(list2);
    display(list1);
    list1.reverse();
    cout<<"reverse merge list:"<<endl;
    display(list1);
}