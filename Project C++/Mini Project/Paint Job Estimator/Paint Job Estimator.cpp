/*
    Program : Paint Job Estimator
*/ 

#include<iostream>
#include<iomanip>
using namespace std;

int NumberGallon(float);
float totalCost (int, float);
void DisplayOutput(int,int,float,float,float);
float AllCalculate (float , float );

int main(){
	
	int n = 0, Gallon = 0, room,  hour = 0, SumG = 0, SumH = 0;
	float paint, Paintcost = 0, Charge = 0, Total = 0, SumP = 0,SumT = 0, SumC = 0,sfow;
	
	cout<<"Enter number of rooms that are to be painted =>";
	cin>>room;
	
	cout<<endl;
	cout<<"the price of the paint per gallon =>";
    cin>>paint;
	
	
	
	
while(n<room){

cout<<endl;
cout<<"Enter the square feet of wall space of the room =>";
cin>>sfow;


Gallon= NumberGallon(sfow);
 SumG = SumG  + Gallon;
 
 hour = AllCalculate (Gallon, 8.00);
 SumH = SumH + hour;

 Paintcost= AllCalculate (paint, Gallon);
 SumP = SumP + Paintcost;

 Charge= AllCalculate (hour, 18.00);
 SumC = SumC + Charge;

 Total = totalCost(Charge, Paintcost);
 SumT = SumT + Total;

/*The number of gallons of paint required
* The hours of labor required
* The cost of the paint
* The labor charges
* The total cost of the paint job
	
every 115 square feet of wall space,
 one gallon of paint and 
 eight hours of labor will be required. 
 The company charges $18.00 per hour for labor*/

n = n + 1;

}
	
DisplayOutput(SumG,SumH,SumP,SumC,SumT);
	



	return 0;
}

float AllCalculate (float a, float b){

float Calculate;

Calculate = a*b;

return Calculate;
}


int NumberGallon(float square){

      int gallon;
	  
	  gallon = (square/115) + 0.999;
      
      return gallon;
  }
  
  

float totalCost (int c, float p){
	
	float result;
	
	result = c+p;
	return result;
}

void DisplayOutput(int G,int H,float P,float C,float T){
	
	
	cout<<showpoint<<fixed;
	cout<<endl;

	cout<<"The number of gallons of paint required:  "<<G<<endl;
	cout<<"The hours of labor required:  "<<H<<endl;
	cout<<setprecision(2)<<"The cost of the paint: RM "<<P<<endl;
	cout<<setprecision(2)<<"The labor charges "<<C<<endl;
	cout<<setprecision(2)<<"The total cost of the paint job: RM "<<T<<endl;
	
	
}












