#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cstring>

#define SIZEP 50

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////              Class Customer           ///////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Customer{

private:
	string name;
	string address;
	string HP;
	
	
public:

Customer(string name, string address, string HP){                         //1st Constructor

this->name = name;
this->address = address;
this->HP = HP;

}

string getName(){                                     //getName Function

return name;
}

string getAddress(){                                           //getAddress Function

return address;
}

string getHP(){                                            //getHP Function

return HP;
}

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////              Class Order            ///////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Order{

protected:
	string CompanyName;                          //Variable of Pizza Company Name
	string Timebuy;                             //Variable of Time when Customer Buy Pizza
	int hour, minute;                          //Variable for Hour and Minutes
	
public:
	
Order(){           //Default Construtor

this->CompanyName = "";
this->Timebuy = "";
}
	
Order(string CompanyName){   // 1st Constructor

this->CompanyName = CompanyName;
}

Order(string CompanyName, string Timebuy){   // 2nd Constructor

this->CompanyName = CompanyName;
this->Timebuy = Timebuy;

string h = Timebuy.substr(0,2);
string m =  Timebuy.substr(3,4);

hour = atoi(h.c_str());
minute = atoi(m.c_str());
 
}

void SelectCompany()        //SelectCompany Function

{
	if(CompanyName == "Domino"){
	
	cout<<"I Choose Domino Yeahhhhhh!!!!!!"<<endl;
	}
   
   else if(CompanyName == "Pizza Hut")

cout<<"I Choose Pizza Hut"<<endl;
}
	
void setCompanyName(string CompanyName){        //setCompanyName Function

this->CompanyName = CompanyName;
}

string getCompanyName(){    //getCompanyName Function

return CompanyName;
}

string getTimebuy(){      //getTimebuy Function

return Timebuy;
}

int getHour(){           //getHour Function

return hour;
}

int getMinute(){        //getMinute Function

return minute;
}


};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////              Class Menu             /////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Menu{

protected:
string pCrust[50], pSpecial[50], pSize[50];
int pAmount[50];
float pPrice[50];
float Overall;
int time ;

	string CompanyName;                                         //Variavle of Pizza Company Name
 int hour, minute;                                                // Variable of Hour and Minute
	Order *pesanan;                                            //Aggeration with Order Class
    Customer *id;

string pizzac, pizzas;
string size;
int amount;

public:

Menu(){

this->CompanyName = "";
this->hour = 0;
this->minute = 0;
}

Menu(Order *O){     //1st Constructor

pesanan = O;       //data transfer from Menu to Order
this->CompanyName = pesanan->getCompanyName();
this->hour = pesanan->getHour();
this->minute = pesanan->getMinute();

}

Menu(int hour, int minute){                                //2nd Constructor

this->hour = pesanan->getHour();
this->minute = pesanan->getMinute();

}

void transferData(Customer *I){

id = I;

}

void PrintData(){                          //PrintData Function

cout<<"Thanks U For Giv Us Money Huehuehue"<<endl;
cout<<endl;
cout<<" Name    : "<<id->getName()<<endl;
cout<<" Address : "<<id->getAddress()<<endl;
cout<<" HP      : "<<id->getHP()<<endl;
cout<<endl;
}

