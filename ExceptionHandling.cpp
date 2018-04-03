/*****************************
*Name: 求商 
*Author: 张军 
*Date: 2018年4月3日 
*****************************/ 

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
	int dividend, divisor;
	cout << "Input dividend and divisor: ";
	while(cin >> dividend >> divisor){
		try{
			if(divisor == 0){
				throw runtime_error("Divisor cannot be zero!");
			}
			cout << "quotient: " << static_cast<double>(dividend)/divisor << endl;
		}
		catch(runtime_error err){
			cout << err.what() << endl <<"Try again? y or n: ";
			char c;
			cin >> c;
			if(c != 'y' && c != 'Y'){
				break;
			}		
		}
		cout << "Input dividend and divisor: ";
	}	
	return 0;
}

