/*
    Program : Student Grade Calculation System
*/ 


#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

void readFile(string filename, string id[],float score [][5], int& n, int& itemCount){
	
	itemCount = 2;
	ifstream fin;
	fin.open(filename.c_str());
	
	 n = 0;
	 int j= 0;
	while(!fin.eof()){
	fin>>id[j];
	cout<<id[j]<<endl;
	  
	  for(int i = 0;i<itemCount; i++){
	  fin>>score[j][i];
	  }
	j++;
    n++;
if(fin.eof()) break;
}

fin.close();
}

void sumArray(float list[][5],int n,float sum[5]){            //Markah Setiap Student   (1)


for(int j= 0; j<n; j++){
       for(int i= 0; i<n; i++){
        sum[j] = sum[j] + list[j][i];
       }
cout<<"SUM: "<<sum[j]<<endl;
}
}

float AllScore(float all [5],int n){          //markah gabung item1 dan item2  (2)

float result = 0;
for(int i= 0; i<n; i++){

result = result + all[i];
}
return result;
}

float SumItem(float list [][5],int n,int z){          //markah untuk semua item1 dan item2   (3)

float sum = 0;
for(int j= 0; j<n; j++){
 
sum = sum + list[j][z];
}
return sum;
}

string getGrade(float a)            //Untuk cari grade
{
	if(90 <= a) return "A+";
	if(80 <= a) return "A";
	if(75 <= a)	return "A-";
	if(70 <= a) return "B+";
	if(65 <= a) return "B";
	if(60 <= a) return "B-";
	if(55 <= a) return "C+";
	if(50 <= a) return "C";
	if(45 <= a) return "C-";
	if(40 <= a) return "D+";
	if(35 <= a) return "D";
	if(30 <= a) return "D-";	
	return "E";
}

 void getItem(float list [][5],int n,int z,float item[5]){
 
 float sum = 0;
for(int j= 0; j<n; j++){
 
item[j] = list[j][z];
 
 }
}

float Average(float item,int n){

return item/n;
}

float Percentage(float score,int n,int z){

float p = score/(n*z)*100;
return p;
}

void Display(int n,string name[5],float item1[5],float item2[5], float PerStudent[5], string grade[5],float Allitem1,float Allitem2,float TotalScore,float Avrg1,float Avrg2,float AvrgAll, float Per1,float Per2,float PerAll,string GradeAll){

ofstream fout;
fout.open("Result.txt");


fout<<"ID Student"<<setw(15)<<"ITEM 1"<<setw(10)<<"ITEM2"<<setw(15)<<"PERCENTAGE"<<setw(10)<<"GRADE"<<endl;
fout<<endl;
for(int i = 0; i<n; i++){
fout<<name[i]<<setw(13)<<item1[i]<<setw(12)<<item2[i]<<setw(12)<<PerStudent[i]<<setw(11)<<grade[i]<<endl;
}
fout<<endl;
fout<<"TOTALSCORE"<<setw(12)<<Allitem1<<setw(13)<<Allitem2<<setw(12)<<TotalScore<<setw(17)<<"GRADE ALL"<<endl; 

fout<<endl;
fout<<"AVERAGE"<<setprecision(3)<<Avrg1<<endl;
fout<<"PERCENTAGE"<<Per1<<endl;

fout<<endl;
cout<<"BODOH  "<<Avrg2;
fout.close();
}


int main(){
	
string name[5], grade[5],GradeAll ;
float score[5][5], totals[5], TotalScore = 0,Allitem1,Allitem2,item1[5],item2 [5],Avrg1,Avrg2,AvrgAll, PerStudent[5]  ;
float Per1,Per2, PerAll;
int n, z,count;

z = 1;
readFile("input.txt",name,score,n,count);

	
	
	cout<<n<<endl;	
for(int j=0; j<n; j++){
cout<<endl;
cout<<"The ID: "<<name[j]<<endl;
 z = 1;
  for(int i=0; i<count; i++){

cout<<"The Score ["<<z<<"] = "<<score[j][i]<<endl;
z++;
}
}	

cout<<endl;
sumArray(score, n, totals);	          //markah setiap student (1)
TotalScore = AllScore(totals, n);   // markah semua student   (2)
cout<<endl;
cout<<"TOTAL: "<<TotalScore<<endl;

cout<<endl;

Allitem1 = SumItem(score,n,0);         //markah semua item1  (3)
cout<<"ALL ITEM1: "<<Allitem1<<endl;
getItem(score,n,0,item1); 
for(int i =0; i<n;i++){
cout<<"ITEM1: "<<item1[i]<<endl;
}

cout<<endl;
Allitem2 = SumItem(score,n,1);        //markah semua item2  (3)
cout<<"ALL ITEM2: "<<Allitem2<<endl;
 getItem(score,n,1,item2); 
for(int i =0; i<n;i++){
cout<<"ITEM2: "<<item2[i]<<endl;
}

cout<<endl;
for(int a = 0; a<n; a++){

grade[a] = getGrade(totals[a]);
cout<<"Grade: "<<grade[a]<<endl;
}
cout<<endl;
Avrg1 = Average( Allitem1, n);
cout<<"Average item1: "<<Avrg1<<endl;

Avrg2 = Average(Allitem2, n);
cout<<"Average item2: "<<Avrg2<<endl;

AvrgAll = Average(TotalScore, n);
cout<<"Average All: "<<AvrgAll<<endl;


 cout<<endl;

for(int i =0; i<n;i++){

PerStudent[i] = Percentage(totals[i], 2, 50);
cout<<"PERCENTAGE: "<<PerStudent[i]<<endl;
}
cout<<endl;
Per1 = Percentage(Allitem1, n, 50);
cout<<"Percentage Item2: "<<Per1<<endl;

Per2 = Percentage(Allitem2, n, 50);
cout<<"Percentage Item2: "<<Per2<<endl;

PerAll = Percentage(TotalScore, n, 100);
cout<<"Percentage All: "<<PerAll <<endl;

cout<<endl;
GradeAll = getGrade(PerAll);
cout<<"GRADE ALL: "<<GradeAll <<endl;

Display( n, name, item1, item2,  PerStudent,  grade, Allitem1, Allitem2, TotalScore, Avrg1, Avrg2, AvrgAll,  Per1, Per2, PerAll, GradeAll);



}
