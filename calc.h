#ifndef M_PI // 아직 정의 하지 않았으면...
#define M_PI 3.14159265358979323846 // 정의하기
#endif

// 함수 원형 선언하기
double sum(double value1, double value2);
double sub(double value1, double value2);
double mul(double value1, double value2);
double div(double value1, double value2);
int rem(int value1, int value2);

// 추가 함수
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);


// 더하기
double sum(double value1, double value2) {
	return value1 + value2;
}
// 빼기
double sub(double value1, double value2) {
	return value1 - value2;
}
// 곱하기
double mul(double value1, double value2) {
	return value1 * value2;
}
// 나누기
double div(double value1, double value2) {
	if (value2 != 0)
		return value1 / value2;
	else {
		printf("Error : Divide by 0!");
		return 0;
	}
}
// 나머지
int rem(int value1, int value2) {
	if (value2 != 0)
		return value1 % value2;
	else {
		printf("Error : Divide by 0!");
		return 0;
	}
}

// 제곱
double power(double base, double exponent) {
	return pow(base, exponent); // pow() 함수??
}

// 제곱근
double squareRoot(double num) {
	if (num >= 0)
		return sqrt(num); // math.h에서 있는 sqrt() 함수
	else {

		printf("Error : Megetive number!");
		return -1;
	}
}

// 넓이
double areaOfCircle(double radius) {
	return M_PI * radius * radius; // M_PI 정의
}

// 둘레
double circumferenceOfCircle(double radius) {
	return 2 * M_PI * radius;
}