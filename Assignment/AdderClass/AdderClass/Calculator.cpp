#include <iostream>
using namespace std;							//std �̸������� ����� ��� �̸��� std:: ����

#include "Calculator.h"							//Calculator.h�� include
#include "Adder.h"								//Adder.h�� include

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ��� >> ";		//"�� ���� ���� �Է��ϼ���>>" ���
	int a, b;									//��� �� �� ������ �Է¹޾Ƽ� �����ϴ� ����
	cin >> a >> b;								//��� �� �� ������ ���� a, b�� �Է¹���
	Adder adder(a, b);							//�����⸦ ����
	x=a;										//�Է¹��� ���� a�� Ŭ���� Calculator�� ����Ǿ��ִ� ���� x�� ����
	y=b;										//�Է¹��� ���� b�� Ŭ���� Calculator�� ����Ǿ��ִ� ���� y�� ����
	cout << "calc.run ������ ���" << endl;		//"calc.run ������ ���" ���
	cout << adder.process() << endl << endl;	//adder.process()���� ������ (op1+op2) ���
}