void DisplayMenu(){                                                      //DisplayMenu Function

if(CompanyName == "Domino" || CompanyName =="domino"){

cout<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"                      Domino Menu                       "<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"                      Pricing                           "<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"Our Unique Pizza Crust"<<"|  Small   |  Medium  |   Large  |"<<endl;
cout<<"----------------------"<<"|----------|----------|----------|"<<endl;
cout<<"1. Classic Hand Tossed"<<"| RM:11.80 | RM:25.80 | RM:35.80 |"<<endl;
cout<<"2. Crunchy Thin Crust "<<"| RM:11.80 | RM:25.80 | RM:35.80 |"<<endl;
cout<<"3. New York Crust     "<<"| RM:11.80 | RM:25.80 | RM:35.80 |"<<endl;
cout<<"4. Cheese Burst       "<<"| RM:14.80 | RM:30.80 | RM:42.80 |"<<endl;
cout<<"   Double Decker      "<<"|          |          |          |"<<endl;
cout<<"5. Extreme Edge       "<<"| RM:14.80 | RM:30.80 | RM:42.80 |"<<endl;
cout<<"6. Cheesy Pan Crust   "<<"| RM:14.80 | RM:30.80 | RM:42.80 |"<<endl;
cout<<"--------------------------------------------------------"<<endl;

cout<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"Our Delicious Speciality Pizzas"<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<endl;
cout<<"1. Sambal Vegie"<<endl;
cout<<"2. Tropical Sambal Prawn"<<endl;
cout<<"3. Beef Pepperoni"<<endl;
cout<<"4. Chicken Pepperoni"<<endl;
cout<<"5. Smokin' BBQ Chicken"<<endl;
cout<<endl;

}
else if(CompanyName == "Pizza Hut" || CompanyName =="pizza hut"){

cout<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"                      Pizza Hut Menu                       "<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"                      Pricing                           "<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"Our Unique Pizza Crust"<<"|  Small   |  Medium  |   Large  |"<<endl;
cout<<"----------------------"<<"|----------|----------|----------|"<<endl;
cout<<"1. Pan Pizza          "<<"| RM:12.60 | RM:26.30 | RM:36.90 |"<<endl;
cout<<"2. Hand Stretched     "<<"| RM:12.60 | RM:26.30 | RM:36.90 |"<<endl;
cout<<"3. Stuffed Crust      "<<"| RM:15.80 | RM:32.20 | RM:42.80 |"<<endl;
cout<<"--------------------------------------------------------"<<endl;

cout<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<" Pizza Hut Variety "<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<endl;
cout<<"1. Hawaiian Supreme"<<endl;
cout<<"2. Pesto Chicken"<<endl;
cout<<"3. Super Supreme"<<endl;
cout<<"4. Chicken Supreme"<<endl;
cout<<"5. Ultimate Hawaiian"<<endl;

}
}

void setHour(int h){                          //setHour Function

time = 0;
hour = h;
}
void setMinute(int m){                        //setMinute Function

minute = m;
}

void setCompanyName(string CompanyName){        //setCompanyName Function

this->CompanyName = CompanyName;
}

void setPizzaCrust(string pizzac, int x){           //setPizzaCrustFunction

this->pizzac = pizzac;
pCrust[x] = pizzac;
}

void setSpecialityPizza(string pizzas, int x){           //setSpecialityPizza Function

this->pizzas= pizzas;
pSpecial[x] = pizzas;
}

void setSize(string size, int x){           //setSize Function

this->size = size;
pSize[x] = size;
}

void setAmount(int amount, int x){           //setAmount Function

this->amount = amount;
pAmount[x] = amount;
}

void getTime(){                    //getTime Function

time  = time + minute;

do{
if (time >= 60){

time = time - 60;
hour = hour + 1;
}

else{

}

if(hour >= 24){

hour = hour - 24;

}

}while( time >= 60);
}

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                    
									  									  									  
