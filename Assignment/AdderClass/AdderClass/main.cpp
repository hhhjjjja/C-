#include <iostream>
#include "Calculator.h"								//main.cpp�� Calculator.h�� include
#include "Adder.h"									//main.cpp�� Adder.h�� include

int main() {
	Calculator calc;								//Calculator.h�� ����Ǿ� �ִ� Calculator Ŭ������ calc�� ȣ��
	calc.run();										//Calculator Ŭ���� calc�� ����ǰ� Calculator.cpp�� ������ run()����Լ� ����

	int a=calc.x;										//a : Calculator Ŭ�������� ����� x�� �����ϴ� ����
	int b=calc.y;										//b : Calculator Ŭ�������� ����� y�� �����ϴ� ����
	Adder c(a, b);										//Adder.h�� ����Ǿ� �ִ� Adder Ŭ������ c�� ȣ���ϰ� �Ķ���Ϳ� a, b �Է�
	c.process();										//Adder Ŭ���� c�� ����ǰ� Adder.cpp�� ������ process()����Լ� ����
	std::cout << "Adder c ������ ���" << std::endl;	//"Adder c ������ ���" ���
	std::cout << c.process() << std::endl;				//c.process()���� ������ (op1+op2) ���
}




