#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int rno;
	char name[20];
	int age;
	void get()
	{
		cin>>rno>>name>>age;
	}
	void put()
	{
		cout<<rno<<" "<<name<<" "<<age<<endl;
	}
};
int main()
{
	student s[5];
	for(int i=0;i<5;i++)
	{
		s[i].get();
	}
	cout<<"Record stored"<<endl;
	for(int j=0;j<5;j++)
	{
		if(strcmp(s[j].name,"abc")==0)
		{
			s[j].put();
		}
	}
}