/////////////////////////////////////////////////		ClassDomino     //////////////////////////////////////////////////////////////////////
                                 
								                                                                                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ClassDomino:public  Menu{

public:

virtual void CalculatePizza(int i){                                                //CalculatePizza Function


if(pCrust[i] == "Classic Hand Tossed" || pCrust[i] == "New York Crust" || pCrust[i] == "Crunchy Thin Crust"){


if(pSize[i] == "Small" || pSize[i] == "small"){

time = time + 3;
pPrice[i] = 11.80;

}
else if(pSize[i] == "Medium" || pSize[i] == "medium"){

time = time + 4;
pPrice[i] = 25.80;
}
else if(pSize[i] == "Large" || pSize[i] == "large"){

time = time + 5;
pPrice[i] = 35.80;
}
 time = time *pAmount[i];
pPrice[i] = pPrice[i] * pAmount[i];
}


if(pCrust[i] == "Cheese Burst Double Decker" || pCrust[i] == "Extreme Edge" || pCrust[i] == "Cheesy Pan Crust"){


if(pSize[i] == "Small" || pSize[i] == "small"){

time = time + 4;
pPrice[i] = 11.80;
}
else if(pSize[i] == "Medium" || pSize[i] == "medium"){

time = time + 5;
pPrice[i] = 30.80;
}
else if(pSize[i] == "Large" || pSize[i] == "large"){

time = time +6;
pPrice[i] = 42.80;
}
time = time *pAmount[i];
pPrice[i] = pPrice[i] * pAmount[i];

}


}

void DisplayOrder(int count){                                           //DisplayOrder Function

cout<<endl;
cout<<"=========================================================="<<endl;
for(int i = 0; i<count; i++){

cout<<showpoint<<fixed;
cout<<"The Pizza Topping:  "<<pCrust[i]<<endl;
cout<<"The Pizza Special:  "<<pSpecial[i]<<endl;
cout<<"The Pizza Size   :  "<<pSize[i]<<endl;
cout<<"The Pizza Amount :  "<<pAmount[i]<<endl;
cout<<"The Pizza Price  :RM"<<setprecision(2)<<pPrice[i]<<endl;


cout<<endl;
}

for(int i = 0; i<count; i++){
Overall = Overall + pPrice[i];
}
cout<<"----------------------------------------------------------"<<endl;
cout<<"The OverAll: RM"<<setprecision(2)<<Overall<<endl;
cout<<"Estimate Time For Pizza To Come : "<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<time<<endl;
cout<<"=========================================================="<<endl;

}


};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////           THIS PIZZAHUT CLASS             /////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ClassPizzaHut:public Menu{

public:



virtual void CalculatePizza(int i){                                    //CalculatePizza Function


if(pCrust[i] == "Pan Pizza"){


if(pSize[i] == "Small" || pSize[i] == "small"){

time = time + 3;
pPrice[i] = 12.60;
}
else if(pSize[i] == "Medium" || pSize[i] == "medium"){

time = time + 4;
pPrice[i] = 26.30;
}
else if(pSize[i] == "Large" || pSize[i] == "large"){

time = time + 5;
pPrice[i] = 36.90;
}

time = time *pAmount[i];
pPrice[i] = pPrice[i] * pAmount[i];
}


if(pCrust[i] == "Hand Stretched"){


if(pSize[i] == "Small" || pSize[i] == "small"){

time = time + 4;
pPrice[i] = 12.60;
}
else if(pSize[i] == "Medium" || pSize[i] == "medium"){

time = time + 5;
pPrice[i] = 26.30;
}
else if(pSize[i] == "Large" || pSize[i] == "large"){

time = time + 6;
pPrice[i] = 36.90;
}

time = time *pAmount[i];
pPrice[i] = pPrice[i] * pAmount[i];
}

if(pCrust[i] == "Stuffed Crust"){


if(pSize[i] == "Small" || pSize[i] == "small"){

time = time + 5;
pPrice[i] = 15.20;
}
else if(pSize[i] == "Medium" || pSize[i] == "medium"){

time = time + 6;
pPrice[i] = 32.20;
}
else if(pSize[i] == "Large" || pSize[i] == "large"){

time = time + 7;
pPrice[i] = 42.30;
}

time = time *pAmount[i];
pPrice[i] = pPrice[i] * pAmount[i];
}


}

void DisplayOrderPizza(int count){                                              //DisplayOrderPizza Function

cout<<endl;
cout<<"=========================================================="<<endl;
for(int i = 0; i<count; i++){

cout<<showpoint<<fixed;
cout<<"The Pizza Topping:  "<<pCrust[i]<<endl;
cout<<"The Pizza Supreme:  "<<pSpecial[i]<<endl;
cout<<"The Pizza Size   :  "<<pSize[i]<<endl;
cout<<"The Pizza Amount :  "<<pAmount[i]<<endl;
cout<<"The Pizza Price  :RM"<<setprecision(2)<<pPrice[i]<<endl;

cout<<endl;
}

for(int i = 0; i<count; i++){
Overall = Overall + pPrice[i];
}
cout<<"----------------------------------------------------------"<<endl;
cout<<"The OverAll: RM"<<setprecision(2)<<Overall<<endl;
cout<<"Estimate Time For Pizza To Come : "<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<time<<endl;
cout<<"=========================================================="<<endl;
}


};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////           THIS IS MAIN                  /////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

