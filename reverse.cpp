#include<iostream>
using namespace std;

// write main function
// Reverse number example using C++;

int main()
{
	
// main function
// declare variables

int n ,reversenum=0,rem;// define variables

cout<< "Enter Integer variable :"; // accept integer value
cin >> n; 

while(n!=0)
{// while loop execute until n not equal to 0
	
	rem=n%10; // calculate mod given number 
	reversenum=reversenum*10 + rem; // add mod each time  
	
	n/=10; //  divide number with 10
	
	
}// loop until value =0

cout << "Reverse Number is: "<< reversenum; // display value 
return 0;
	
	
	
}

/*

Enter Integer variable :4125
Reverse Number is: 5214
--------------------------------
Process exited after 2.77 seconds with return value 0
Press any key to continue . . .
*/

