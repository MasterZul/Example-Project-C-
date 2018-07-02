/*
    Program : Toll Price System
*/

#include<iostream>
using namespace std;

int main (){
	
	int hour;
	float kilo, RM;
	
	cout<<"Enter amout of hour: "<<endl;
	cin>>hour;
	
	cout<<"Enter amout of kilometer: "<<endl;
	cin>>kilo;
	
	
	if ((hour>=8) && (hour<=9) || (hour>=4)&&(hour<=5)){

 RM = kilo * 4;
 

	}
	
	else{
		
		RM = kilo * 3;
		
		
	}
	
	cout<<"Toll Price: "<<RM<<endl;
	
		return 0;
		
	
	
	
	
}
