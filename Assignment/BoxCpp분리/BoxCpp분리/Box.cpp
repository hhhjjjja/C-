#include <iostream>
using namespace std;

#include "Box.h"						//Box.h�� include

void Box::draw() {						//�ڽ��� �׸��� �Լ�
	for(int n=0;n<height;++n) {			//n�� 0���� �ڽ��� ����(height)���� ���������� +1�ϸ鼭 {}�ݺ�����
		for(int m=0;m<width;++m) {		//m�� 0���� �ڽ��� ��(width)���� ������ ���� +1�ϸ鼭 {}�ݺ�����
			cout << fill;				//setFill���� ������ �ڽ��� ä��� ���� fill ���
		}
		cout << endl;					//�ٹٲ�
	}
}
