#include <iostream>
using namespace std;											//std �̸� ������ ����� ��� �̸��� std:: ����

class Circle {													//Circle Ŭ���� ����
public:
	int radius;													//radius : ���� �������� �ǹ��ϴ� int�� ����
	Circle();													//�⺻ ������
	Circle(int r);												//�Ű������� �ִ� ������
	double getArea();											//���� ������ ���ϴ� �Լ�
	double getRound();											//���� �ѷ��� ���ϴ� �Լ�
};

Circle::Circle() {
	radius = 1;													//���� �������� 1�� �ʱ�ȭ
	cout << "������" << radius << "�� ����" << endl;			//"������ 1 �� ����(�ٹٲ�)" ���
}

Circle::Circle(int r) {
	radius = r;													//���� �������� �Ű����� r�� ����
	cout << "������" << radius << "�� ����" << endl;			//"������ r �� ����(�ٹٲ�)" ���
}

double Circle::getArea() {
	return 3.14*radius*radius;									//���� ������ 3.14*radius*radius ��ȯ
}

double Circle::getRound() {
	return 2*3.14*radius;										//���� �ѷ��� 2*3.14*radius ��ȯ
}

int main() {
	Circle donut;												//�Ű������� ���� �����ڸ� ȣ��
	double area = donut.getArea();								//double�� ���� area�� donut�� ���̸� �޴� ������ ����
	double round = donut.getRound();							//double�� ���� round�� donut�� �ѷ��� �޴� ������ ����

	cout << "donut ������ " << area << endl;					//donut ����(����) ���
	cout << "donut �ѷ��� " << round << endl;					//donut �ѷ� ���

	Circle pizza(30);											//�Ű������� �ִ� �����ڸ� ȣ��. r�� 30
	area = pizza.getArea();										//area�� pizza�� ���̸� �޴� ������ ����
	round = pizza.getRound();									//round�� pizza�� �ѷ��� �޴� ������ ����

	cout << "pizza ������ " << area << endl;					//pizza ���� ���
	cout << "pizza �ѷ��� " << round << endl;					//pizza �ѷ� ���

	Circle sun(96);												//�Ű������� �ִ� �����ڸ� ȣ��. r�� 96
	area = sun.getArea();										//area�� sun�� ���̸� �޴� ������ ����
	round = sun.getRound();										//round�� sun�� �ѷ��� �޴� ������ ����

	cout << "sun ������ " << area << endl;						//sun ���� ���
	cout << "sun �ѷ��� " << round << endl;						//sun �ѷ� ���
}