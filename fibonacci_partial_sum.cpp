#include <iostream>
#include <vector>
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
	long long sum;
    long long array[ to +1];
    array[0]=0;
    array[1]=1;
    for( long long i = 2 ; i < to +1 ; i++){
    	array[i] = (array[i-1] + array[i-2]) % 10;
	} 
	sum = 0;
	for (long long j = from ; j < to+1 ; j++){
		sum = sum + array[j];
	}

    return sum % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
}
