#include <iostream>
using namespace std;		//std �̸������� ����� ��� �̸��� std:: ����

#include "Box.h"			//Box.h �� include

int main() {
	Box b(10, 2);			//Box.h�� ����Ǿ� �ִ� Box Ŭ������ b�� ȣ���ϰ� 10, 2�� ���� �Ķ���ͷ� ����
	b.draw();				//Box Ŭ���� b�� ����ǰ� Box.cpp�� ������ draw( )�� ����
	cout << endl;			//�ٹٲ�
	b.setSize(7, 4);		//�ڽ� ����� 10->7�� 2->4�� ũ�� ����
	b.setFill('^');			//�ڽ� ���θ� ä�� ���ڸ� '^'�� ����
	b.draw();				//�ڽ��� �׸���
}