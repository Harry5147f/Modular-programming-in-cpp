#include<iostream> 
#include "sum.h"
int main(){
	double num1, num2,sumValue;
	std::cout<<"Enter num 1: ";
	std::cin>>num1;
	std::cout<<"Enter num2: ";
	std::cin>>num2;
	sumValue=sum(num1, num2);
	std::cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sumValue<<"\n";
	return 0;
}
