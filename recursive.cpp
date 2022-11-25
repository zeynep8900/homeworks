#include <iostream>

int sum(int a) 
{
   int result;
   	if (a == 1) 
   		{
   		   return (1);
   	} else 
   		{
      result = a + sum(a - 1);
   		}
   return result;
}

int main() {
	
		int n ;
	 
		std::cout<<"Enter a number n=";
	
	int total = sum(n);
	
	return total;
	
}
