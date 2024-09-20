// calc.c
#include <stdio.h>
#include <math.h> // M_PI는 여기에 있어야 하지만 없으면
#include "calc.h" // 직접 만든 .h 파일을 include할 떄 큰 따음표("")를 사용해야 됨


int main(void) {
	double x = 2, y = 3;

	printf("x : %.1f + y : %.1f = %.1f\n", x, y, sum(x, y));
	printf("x : %.1f - y : %.1f = %.1f\n", x, y, sub(x, y));
	printf("x : %.1f * y : %.1f = %.1f\n", x, y, mul(x, y));
	printf("x : %.1f / y : %.1f = %.6f\n", x, y, div(x, y));
	printf("x : %d %% y : %d = %d\n", (int)x, (int)y, rem((int)x, (int)y));


	// 추가 부분
	printf("x : %.1f ^ y : %.1f = %.1f\n", x, y, power(x, y));
	printf("sqrt of x : %.1f = %.1f\n", x, squareRoot(x));
	printf("area of x : %.1f = %.1f\n", x, areaOfCircle(x));
	printf("circ of x : %.1f = %.1f\n", x, circumferenceOfCircle(x));

	return 0;
}

