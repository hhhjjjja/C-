#include <iostream>
#include "Adder.h"						//Adder.h�� include

Adder::Adder(int a, int b) {			//�Ķ���� a, b�� ���� Adder ������
	op1=a; op2=b;						//op1�� a ����, op2�� b ����
}

int Adder::process() {					//������� �Լ�
	return op1+op2;						//�� ���� op1�� op2�� ���� ���� ��ȯ
}
