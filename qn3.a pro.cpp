#include <iostream>
using namespace std;
int main() {
	//To return even numbers between two intervals
	int first;
	int last;
	int sum=0;
	//prompt the user to enter the values of initials and finals
	cout<<"Enter the first vaLue";
	cin>>first;
	cout<<"Enter the value of last";
	cin>>last;
	for(int x=first;x<=last;x++){
		sum+=x;

		}
	
	return sum;
}



