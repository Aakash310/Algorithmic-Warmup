#include <iostream>



int get_fibonacci_sum_Fast(long long n) {
	int last_digit_sum = 0 ;
    int remainder = n % 60;
    //std::cout<<remainder<<std::endl;
    
	if (remainder <= 0) 
       return 0; 
  
    long long fibo[remainder+1]; 
    fibo[0] = 0, fibo[1] = 1; 
  
    // Initialize result 
    long long sum = fibo[0] + fibo[1]; 
  
    // Add remaining terms 
    for (long long i=2; i<=remainder; i++) 
    { 
        fibo[i] = fibo[i-1]+fibo[i-2]; 
        //std::cout<<sum<<std::endl;
        sum += fibo[i]; 
    } 
  
    return sum%10; 
}


int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << get_fibonacci_sum_Fast(n);
}
