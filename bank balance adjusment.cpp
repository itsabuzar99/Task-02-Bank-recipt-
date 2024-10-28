#include <iostream>
using namespace std;
int main(){
	int balance;
	cout<<"your current balence is :";
	cin>>balance;
	int deposit;
		cout<<"you have deposited :";
		cin>>deposit;
	int sum;
		sum=balance+deposit;
	    cout<<"balance after deposit is :"<<sum<<endl;
	int withdrawal;
	    cout<<"you withdrawal amount is:";
	    cin>>withdrawal;
	int difference;
	     difference=sum-withdrawal;
	    cout<<"Amount after withdrawal is :"<<difference;
	
	return 0;
}
