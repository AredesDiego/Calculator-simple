#include <iostream>
#include <conio.h>
using namespace std;
int sum (int , int );
int subtract (int ,int );
int multiply (int , int );
int division (int , int );
int resta (int , int );

int main (){

system ("Title Calculator");
int a,b,x;
string f;

do {
system ("cls");
cout << "CHOISE YOUR DESTINY :"<< endl<< "1-SUM"<<endl<<"2-SUBTRACT"<<endl<<"3-MULTIPLY"<<endl<<"4-DIVISION"<<endl<<endl;
cout << "THE NUMBER OF YOUR CHOISE : " ;
cin >> x;
cout << "PUT YOUR FIRST NUMBER : ";

switch(x){
case 1:
	system ("Title SUM");
	cin >>a;
	cout << "YOUR SECOND NUMBER : ";
	cin >> b;cout <<endl;
	cout << "THE ANSWER IS : "<< sum (a,b)<<endl<<endl;
	break;
	
case 2:
	system ("Title SUBTRACT");
	cin >>a;
	cout << "YOUR SECOND NUMBER : ";
	cin >> b;cout <<endl;
	cout << "THE ANSWER IS : "<<subtract (a,b)<<endl<<endl;
	break;
	
case 3:
	system ("Title MULTIPLY");
	cin >> a;
	cout << "YOUR SECOND NUMBER : ";
	cin >>b;cout <<endl;
	cout << "THE ANSWER IS : "<<multiply (a,b)<<endl<<endl;
	break;
	
case 4:
	system ("Title MULTIPLY");
	cin >>a;
	cout << "YOUR SECOND NUMBER : ";
	cin >> b;cout <<endl;
	cout << "THE ANSWER IS : "<<division (a,b)<< endl<<endl;
	break;
	
	}
	cout << "DO YOU WANT TO GO BACK TO THE START ?"<< endl << "IF YOU WANT TO USE THE CALCULATOR AGAIN  "; 
	cout<<"PRESS : Y"<<endl;
	cin >> f;
	}
while (f == "y"|| f== "Y");

}

int sum (int a, int b){
	return a + b;
}
int subtract (int a, int b){
	return a-b;
}
int multiply (int a, int b){
	return a*b;
}
int division (int a, int b){
	return a/b;
}
