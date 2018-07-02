/* 



   Project: Burger King UTM LEts GO 
   Date: 12/19/2015
    
	
	
	                                   */


#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

class nodeQ{                                   //class nodeQ
	
	public:
	string data;
	float price;
	nodeQ* next;
	
};




class Queue                                               //class Queue
{
	
	
private:
	  nodeQ *backPtr, *frontPtr, *newPtr;
	  float total = 0;
	  int num = 1;
	 
	  
	  
	 
public:
	  
	  Queue(){             //Default Constructor
	  	
	  	
	  }
	  
	  
	   ~Queue(){           //Destroyer
	  	
	  	
	  }
	  
	  bool isEmpty(){                   //isEmpty Function
	  	
	  	return bool
		  (backPtr == NULL && frontPtr == NULL);     
	  	
	  }
	  
	  void createQueue(){                           //creteQueue Function
	  
	  	nodeQ* newPtr = new nodeQ;
	  frontPtr = backPtr = newPtr;                    
	  newPtr->next = NULL;
	  }
	  
	  
	   void destroyQueue(){                           //destroyQueue Function
	  
	  	nodeQ* temp = frontPtr;
	     cout<<"Destroy Queue"<<endl;
		 while(temp){
		 
		 frontPtr = temp->next;
		 delete temp;
		 temp=frontPtr;
		 }                            
	  
	  }
	  
	  
	  
	  void enQueue(string x,float p){                     //enQueue Function
	  
	  
	  	if(num == 1){                                   
		  
	  nodeQ* newPtr = new nodeQ;
	  frontPtr = backPtr = newPtr;                    
	  newPtr->next = NULL;
	  newPtr->data = x;
	  newPtr->price = p;
	  total = total + p;
}
	else{
	
	  
	   nodeQ* newPtr = new nodeQ; 
	   newPtr->next = NULL;
	   newPtr->data = x;
	   newPtr->price = p;	
	   backPtr->next = newPtr;
	   backPtr = newPtr;
	    total = total + p;
}
num++;
}
	  
	  void deQueue(){                        //deQueue Function 
	  	
	  	if(isEmpty()){                                              
		  
		  cout<<"\n Cannot remove item. Empty Queue!";
		  }
	  	else{
		  
	  	nodeQ* tempPtr = new nodeQ;
	  	tempPtr = frontPtr;
	  	frontPtr = frontPtr->next;
	  	tempPtr->next = NULL;
	  	delete tempPtr;
	  	
	  	if(!frontPtr)
	  	backPtr = NULL;
	  }
	  }
	  
	  void displayList(){                                            //displayList Function 
	  
	  int num = 1;
	  
	  nodeQ* currPtr = frontPtr;
	  
	  cout<<endl;
	  
cout<<"========================================================"<<endl;
cout<<"                       Order receipt "<<endl;
cout<<"========================================================"<<endl;
	
	  cout<<endl;
cout<<setw(43)<<"      List Order"<<setw(28)<<"Prices"<<endl;
cout<<"--------------------------------------------------------"<<endl;	 
cout<<endl; 
	  while(currPtr != NULL ){
	  	
	  	cout<<num<<". "<<left<<setw(40)<<currPtr->data<<fixed<<setprecision(2)<<currPtr->price<<endl;
	  	currPtr = currPtr->next;
	  	num++;
	  }
cout<<"--------------------------------------------------------"<<endl;
cout<<"TOTAL                                      "<<total<<endl;
cout<<"--------------------------------------------------------"<<endl;
	  
}

string getFront(){                                            //getFront Function 
 	
 	return frontPtr->data;
 }

string getRear(){                                           //getRearFunction 
 	
 	return backPtr->data;
 }

int chooseMenu(string[],float[],int);

};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////           OTHER FUNCTION                /////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int chooseSets(){                                            //chooseSets Function
	
int i;	
	
cout<<endl;
cout<<"Choose if you want Alacarte or Set "<<endl;
cout<<"Choose 1 for Alacarte "<<endl;
cout<<"Choose 2 for Sets \n(get beverages and fries but pay extra RM1.60 or RM2.00 for Frozen Surge)"<<endl;      
cout<<"===> ";
cin>>i;
cout<<endl;	
return i;
}

