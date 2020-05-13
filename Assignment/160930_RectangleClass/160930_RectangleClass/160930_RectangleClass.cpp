#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;												//�ʺ�� ����
	Rectangle();													//�⺻ ������
	Rectangle(int w, int h);										//�ʺ�(w)�� ����(h)�� �Ű������� ������ ������ 
	Rectangle(int length);											//�ʺ�� ���̰� ���� (=length) �簢���� ���̸� �Ű������� ���� ������
	bool isSquare();												//���簢������ �˻��ϴ� �Լ�
	double getArea();												//�簢���� ���̸� ���ϴ� �Լ�
	double getCercum();												//�簢���� �ѷ��� ���ϴ� �Լ�
};

Rectangle::Rectangle() {
	width = height = 1;												//�ʺ�(width)�� ����(height)�� 1�� ����
}

Rectangle::Rectangle(int w, int h) {
	width = w;														//�ʺ� �޴� �Ű����� w = width
	height = h;														//���̸� �޴� �Ű����� h = height
}

Rectangle::Rectangle(int length) {
	width = height = length;										//�� ���� ���̸� �޴� �Ű����� length=width=height
}

bool Rectangle::isSquare() {
	if(width == height) return true;								//���� �ʺ�� ���̰� ���ٸ� true(1)�� ��ȯ
	else return false;												//���� �ʴٸ� false(0)�� ��ȯ
}

double Rectangle::getArea() {
	return width*height;											//�簢���� ���̸� ���ϴ� �� width*height�� ��ȯ
}

double Rectangle::getCercum() {
	return 2*(width+height);										//�簢���� �ѷ��� ���ϴ� �� 2*(width+height) ��ȯ
}

int main() {
	Rectangle rect1;														//�Ű������� ���� �����ڸ� ȣ��
	double area = rect1.getArea();											//���� area�� rect1�� ���̸� ����� ���� �޴´�
	double cercum = rect1.getCercum();										//���� cercum�� rect1�� �ѷ��� ����� ���� �޴´�
	cout << "rect1�� ���̴� " <<  area << ", �ѷ���" << cercum << endl;		//rect1�� ���̿� �ѷ��� ����� ����� ���

	Rectangle rect2(3, 5);													//�Ű����� �ʺ�(width)=3, ����(height)=5�� ������ ȣ��
	area = rect2.getArea();													//���� area�� rect2�� ���̸� ����� ���� �޴´�
	cercum = rect2.getCercum();												//���� cercum�� rect2�� �ѷ��� ����� ���� �޴´�
	cout << "rect2�� ���̴� " <<  area << ", �ѷ���" << cercum << endl;		//rect2�� ���̿� �ѷ��� ����� ����� ���

	Rectangle rect3(3);														//�Ű����� length=3�� �����ڸ� ȣ��
	area = rect3.getArea();													//���� area�� rect3�� ���̸� ����� ���� �޴´�
	cercum = rect3.getCercum();												//���� cercum�� rect3�� �ѷ��� ����� ���� �޴´�
	cout << "rect3�� ���̴� " <<  area << ", �ѷ���" << cercum << endl;		//rect3�� ���̿� �ѷ��� ����� ����� ���

	Rectangle rect4(5);														//�Ű����� length=5�� �����ڸ� ȣ��
	area = rect4.getArea();													//���� area�� rect4�� ���̸� ����� ���� �޴´�
	cercum = rect4.getCercum();												//���� cercum�� rect4�� �ѷ��� ����� ���� �޴´�
	cout << "rect4�� ���̴� " <<  area << ", �ѷ���" << cercum << endl;		//rect4�� ���̿� �ѷ��� ����� ����� ���

	cout << endl;															//�ٹٲ� ���

	if(rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;			//���� rect1�� ���簢���̶�� "rect1�� ���簢���̴�" ���
	if(rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;			//���� rect2�� ���簢���̶�� "rect2�� ���簢���̴�" ���
	if(rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;			//���� rect3�� ���簢���̶�� "rect3�� ���簢���̴�" ���
	if(rect4.isSquare()) cout << "rect4�� ���簢���̴�." << endl;			//���� rect4�� ���簢���̶�� "rect4�� ���簢���̴�" ���
}