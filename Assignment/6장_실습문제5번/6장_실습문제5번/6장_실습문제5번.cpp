#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size);			//source[]�� ����� int���� dest[]�� double�� ��ȯ �� ����, size=�迭ũ��
	static void doubleToInt(double source[], int dest[], int size);			//source[]�� ����� double���� dest[]�� int�� ��ȯ �� ����, size=�迭ũ��
};

void ArrayUtility::intToDouble(int source[], double dest[], int size) {		//ArrayUtility�� �ִ� ����Լ� intToDouble ������
	for(int i=0;i<size;i++) {				//�迭�� ũ�� size��ŭ �ݺ�����
		dest[i]=(double)source[i];			//double dest[i]�� int�� ���� ����Ǿ��ִ� source[i]�� ���� double�� ��ȯ �� ����
	}
}

void ArrayUtility::doubleToInt(double source[], int dest[], int size) {		//ArrayUtility�� �ִ� ����Լ� doubleToInt ������
	for(int i=0;i<size;i++) {				//�迭�� ũ�� size��ŭ �ݺ�����
		dest[i]=(int)source[i];				//int dest[i]�� double�� ���� ����Ǿ��ִ� source[i]�� ���� int�� ��ȯ �� ����
	}
}

int main() {
	int x[] = {1, 2, 3, 4, 5};					//�迭 x�� int������ 1,2,3,4,5 ����
	double y[5];								//double�� �迭 y ����
	double z[] = {9.9, 8.8, 7.7, 6.6, 5.6};		//�迭 z�� double������ 9.9, 8.8, 7.7, 6.6, 5.6 ����

	ArrayUtility::intToDouble(x, y, 5);			//ArrayUtility�� ����Լ� intToDouble����(x�迭�� ���� double������ ��ȯ�� y�迭�� ����, �迭ũ��� 5)
	for(int i=0;i<5;i++) {						//�迭ũ�� 5��ŭ �ݺ�����
		cout << y[i] << ' ';					//y[1], y[2], y[3], y[4], y[5] ���
	}
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5);			//ArrayUtility�� ����Լ� doubleToInt����(z�迭�� ���� int������ ��ȯ�� x�� ����, �迭ũ��� 5)
	for(int i=0;i<5;i++) {						//�迭ũ�� 5��ŭ �ݺ�����
		cout << x[i] << ' ';					//x[1], x[2], x[3], x[4], x[5] ���
	}
	cout << endl;
}