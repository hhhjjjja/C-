#ifndef CIRCLE_H			//���� �����Ϲ�. Circle.h�� ������ �������ص�
#define CIRCLE_H			//���� ���� �ϱ� ����

class Circle{
	int radius;				//radius = ���� ������
public:
	Circle();				//������
	~Circle();				//�Ҹ���
	void setRadius(int r);	//���� �������� r�� �Է¹����� radius�� ����
	double getArea();		//�����̸� ����ϰ� double������ ��ȯ�ϴ� ����Լ�
};
#endif						//���������Ϲ� ��
