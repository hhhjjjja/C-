#ifndef ADDER_H				//���� �����Ϲ�
#define ADDER_H				//���� �����Ϲ�

class Adder {
	int op1, op2;			//����ϴ� �ΰ��� ������ �����ϴ� ����
public:						//�ܺο��� ������ �����ϵ��� ��
	Adder(int a, int b);	//Adder.cpp���� �����Ǿ� �ִ�a, b�� �Ķ���ͷ� ������ ������
	int process();			//Adder.cpp���� �����Ǿ� �ִ� �� ��� �Լ�����
};
#endif						//���� �����Ϲ� Adder.h�� ������ include�ص� ���� ���� �ϱ� ����


