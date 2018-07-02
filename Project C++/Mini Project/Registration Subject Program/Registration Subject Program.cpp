/*
    Program : Registration Subject Program
*/ 

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

void Compare(string code[10], string sc[1000], string sn[1000], int n, string subn[10], int z){


for( int i= 0; i<n;i++){
for( int j= 0; j<z;j++){


if (code[i] == sc[j])
  subn[i] = sn[j];

}
}

}

void Display(char name[81],char id[81] ,string code[10],string subname[10],int n,string credit[10]){

int value[100];
int sum = 0;
ofstream fout;
int j = 1;
fout.open(id);
fout<<"NAME: "<<name<<"         "<<"ID: "<<id<<endl;
fout<<endl;

fout<<"NO "<<"     "<<"Subject Code"<<"          "<<"Credit Hour"<<"              "<<"Subject Name"<<endl;
for(int i = 0; i<n;i++){
fout<<j<<"         "<<code[i]<<"                 "<<credit[i]<<"                "<<subname[i]<<endl;
j++;

 value[i] = atoi(credit[i].c_str());
sum = sum + value[i];
}
fout<<endl;
fout<<"Total Credit Hour: "<<sum<<endl;
}


void ObtainL(string code [10],int n, string credit[10]){

for(int i=0;i<n;i++){

 credit[i] = code[i].substr (7,1);

}
}



int main(){

string credit[10];
char sc[81];
string subn[10];
string numbers [1000];
string subname;
char Maklumat[81];
string subject[1000];
string code[10];
int s,n,z,y;
char id[81];

n = 0;
y = 0;
z = 0;
cout<<"Enter the Name: "<<endl;
cin.getline(Maklumat,81);
cout<<endl;
cout<<"Enter The ID: "<<endl;
cin>>id;

cout<<endl;
cout<<"How many subject you want: "<<endl;
cin>>s;
cout<<endl;
cout<<"Enter the Subject Code: "<<endl;
for(int i = 0 ;i<s; i++){

cin>>code[i];


n++;
}

ifstream fin;
fin.open("subjects.txt");
fin.ignore(1000, '\n');
while(fin>>subject[z]){
getline(fin,subname);
numbers[y] = subname;

y++;
z++;
}

Compare( code,  subject,  numbers,  n, subn,z);
 
 ObtainL(code , n,  credit);
 Display( Maklumat, id , code, subn,n,credit);
fin.close();
return 0;
}
