#include "test.h"


int main(void) {
	srand((unsigned int)time(NULL));
	int a, b;
	for (int i = 0; i < TESTTIME; i++) {
		a = rand() % ELEMMAX + 2;
		b = rand() % ELEMMAX + 2;
		bigger(&a, &b);
		int d = gcd(a, b);
		int lcm = a * b / d;
		int test_lcm = Lcm(a, b);
		if (test_lcm == lcm) {
			printf("测试通过\n");
		}
		else {
			printf("测试不通过\n");
			printf("测试用例为%d %d", a, b);
			break;
		}
	}
	

	return 0;
}