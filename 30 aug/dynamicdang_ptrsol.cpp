#include<iostream>
using namespace std;
int main(){
    int *pval=NULL;
    pval =new int;
    *pval=25;
    cout<<"Value before deletion "<<*pval<<"\n";
    cout<<"Address before deletion: "<<pval<<"\n";
    delete pval;
    cout<<"Value after deletion "<<*pval<<"\n";
    cout<<"Address after deletion: "<<pval<<"\n";
    pval=NULL;
}