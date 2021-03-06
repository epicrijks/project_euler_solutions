#include <iostream>
#include <math.h>

using namespace std; 
  
// function to count the divisors 
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

int main() {
  unsigned long n = 1;
  unsigned long triNumber = n*(n+1) / 2;

  while (countDivisors(triNumber) <= 500) {
    n++;
    triNumber = n*(n+1) / 2;
  }

  std::cout << triNumber <<std::endl;
  return 0;
}