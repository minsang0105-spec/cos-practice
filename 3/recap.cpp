#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
	
	int a, b;
	int i;
	
	if (argc != 3)
	{
		cerr << "Error! You must input two numbers!" << endl;
		return 1;
	}

	cout << "Enter the first number: ";  
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;

	if(a<b){
		for(i=a; i<=b; i++){
			a += i;		
			}
		printf("Result: %d",a-1);
	}
	else{
		cout << "Second number should be bigger than first one!" << endl;
		return 1;
	}

	return 0;
}
