/*
    Program : Geometry Calculator
*/

#include<iostream>
using namespace std;

float circle(int);
int Rectangle(int, int);
float Triangle(int, int);

int main(){
	
	int program, base, length, width, AreaR, radius, height;
	float AreaC, AreaT;
	
		cout<<"1. Calculate the Area of a Circle"<<endl;	
		cout<<"2. Calculate the Area of a Rectangle"<<endl;	
		cout<<"3. Calculate the Area of a Triangle"<<endl;	
		cout<<"4. Quit"<<endl;
		
		cin>>program;
	
		if(program==1){
		
		cout<<"Enter the radius: ";
		cin>>radius;
		AreaC = circle(radius);
		cout<<"The Area of Triangle is : "<<AreaC<<endl;;
	
	}
	
	else if (program==2){
	
	cout<<"Enter the length: ";
     cin>>length;
	 cout<<"Enter the width: ";
	cin>>width;
	AreaR = Rectangle(length, width);
cout<<"The Area of Reactangle is : "<<AreaR<<endl;;
 
 }
else if(program==3)   {

     
	  cout<<"Enter the base: ";
     cin>>base;
	 cout<<"Enter the height: ";
	cin>>height;
	  AreaT = Triangle(base, height);
     cout<<"The Area of Triangle is : "<<AreaT<<endl;

}
	
else if (program==4){

}

else{
	
	cout<<endl;
	cout<<"Error!!!!"<<endl;
}
return 0;	
}

float circle(int r){
	
	float c, pi;
	pi = 3.14159;
	c = pi*r*r;

return c;
}

int Rectangle(int l, int w){

int r;
r = l*w;
return r;
}

float Triangle(int b,int h){

float t;
t = b*h*0.5;
return t;
}



