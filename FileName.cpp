#include <stdio.h>


int main() {
	float h, b, c, s; //h = Hz,b = bit,c = 트랙 개수 채널,s = 녹음할 시간
	float sum; //저장용량
	scanf_s("%f %f %f %f", &h, &b, &c, &s);
	sum = (h * b * c * s) / 8 / 1024 / 1024; //MB 단위로 저장용량 구하기
	printf("%.1lf MB\n", sum); //소수점 이하 첫 번째 자리 반올림
	return 0;
}