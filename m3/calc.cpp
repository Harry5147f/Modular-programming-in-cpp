#include<iostream> 
#include "calc.h"
double sum(double a, double b){
return a+b;}

double prod(double a, double b){
return a*b;}

double sub(double a, double b){
return a-b;}
double div(double a, double b){

	if(b==0){
while(true){
	std::cout<<"\nCan't be zero, please enter the value again: ";
	std::cin>>b;
	if(b!=0){
		break;
	}}}
return a/b;
}
