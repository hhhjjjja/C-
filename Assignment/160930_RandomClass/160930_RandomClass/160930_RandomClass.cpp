#include <iostream>
#include <cstdlib>									//RAND_MAX ���(32767)�� ����Ǿ� �ִ� �������
#include <stdlib.h>
#include <ctime>									//srand�� ����ϱ� ���� �������
using namespace std;
class Random {
public:
	Random();										//�⺻ ������
	int next();										//���� ������ �޾ƿ��� ���� �Լ�
	int nextInRange(int f, int l);					//f���� l������ ���� ������ ���� ������ �޾ƿ��� ���� �Լ�
};
Random::Random() {
	srand((unsigned)time(0));						//������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}
int Random::next() {
	int n = rand();									//���� ������ �޴� ���� n�� ���������� ����
	return n;										//���� ������ ����� ���� n ��ȯ
}
int Random::nextInRange(int f, int l) {
	int n = rand()%(l-f+1)+f;						//���� n�� f���� l������ ���� ������ ������ ������ ����

	return n;										//���� ������ ����� ���� n ��ȯ
}
int main() {
	Random r;																		//�Ű������� ���� ������ ȣ��
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;			//"--0���� RAND_MAX(32767) ������ ���� ���� 10��" ���
	for(int i=0;i<10;++i) {															//i=0���� 10�̸����� for{} �ݺ�����
		int n = r.next();															//n�� ���� ������ �޴� �Լ� next()���� ��ȯ�� n ����
		cout << n << ' ';															//���� ������ ����� n ���
	}

	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;	//"--2���� 4������ ���� ���� 10��--" ���
	for(int i=0;i<10;++i) {															//i=0���� 10�̸����� for{} �ݺ�����
		int n = r.nextInRange(2, 4);												/*n�� 2���� 4������ ���� ���� ���������� �޴� �Լ�
																					  nextInRange()���� ��ȯ�� n ����*/
		cout << n << ' ';															//���� ������ ����� n ���
	}
	cout << endl;																	//�ٹٲ�
}