int Queue :: chooseMenu(string menu[], float priMenu[],int nom){   // chooseMenu Function




cout<< setw(10) <<menu[0]<<setw(40)<<"Prices "<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<endl;
cout<<endl;
int i =1;	
do{
	

cout<<i<<". "<<left<<setw(40)<<menu[i]<<"RM "<<fixed<<setprecision(2)<<priMenu[i]<<endl;
i++;	

}while( i < nom);

cout<<endl;
cout<<"Please choose your "<<menu[0]<<": "<<endl;
cout<<"===> ";
cin>>i;

string c = menu[i];
float p = priMenu[i];

enQueue(c,p);
return i;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////           THIS IS MAIN                  /////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(){
	
Queue q;	
float z;	
int category, again;

string burgers [8] = {"Burgers","WHOPPER® Sandwich", "Extra Long Sriracha Cheeseburger", "WHOPPER JR.® Sandwich", "TRIPLE WHOPPER® Sandwich", "Big King™ Sandwich", "Cheeseburger","Rodeo Burger" };
float priBurgers [8] = {0,15.00,13.00,11.00,18.00,16.00,11.00,10.00};
	  
string chickens [9] =  {"Chickens","Original Chicken Sandwich", "TENDERCRISP® Chicken Sandwich", "TENDERGRILL® Chicken Sandwich", "Big Fish Sandwich", "Big Chicken Cheese TENDERCRISP®", "Crispy Chicken", "Spicy Crispy Chicken", "Rodeo Chicken Sandwich"};
float priChickens [9] = {0,12.00,15.00,13.00,12.00,16.00,11.00,11.00,10.00 };

string sides [6] =  {"Sides","Chicken Nuggets", "Onion Rings", "French Fries", "Hash Browns", "Garden Side Salad"};  
float priSides [6] = {0,3.50,1.50,1.50,3.50,2.00};		

string jimat [6] =  {"Jimat Values","Crispy Chicken Jr.", "Spicy Crispy Chicken Jr.", "Rodeo Chicken Sandwich Jr", "Cheeseburger Jr", "Rodeo Burger Jr,"};  
float priJimat[6] = {0,6.50,7.50,5.50,6.00,5.50};	
      
string beverages [6] =  {"Beverages","Frozen SURGE™", "Coca-Cola®", "Sprite®", "Iced Tea", "Dr Pepper®"};  
float priBeverages [6] = {0,2.50,1.60,1.60,2.00,1.60};
	
cout<<"================================================================================"<<endl;
cout<<"                    Welcome to Master Burger Order Service                          "<<endl;
cout<<"================================================================================"<<endl;
cout<<endl;
cout<<endl;




////////////////////////////////////////////////           CHOOSE CATEGORY                 /////////////////////////////////////////////////


do{
cout<<"Please Choose Category in our Menu"<<endl;
cout<<endl;
cout<<"1. Burgers "<<endl;
cout<<"2. Chickens "<<endl;
cout<<"3. Sides "<<endl;
cout<<"4. Jimat Value (Free Small Cola and Small Fries, All below RM 10.00)"<<endl;
cout<<"6. Cancel and Exit "<<endl;
cout<<"===> "; 
cin>>category;
cout<<endl;

int x = 1;

////////////////////////////////////////////////           CATEGORY = 1 Burgers                /////////////////////////////////////////////////


if(category == 1){

int i = 1;

i = q.chooseMenu(burgers,priBurgers,8);




i = chooseSets();

//////////////////////////////      Choose Beverages        //////////////////////////////////////
if(i == 2 ){

i = q.chooseMenu(beverages,priBeverages,6);

cout<<endl;
}

}

////////////////////////////////////////////////           CATEGORY = 2 Chickens               /////////////////////////////////////////////////

else if( category == 2 ){

int i = 1;

i = q.chooseMenu(chickens,priChickens,9);




i = chooseSets();

//////////////////////////////      Choose Beverages        //////////////////////////////////////
if(i == 2 ){

i = q.chooseMenu(beverages,priBeverages,6);

cout<<endl;
}

cout<<endl;
}

////////////////////////////////////////////////           CATEGORY = 3 Sides               /////////////////////////////////////////////////

else if(category == 3){
	
int i = 1;

i = q.chooseMenu(sides,priSides,6);




}

////////////////////////////////////////////////           CATEGORY = 4 Jimat Value              /////////////////////////////////////////////////

else if(category == 4){
	
int i = 1;

i = q.chooseMenu(jimat,priJimat,6);



}

else if(category == 6){
	
	
q.destroyQueue();
cout<<"All Your Order already be canceled"<<endl;
exit (EXIT_FAILURE);	
}

////////////////////////////////////////////////           CHOOSE TO ORDER AGAIN OR NOT (LOOP)                 /////////////////////////////////////////////////



cout<<endl;
cout<<"You Success Order!!!! "<<endl;
cout<<endl;
cout<<"Did you want add anything else: "<<endl;
cout<<"Press 1 to Add more Or \nPress anything else to Finish the Orders"<<endl;
cout<<"===> "; 
cin>>again;
cout<<endl;
cout<<endl;
}while (again == 1 );


////////////////////////////////////////////////           DISPLAY ALL ORDERS               ////////////////////////////////////////////////////////////////////
q.displayList();


/*
cout<< setw(10) <<burgers[0]<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<endl;
cout<<endl;
int i =1;	
do{
	

cout<<burgers[i]<<endl;
i++;	
}while( i < 5);

cout<<endl;
	
*/
	
	


//z = q.getRear();

//cout<<z<<endl;
//

}
