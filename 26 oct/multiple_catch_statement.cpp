#include<iostream>
using namespace std;
void test(int x){
    try{
        if(x==1) throw x;
        else if(x==0) throw 'x';
        else if(x==-1) throw 1.0;
    }
    catch(char c){
        cout<<"Character caught"<<endl;
    }
    catch(int c){
        cout<<"Integer caught"<<endl;
    }
    catch(double c){
        cout<<"double caught"<<endl;
    }
}

int main(){
    cout<<"testing multiple catches"<<endl;
    cout<<"x==1"<<endl;
    test(1);
    cout<<"x==0"<<endl;
    test(0);
    cout<<"x==-1"<<endl;
    test(1);
    cout<<"x==2"<<endl;
    test(2);
    return 0;

}