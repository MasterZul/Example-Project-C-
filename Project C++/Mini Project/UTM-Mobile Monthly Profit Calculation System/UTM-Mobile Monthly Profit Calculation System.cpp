/*
    Program : UTM-Mobile Monthly Profit Calculation System
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
#define M 50

using namespace std;

float generateOverdue (int n, string name[M],int an[M],float c[M],float p[M]){


float overdue;
for(int i = 0; i<n; i++){



overdue = overdue + p[i] - c[i];

}

//fout<<overdue;

return overdue;
}

void summaryProfit(int num,float overdue,float charges[M],float payment[M]){
	
ofstream fout;
float totalp, totalc;

for(int i = 0; i<num; i++){

totalp = totalp + payment[i];
totalc = totalc + charges[i];


}

cout<<"UTM-Mobile MONTHLY PROFIT"<<endl;
cout<<"Number of customer: "<<num<<endl;
cout<<"Total Charges (RM): "<<totalc<<endl;
cout<<"Total Paid (RM): "<<totalp<<endl;
cout<<"Total Overdue (RM): "<<overdue<<endl;


fout.open("overdue.txt");

fout<<"UTM-Mobile MONTHLY PROFIT"<<endl;
fout<<"Number of customer: "<<num<<endl;
fout<<"Total Charges (RM): "<<totalc<<endl;
fout<<"Total Paid (RM): "<<totalp<<endl;
fout<<"Total Overdue (RM): "<<overdue<<endl;

fout.close();

}


int main(){


float totalover;
int number;
string name[M];
int account[M];
float charges[M];
float payment[M];

cout<<"---UTM-Mobile MONTHLY PROFIT CALCULATION SYSTEM---"<<endl<<endl;
cout<<"Enter number of customer: ";
cout<<endl;
cin>>number;

for(int i =0; i<number; i++){

cout<<"Customer#"<<i+1<<endl;
cout<<"Name: ";
cin>>name[i];
cout<<"Account number: ";
cin>>account[i];
cout<<"To-datecharges (RM): ";
cin>>charges[i];
cout<<"To-date payment (RM): ";
cin>>payment[i];
cout<<endl;
}

totalover = generateOverdue(number, name, account, charges, payment);
summaryProfit(number, totalover, charges, payment);


}

