#include <iostream>
#include <conio.h>
using namespace std;

int sum (int , int );
int subtract (int ,int );
int multiply (int , int );
int division (int , int );

int main (){
// name of the calculator
system ("Title Calculator");
//declare variables

int num1,num2,choise;
string answer;

//declare your choise
do {
	system ("cls");
	cout << "CHOISE YOUR DESTINY :"<< endl<< "1-SUM"<<endl<<"2-SUBTRACT"<<endl<<"3-MULTIPLY"<<endl<<"4-DIVISION"<<endl<<endl;
	cout << "THE NUMBER OF YOUR CHOISE : " ;
	cin >> choise;

// your choise
switch(choise){
case 1:
	do{
	system ("Title SUM");
	system ("cls");
	cout << "PUT YOUR FIRST NUMBER : " ;
	cin >>num1;
	cout << "YOUR SECOND NUMBER : ";
	cin >> num2;
	cout << endl<<"THE ANSWER IS : "<< sum (num1,num2)<<endl<<endl; 
	//this is to repeat
	cout << "DO YOU WANNA CONTINUE WITH THE SUM? IF THAT IS RIGHT PRESS Y"<<endl;
	cin >> answer;
	}while (answer=="Y"|| answer =="y");
	break;
	
case 2:
	do{
	system ("Title SUBTRACT");
	system ("cls");
	cout << "PUT YOUR FIRST NUMBER : " ;
	cin >>num1;
	cout << "YOUR SECOND NUMBER : ";
	cin >> num2;
	cout << endl<<"THE ANSWER IS : "<<subtract (num1,num2)<<endl<<endl;
	//this is to repeat
	cout << "DO YOU WANNA CONTINUE WITH THE SUBTRACT? IF THAT IS RIGHT PRESS Y"<<endl;
	cin >> answer;
		}while (answer=="Y"|| answer =="y");
	break;
	
case 3:
	do{
	system ("Title MULTIPLY");
	system ("cls");
	cout << "PUT YOUR FIRST NUMBER : " ;
	cin >> num1;
	cout << "YOUR SECOND NUMBER : ";
	cin >>num2;cout <<endl;
	cout << "THE ANSWER IS : "<<multiply (num1,num2)<<endl<<endl;
	//this is to repeat
	cout << "DO YOU WANNA CONTINUE WITH THE MULTIPLY? IF THAT IS RIGHT PRESS Y"<<endl;
	cin >> answer;
		}while (answer=="Y" || answer =="y");
	break;
	
case 4:
	do{
	system ("Title DIVISION");
	system ("cls");
	cout << "PUT YOUR FIRST NUMBER : " ;
	cin >>num1;
	cout << "YOUR SECOND NUMBER : ";
	cin >> num2;cout <<endl;
	cout << "THE ANSWER IS : "<<division (num1,num2)<< endl<<endl;
	//this is to repeat
	cout << "DO YOU WANNA CONTINUE WITH THE DIVISION? IF THAT IS RIGHT PRESS Y"<<endl;
	cin >> answer;
		}while (answer=="Y" || answer =="y");
	break;
	
	}
	//this is to go back to the start
	system ("cls");
	cout << "DO YOU WANT TO GO BACK TO THE START ?"<< endl; 
	cout<<"PRESS : Y"<<endl;
	cin >> answer;
	}
while (answer == "y"|| answer== "Y");

}

int sum (int num1, int num2){
	return num1 + num2;
}
int subtract (int num1, int num2){
	return num1-num2;
}
int multiply (int num1, int num2){
	return num1*num2;
}
int division (int num1, int num2){
	return num1/num2;
}
