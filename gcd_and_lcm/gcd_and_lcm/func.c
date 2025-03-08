#include "test.h"

void bigger(int* a, int* b) {
	if (*a >= *b) {
		return;
	}
	else {
		int t = *a;
		*a = *b;
		*b = t;
	}
}

int gcd(int a, int b) {
	int r = a % b;
	if (0 == r) {
		return b;
	}
	else {
		r = gcd(b, r);
	}
	return r;
}

int Lcm(int a, int b) {
	int s[2] = { 0, 1 };
	int t[2] = { 0, 2 };
	s[1] = s[0] = a;
	t[1] = t[0] = b;
	while (s[1] != t[1]) {
		if (s[1] < t[1]) {
			s[1] = s[1] + s[0];
		}
		else {
			t[1] = t[1] + t[0];
		}
	}
	return s[1];
}
