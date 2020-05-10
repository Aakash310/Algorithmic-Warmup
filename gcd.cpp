#include <iostream>

int gcd_Fast(int a, int b) {
  if(b == 0){
  	return a;
  }else{
  	int a_= a % b;
  	gcd_Fast(b,a_);
  }
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_Fast(a, b) << std::endl;
  return 0;
}
