#include <iostream>

long long gcd_Fast(long long a, long long b) {
  if(b == 0){
  	return a;
  }else{
  	long long a_= a % b;
  	gcd_Fast(b,a_);
  }
}

long long lcm_Fast(long long a, long long b) {
  long long num = gcd_Fast(a,b);	
  return ((long long)(a*b)/num);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_Fast(a, b) << std::endl;
  return 0;
}
