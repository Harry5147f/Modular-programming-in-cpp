#include<iostream> 
#include "calc.h"

int main(){
	double num1, num2;
	short choice;
	std::cout<<"Enter the number :";
	std::cin>>num1;
	std::cout<<"Enter second number :";
	std::cin>>num2;
	std::cout<<"1)Sum\n2)Subtract\n3)Divide\n4)Multiply\n";
	std::cout<<"Enter your choice(1,2,3,4) :";
	std::cin>>choice;
	if(choice==1){
		std::cout<<num1<<"+"<<num2<<" is "<<sum(num1, num2);
	}	
	else if(choice==2){
		std::cout<<num1<<"-"<<num2<<" is "<<sub(num1, num2);
	}
	else if(choice==3){
		std::cout<<num1<<"/"<<num2<<" is "<<div(num1, num2);
	}
	else if(choice==4){
		std::cout<<num1<<"*"<<num2<<" is "<<prod(num1, num2);
	}
	else{
		std::cout<<"Invalid input";}
	std::cout<<"\n";
	return 0;
}
