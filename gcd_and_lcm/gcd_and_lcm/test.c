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
			printf("����ͨ��\n");
		}
		else {
			printf("���Բ�ͨ��\n");
			printf("��������Ϊ%d %d", a, b);
			break;
		}
	}
	

	return 0;
}