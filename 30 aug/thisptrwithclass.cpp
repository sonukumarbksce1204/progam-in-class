#include<iostream>
#include<string.h>
using namespace std;
class student{
	int roll;
	char name[20];
	public:
			void get(char name[],int roll){
				strcpy(this->name,name);
				this->roll=roll;
			}
			void print(){
				cout<<"Name is : "<<name<<" Roll no : "<<roll<<endl;
			}
};
int main(){
	student s1;
	s1.get("sonu",65);
	s1.print();
}
