#include <iostream>
using namespace std;

class Circle {
private:							//class �������� ���ٰ���
	static int numOfCircles;		//������ ���� ���� ���
	int radius;						//���� ������
public:								//��� ������ ���ٰ���
	Circle(int r=1);				//Circle�� default �Ű������� ����� ������
	~Circle() {numOfCircles--;}		//Circle �Ҹ��ڰ� ����Ǹ� ���� ������ -1
	double getArea() {return 3.14*radius*radius;}			//�� ���̸� ���ϴ� ����Լ�
	static int getNumOfCircles() {return numOfCircles;}		//private������ numOfCircles�� ����ϱ� ���� ����Լ�
};
Circle::Circle(int r) {				//�Ű����� r�� ���� ������
	radius = r;						//radius�� �Ű����� r ����
	numOfCircles++;					//���� �����Ǿ����Ƿ� numOfCircles�� +1
}
int Circle::numOfCircles = 0;		//numOfCircles�� 0���� �ʱ�ȭ
int main() {
	Circle *p = new Circle[10];			//10���� Circle��ü�� ���� �� �����ڸ� ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;	//�����ڰ� 10�� ����ǹǷ� numOfCircles=10

	delete [] p;						//������ p�� ����Ű�� Circle�迭 10���� �Ҹ��� 10�� ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;	//�Ҹ��ڰ� 10�� ����ǹǷ� numOfCircles=0

	Circle a;							//Circle��ü a ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;	//�����ڰ� 1�� ����ǹǷ� numOfCircles=1

	Circle b;							//Circle��ü b ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;	//�����ڰ� 1�� ����ǹǷ� ������ +1�� �ؼ� numOfCircles=2

	Circle c(2);			//Circle��ü c ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;	//�����ڰ� 1�� ����ǹǷ� ������ +1�� �ؼ� numOfCircles=3

	Circle *q = new Circle[5];			//5���� Circle��ü�� ���� �� ������ ����
	q[0] = Circle(10);					//������ q�� ����Ű�� �迭�� 0��° index�� �������� 10���� ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;	//�����ڰ� 5�� ����ǹǷ� ������ +5�� �ؼ� numOfCircles=8
	cout << "q[0] ���� = " << q[0].getArea() << endl;							//������ q�� ����Ű�� �迭�� 0��° index�� �������� 10�̹Ƿ� �������� 314
 }