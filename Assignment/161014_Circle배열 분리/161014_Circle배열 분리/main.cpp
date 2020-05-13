#include <iostream>
#include "Circle.h"									//Circle.h�� include

using namespace std;

int main() {
	cout << "�����ϰ��� �ϴ� ���� ����?";			//�����ϰ��� �ϴ� ���� ����? ���
	int n, radius;									//n=���� ����, radius=���� ������
	cin >> n;										//n�� ���� ������ �Է�
	if(n <= 0) return 0;							//�Է¹��� n�� 0���� �۰ų������� 0��ȯ
	Circle *pArray = new Circle [n];				//n���� Circle�迭 ����
	for(int i=0;i<n;++i) {							//i�� 0���� n���� ���������� +1�ϸ鼭 {}�ݺ����� 
		cout << "��" << i+1 << ": ";				//"�� (i+1) : "��� -> ()���� {}�� �ѹ�����Ǹ� 1, 2������=2...
		cin >> radius;								//radius�� ���� �������� �Է�
		pArray[i].setRadius(radius);				//�� Circle ��ü�� �Է¹��� ���������� �ʱ�ȭ
	}
	int count =0;											//ī��Ʈ ����
	Circle*p = pArray;										//pArray�� �����ϰ� ����ϱ� ���� ������ p
	for(int i=0;i<n;++i) {									//i�� 0���� n���� ���������� +1�ϸ鼭 {}�ݺ�����
		cout << p->getArea() << ' ';						//getArea���� ��ȯ�� ���� ���� ���
		if(p->getArea() >= 100 && p->getArea() <= 200)		//������ 100���� 200������ ���� ������ ī��Ʈ
			count++;										//�� ������ �����ϸ� count�� +1
		p++;												//���� �迭�� �Ѿ
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;	//count ���
	delete [] pArray;															//��ü �迭 �Ҹ�
}
