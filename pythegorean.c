#include <stdio.h> 

int main() 
{
	float a,b,c,max,m,n; 
	printf("Enter 3 numbers\n"); 
	scanf("%f %f %f",&a,&b,&c); 
	if(a>b&&a>c) 
	{max=a;
	m=b; 
	n=c;} 
	else if(b>c) 
	{max=b;
	m=a; 
	n=c;} 
	else  
	{max=c; 
	 m=a; 
	 n=b;}
	printf("side 1 %0.0f\n",a); 
	printf("side 2 %0.0f\n",b); 
	printf("side 3 %0.0f\n",c); 
	
	if(max*max== m*m+n*n)
     printf("Yes"); 
	 else 
	 printf("No"); 
	 	
}
