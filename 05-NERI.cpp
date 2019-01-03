#include <iostream>
using namespace std;


int symbol(int a){
	for(int i=0; i<a; i++)
	{
		cout << "*";
	}
	cout << endl << endl;
}
int symbol(int a, int b){
	for(int i=0; i<b; i++)
	{
		cout << "@";
	}
	cout << endl << endl;
}
int symbol(int a, int b, int c){
	for(int i=0; i<c; i++)
	{
		cout << "*";
	}
	cout << endl << endl;
}
 int symbol(int a, int b, int c, int d){
	for(int i=0; i<d; i++)
	{
		cout << "#";
	}
	cout << endl << endl;
}
int main(){
	int a=20,b=20,c=10,d=15;
	symbol(a);
	symbol(a,b);
	symbol(a,b,c);
	symbol(a,b,c,d);
}
