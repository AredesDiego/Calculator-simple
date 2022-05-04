#include <iostream>
using namespace std;
int sum (int , int );
int subtract (int ,int );
int multiply (int , int );
int division (int , int );
int resta (int , int );
int main (){
int a,b,x;
cout << "CHOISE YOUR DESTINY :"<< endl<< "1-SUM"<<endl<<"2-SUBTRACT"<<endl<<"3-MULTIPLY"<<endl<<"4-DIVISION"<<endl;
cin >> x;
cout << "PUT YOUR NUMBER : ";
switch(x){
case 1:
	cin >> a>>b;
	sum (a,b);
	cout << "THE ANSWER IS : "<< sum (a,b)<<endl;
	break;
case 2:
	cin >> a>>b;
	subtract(a,b);
	cout << "THE ANSWER IS : "<<subtract (a,b)<<endl;
	break;
case 3:
	cin >> a>>b;
	multiply (a,b);
	cout << "THE ANSWER IS : "<<multiply (a,b)<<endl;
	break;
case 4:
	cin >> a>>b;
	division (a,b);
	cout << "THE ANSWER IS : "<<division (a,b)<< endl;
	break;
	}
	system("PAUSE");
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