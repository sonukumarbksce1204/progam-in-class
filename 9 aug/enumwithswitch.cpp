#include<iostream>
using namespace std;
enum level
{
	easy=1,normal,hard
};
int main()
{
	int  choice;
	cin>>choice;
	switch(choice){
		case easy: cout<<"leavel is easy";
				break;
		case normal: cout <<"leavel is normal";
				break;
		case hard: cout << "leavel is hard";
				break;
		default: cout <<"You level is illegal";
	}
}
