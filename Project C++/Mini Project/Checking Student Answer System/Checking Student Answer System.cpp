/*
    Program : Checking Student Answer System
*/ 

#include<iostream>
#include<fstream>
using namespace std;

void readFile(string filename, string& name, char answers[50], int& n){

ifstream fin;
fin.open(filename.c_str());

getline(fin,name);

int i = 0;

fin>>answers[i];
 n = 1;
while(!fin.eof()){
n++;
i++;
fin>>answers[i];

}

fin.close();
}

void compareAnswers(char a[50],char c[50],int& n, int q[20],char y[50],char z[50],int& s ){

s = 0;
for(int i = 0; i<n; i++){

if(a[i] != c[i]){
 
q[s] = i+1;          //number question wrong
y[s] = a[i];         //student answer
z[s] = c[i];         //correct answer
s++;
}

}

}

void printMissedQuestions(int ques[50],char astudent[50],char cans[50], int& s){

cout<<"List of the questions missed:"<<endl;
cout<<"Question Correct Answer Student Answer"<<endl;
cout<<"-------- -------------- -------------------"<<endl;
for(int i = 0; i<s; i++){

cout<<ques[i]<<"           "<<astudent[i]<<"                  "<<cans[i]<<endl;

}

}
int main(){

int ques[50];
int n,numw;
string ID,name,nothing;
char answer[50];
char correct[50];
char astudent[50];
char cans[50];

cout<<"Enter the student ID: (Example: ACS123): ";
cin>>ID;
readFile(ID, name, answer, n);

readFile("CorrectAnswers.txt",nothing,correct,n);
compareAnswers(answer, correct,n,ques,astudent,cans,numw);


cout<<endl;
cout<<"EXAM RESULT"<<endl;
cout<<"--------------"<<endl;
cout<<endl;
cout<<"Name      : "<<name<<endl;
cout<<"Student ID: "<<ID<<endl;

cout<<"Number of question missed: "<<numw<<endl;

printMissedQuestions(ques,astudent,cans, numw);

return 0;
}
