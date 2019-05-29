#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int x;
	string y;
	cout<<"please enter a number:"<<endl;
	cin>>x;
	if (x>=0 && x<50){
		y="failed";}
	else if(x>=50 && x<60){
		y="D";}
	else if(x>=60 && x<70){
		y="C";}
	else if(x>=70 && x<80){
		y="B";}
	else if(x>=80 && x<90){
		y="A";}
	else if(x>=90 && x<=100){
		y="A+";}
	else{
	 y="unknown";}
	cout<<y;	
	}	
