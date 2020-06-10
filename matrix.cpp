
#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{

}

int FastPow(int a, int n) {
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return a * FastPow(a, n - 1);
	else
		return FastPow(a ^ 2, n / 2);
}
