#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    cout<<"Size: "<<v1.size()<<endl;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(2);
    v1.push_back(1);
    cout<<"Size of vector: "<<v1.size()<<endl;
    cout<<"Elements of vector: ";
    int i;
    for(i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    v1.pop_back();
    cout<<"Elements of vector: ";
    for( i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    cout<<"\nUsing iterator for display  "<<endl;
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    v1.push_back(8);
    v1.push_back(9);
    cout<<endl;
    cout<<"elements: ";
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    it=v1.begin();
    it++;
    it++;
    v1.insert(it,15);
    cout<<endl<<"After insertion"<<endl;
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    v1.erase(v1.begin()+4);
    cout<<endl<<"After deletion"<<endl;
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<"Size of vector: "<<v1.size()<<endl;
    v1.clear();
    cout<<"Size of vector after clear: "<<v1.size()<<endl;
    return 0;
}