string company;    //variable for Pizza Company Name
string timebuy;    //variable for Time We Buy Pizza

string pizzacrust, specialitypizza;     //variable for Pizza Crust  /*and*/   //variable Speciality Pizza
                                        
string s;                                 //variable Size for Pizza

int amount, h, m, n = 0 ;              //amount = variable for amount of pizza, 
                                       //h = variable for hours 
						               //m = variable for minutes 
									   // n = variable to count if have error in line 304
       
string namee, alamat, telefon;	                   
int decide;
int  count;                           //variable for how many pizza that order

cout<<"================================================================================"<<endl;
cout<<"                    Welcome to UTM Pizza Order Service                          "<<endl;
cout<<"================================================================================"<<endl;
cout<<endl;
cout<<"########## Please Choose which pizza company that you prefer ###########"<<endl;
cout<<endl;

cout<<"(Domino or Pizza Hut?) => ";
getline(cin, company);

do{

if (n > 0){

cout<<endl;
cout<<"Your Enter Wrong Please Re-Enter Back"<<endl;
cout<<"(Domino or Pizza Hut?) => ";
getline(cin, company);
}
n++;
}while(company != "Domino" && company !="domino" && company != "Pizza Hut" && company != "pizza hut");


cout<<endl;
cout<<"Enter Your Name => ";
getline(cin,namee);
cout<<endl;


cout<<"Enter Your Address => ";
getline(cin,alamat);
cout<<endl;

cout<<"Enter Your Hand Phone Number => ";
getline(cin,telefon);
cout<<endl;

Customer *C = new Customer(namee,alamat,telefon);



cout<<endl;
cout<<"Correct!!"<<endl;
cout<<"Now Choose What Timing You Buy Using 24 Hour Format Form"<<endl;
cout<<"(Example 12:30 or 01:09) => ";
cin>>timebuy;

Order *A = new Order(company, timebuy);

cout<<endl;
A->SelectCompany();
cout<<endl;
Menu obj(A);
obj.transferData(C);

cout<<endl;


h = A->getHour();
m = A->getMinute();





