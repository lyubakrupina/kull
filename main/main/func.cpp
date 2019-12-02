#include "stdafx.h"
#include "fuch.h"
#include <iostream>
#include <cmath>
using namespace std;
double MySum(double a, double b)
{
	return a + b;
}
double MySub(double a, double b) 
{
	return a - b;
}
double MyMul(double a,double b)
{
	return a *b;
}
double MyDiv(double a,double b)
{
	if (b==0) {
		cout << "delenie na nol"<< endl;
	}
	else return a/b;
	 
	
	
}
