#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int num;
	string str;
	cout<<"please enter a number:"<<endl;
	cin>>num;
	switch(num){
		case 10: str="its 10"; break;
		case 20: str="its 20"; break;
		case 30: str="its 30"; break;
		default: str="wrong number";
	}
	cout<<str;
}
