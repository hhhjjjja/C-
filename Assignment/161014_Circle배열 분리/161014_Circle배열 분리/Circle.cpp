#include "Circle.h"					//Circle.h�� include

Circle::Circle() {
	radius = 1;						//radius�� 1�� �ʱ�ȭ
}
Circle::~Circle() { }				//�Ҹ���
void Circle::setRadius(int r) {
	radius = r;						//�Է¹��� ���� ������ r�� radius�� ����
}
double Circle::getArea() {
	return 3.14*radius*radius;		//���� ���̸� ���ؼ� ��ȯ
}
