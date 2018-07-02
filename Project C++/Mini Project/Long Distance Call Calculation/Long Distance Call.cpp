/*
    Program : Long Distance Call
*/ 

#include<iostream>
using namespace std;

int main(){
	
int minute;
float time, charge;

cout<<"Enter the Starter Time"<<endl;
cin>>time; 
cout<<"Enter the number of minute"<<endl;
cin>>minute;

if((time>=00.00)&&(time<=06.59)){
	
	charge = minute*0.12;
}
	else if((time>=07.00)&&(time<=19.00)){
	
	charge = minute*0.55;
	}
	else if((time>=19.01)&&(time<=23.59)){
	
	charge = minute*0.35;
	}
	
	cout<<"The Charge is:RM "<<charge<<endl;
	return 0;
}
