#include <stdio.h>


int main() {
	float h, b, c, s; //h = Hz,b = bit,c = Ʈ�� ���� ä��,s = ������ �ð�
	float sum; //����뷮
	scanf_s("%f %f %f %f", &h, &b, &c, &s);
	sum = (h * b * c * s) / 8 / 1024 / 1024; //MB ������ ����뷮 ���ϱ�
	printf("%.1lf MB\n", sum); //�Ҽ��� ���� ù ��° �ڸ� �ݿø�
	return 0;
}