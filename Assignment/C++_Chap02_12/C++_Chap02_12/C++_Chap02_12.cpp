#include <iostream>
int sum(int a, int b);															//Line2 �Լ� ���� ����
using namespace std;															//Line3 std �̸� ������ ����� ��� �̸��� std:: ����

int sum(int a, int b) {															//Line5 sum �Լ� ����, �Ű����� a=���� ���� ��, b=���� �� ��

	int k, res=0;																//Line7 k=for���� �����Ű�鼭 ������ �ϴ� ����, res=���� ���
	for(k=a;k<=b;++k) {															//Line8 k=a���� k=b���� k�� 1�� ���ذ��� {}���� �ݺ�����
		res += k;																//Line9 ���� ��� res�� res+k�� ����
	}
	return res;																	//Line11 ���� ��� res ����
}

int main() {
	int n = 0;																	//Line15 �Է¹��� ���� n�� ������ �� 0���� �ʱ�ȭ
	cout<<"�� ���� �Է��ϼ���>>";												//Line16 "�� ���� �Է��ϼ���>>" ���� ���
	cin>>n;																		//Line17 n�� �Է¹��� ���� ����
	cout<<"1���� " << n << "������ ����" << sum(1, n) << "�Դϴ�.\n";			//Line18 1���� (�Է¹��� ���� n) ������ ���� (sum�Լ����� ���Ϲ��� ����� res) �Դϴ� ���
}