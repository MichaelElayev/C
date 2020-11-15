#include<stdio.h>
#include "myMath.h"

int main(){
	double x, fn1, fn2, fn3;
	printf("Enter a real number \n");
	scanf("%lf",&x);
	fn1=add(Exp(x),Pow(x,3));
	fn1=sub(fn1,2);
	fn2=mul(x,3);
	fn2=add(fn2,mul(Pow(x,2),2));
	fn3=mul(Pow(x,3),4);
	fn3=sub(div(fn3,5),mul(x,2));
	printf("the answer for the function of E^x + x^3 -2 is: %lf \n",fn1);
	printf("the answer for the function of 3x + 2(x^2) is: %lf \n", fn2);
	printf("the answer for the function of (4(x^3))/5 - 2x is: %lf \n", fn3);
	
	return 0;
}
