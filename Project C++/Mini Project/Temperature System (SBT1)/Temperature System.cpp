#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<cstdlib>
#include<fstream>
#define SIZE 50
using namespace std;

float FindMAX (float *p){                 //Function FindMax

float max = *(p + 0);

for (int i = 1; i<40; i++){

if(max <= *(p + i))
max = *(p + i);


}

return max;
}

float FindMIN(float *p){              //Function FindMin

float min = *(p + 0);

for (int i = 1; i<40; i++){

if(min >= *(p + i))
min = *(p + i);




}

return min;
}


float FindAverage(float *p){              //Function FindAverage

float mean = 0;
float total = 0;

for(int i = 0; i<40; i++){

total = total + *(p + i);


}


mean = total/40;


return mean;
}

float FindStdVar(float *p, float mean){           //Function FindStdVar

float TotalSquared = 0;
float StdVariation = 0;

for(int i = 0; i<40;i++){

TotalSquared += pow((*(p+ i) - mean), 2);

}

StdVariation = sqrt(TotalSquared/40);

return StdVariation;
}


int main(){                //Main

ifstream fin;
ofstream fout;
float maximum = 0;
float minimum = 0;
float mean = 0;
float standard = 0;

fin.open("Inputfile.txt");        //Open File Inputfile.txt



float temperature[SIZE];

int i = 0;
while(!fin.eof()){
fin>>temperature[i];
i++;



}



maximum = FindMAX(temperature);         //Function to find MAX
minimum = FindMIN(temperature);        //Function to find MIN
mean = FindAverage(temperature);      //Function to find Mean
standard = FindStdVar(temperature,mean);  //Function to find standard Variation

fout.open("Outfile.txt");       //Open Outfile.txt File

fout<<"The Maximum Temperature: "<<maximum <<endl;      //Maximum Tempreture
fout<<"The Minimum Temperature: "<<minimum <<endl;      //Minimum Temperature
fout<<"The Mean: "<<mean <<endl;                          //Mean
fout<<"The Standard Variation: "<<standard <<endl;         //Standard Variation

fin.close();
fout.close();
return 0;
}