if(company =="Domino" || company == "domino"){                             //This Is for Domino if user chooose it

ClassDomino subj;
subj.setHour(h);
subj.setMinute(m);

subj.setCompanyName(company);


int  i = 0;
count = 0;



do{

cout<<endl;
cout<<endl;
cout<<"================================================================================"<<endl;
subj.DisplayMenu();
cout<<"================================================================================"<<endl;

cout<<endl;
cout<<"Now Please Choose Pizza Crust and Speciality Pizza,"<<endl; 
cout<<endl;




cout<<"Your Pizza Crust => ";
cin.ignore();
getline(cin,pizzacrust);

n=0;
do{  //condition to test if it is correct (pizza crust)

if (n > 0){

cout<<endl;
cout<<"Your Enter is Wrong Please Re-Enter Back"<<endl;
cout<<"Your Pizza Crust => ";
getline(cin, pizzacrust);
}
n++;
}while(pizzacrust != "Classic Hand Tossed" && pizzacrust !="Crunchy Thin Crust" && pizzacrust != "New York Crust" && pizzacrust != "Cheese Burst Double Decker" 
		&& pizzacrust != "Extreme Edge" && pizzacrust != "Cheesy Pan Crust");

subj.setPizzaCrust(pizzacrust,i);


cout<<endl;
cout<<"Your Speciality Pizza => ";
getline(cin,specialitypizza);

n=0;
do{  //condition to test if it is correct (pizza speciality)

if (n > 0){

cout<<endl;
cout<<"You Enter it Wrong. Please Enter again."<<endl;
cout<<"Your Speciality Pizza => ";
getline(cin, specialitypizza);
}
n++;
}while(specialitypizza != "Sambal Vegie" && specialitypizza !="Tropical Sambal Prawn" && specialitypizza != "Beef Pepperoni" && specialitypizza != "Chicken Pepperoni" 
		&& specialitypizza != "Smokin' BBQ Chicken" );

subj.setSpecialityPizza(specialitypizza,i);

cout<<endl;
cout<<"Size(Enter Small, Medium and Large  Only!!!)"<<endl; 
cout<<"Your Pizza Size => ";
getline(cin,s);      

n=0;
do{  //condition to test if it is correct (pizza size)

if (n > 0){

cout<<endl;
cout<<"You Enter it Wrong. Please Enter again."<<endl;
cout<<"Your Pizza Size => ";
getline(cin, s);
}
n++;
}while(s != "Small" && s !="small" && s != "Medium" && s != "medium" 
		&& s != "Large" && s != "large" );
     
subj.setSize(s,i);



cout<<endl;
cout<<"Enter the Quantity"<<endl;
cout<<"Your Pizza Quantity => ";
cin>>amount;
subj.setAmount(amount,i);
subj.CalculatePizza(i);

cout<<endl;
cout<<endl;
cout<<"Press 1 If Want to order More Pizza Or Press others to Stop Ordering => ";
cin>>decide;
cout<<endl;
cout<<endl;


count++;
i++;
}while( decide == 1);

obj.PrintData();
subj.getTime();
subj.DisplayOrder(count);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




}
else if(company =="Pizza Hut" || company == "pizza hut"){                           //This Is for PizzaHut if user chooose it

ClassPizzaHut subj;
subj.setHour(h);
subj.setMinute(m);

subj.setCompanyName(company);

int  i = 0;
count = 0;



do{

cout<<endl;
cout<<endl;
cout<<"================================================================================"<<endl;
subj.DisplayMenu();
cout<<"================================================================================"<<endl;

cout<<endl;
cout<<"Now Please Choose Pizza Crust and Speciality Pizza,"<<endl; 
cout<<endl;



cout<<"Your Pizza Crust => ";
cin.ignore();
getline(cin,pizzacrust);

n=0;
do{  //condition to test if it is correct (pizza crust)

if (n > 0){

cout<<endl;
cout<<"You Enter it Wrong. Please Enter again."<<endl;
cout<<"Your Pizza Crust => ";
getline(cin, pizzacrust);
}
n++;
}while(pizzacrust != "Pan Pizza" && pizzacrust !="Hand Stretched" && pizzacrust != "Stuffed Crust" );

subj.setPizzaCrust(pizzacrust,i);

cout<<endl;
cout<<"Your Speciality Pizza => ";
getline(cin,specialitypizza);

n=0;
do{  //condition to test if it is correct (pizza speciality)

if (n > 0){

cout<<endl;
cout<<"You Enter it Wrong. Please Enter again."<<endl;
cout<<"Your Speciality Pizza => ";
getline(cin, specialitypizza);
}
n++;
}while(specialitypizza != "Hawaiian Supreme" && specialitypizza !="Pesto Chicken" && specialitypizza != "Super Supreme" && specialitypizza != "Chicken Supreme" 
		&& specialitypizza != "Ultimate Hawaiian" );

subj.setSpecialityPizza(specialitypizza,i);

cout<<endl;
cout<<"Size(Enter Small, Medium and Large  Only!!!)"<<endl; 
cout<<"Your Pizza Size => ";
getline(cin,s);

n=0;
do{  //condition to test if it is correct (pizza size)

if (n > 0){

cout<<endl;
cout<<"You Enter it Wrong. Please Enter again."<<endl;
cout<<"Your Pizza Size => ";
getline(cin, s);
}
n++;
}while(s != "Small" && s !="small" && s != "Medium" && s != "medium" 
		&& s != "Large" && s != "large" );

subj.setSize(s,i);

cout<<endl;
cout<<"Enter the Quantity"<<endl;
cout<<"Your Pizza Quantity => ";
cin>>amount;
subj.setAmount(amount,i);

subj.CalculatePizza(i);

cout<<endl;
cout<<endl;
cout<<"Press 1 If Want to order More Pizza Or Press 2 to Stop Ordering => ";
cin>>decide;
cout<<endl;
cout<<endl;


count++;
i++;


}while( decide == 1);

obj.PrintData();
subj.getTime();
subj.DisplayOrderPizza(count);

}
return 0;
}
