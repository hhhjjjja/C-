#include <iostream>
using namespace std;

class Circle {
private:							//class 내에서만 접근가능
	static int numOfCircles;		//생성된 원의 갯수 기억
	int radius;						//원의 반지름
public:								//모든 곳에서 접근가능
	Circle(int r=1);				//Circle의 default 매개변수를 사용한 생성자
	~Circle() {numOfCircles--;}		//Circle 소멸자가 실행되면 원의 갯수가 -1
	double getArea() {return 3.14*radius*radius;}			//원 넓이를 구하는 멤버함수
	static int getNumOfCircles() {return numOfCircles;}		//private변수인 numOfCircles를 출력하기 위한 멤버함수
};
Circle::Circle(int r) {				//매개변수 r을 가진 생성자
	radius = r;						//radius에 매개변수 r 저장
	numOfCircles++;					//원이 생성되었으므로 numOfCircles를 +1
}
int Circle::numOfCircles = 0;		//numOfCircles를 0으로 초기화
int main() {
	Circle *p = new Circle[10];			//10개의 Circle객체를 만든 후 생성자를 실행
	cout << "생존하고 있는 원의 갯수 = " << Circle::getNumOfCircles() << endl;	//생성자가 10번 실행되므로 numOfCircles=10

	delete [] p;						//포인터 p가 가리키는 Circle배열 10개의 소멸자 10번 실행
	cout << "생존하고 있는 원의 갯수 = " << Circle::getNumOfCircles() << endl;	//소멸자가 10번 실행되므로 numOfCircles=0

	Circle a;							//Circle객체 a 생성
	cout << "생존하고 있는 원의 갯수 = " << Circle::getNumOfCircles() << endl;	//생성자가 1번 실행되므로 numOfCircles=1

	Circle b;							//Circle객체 b 생성
	cout << "생존하고 있는 원의 갯수 = " << Circle::getNumOfCircles() << endl;	//생성자가 1번 실행되므로 위에서 +1을 해서 numOfCircles=2

	Circle c(2);			//Circle객체 c 생성
	cout << "생존하고 있는 원의 갯수 = " << Circle::getNumOfCircles() << endl;	//생성자가 1번 실행되므로 위에서 +1을 해서 numOfCircles=3

	Circle *q = new Circle[5];			//5개의 Circle객체를 만든 후 생성자 실행
	q[0] = Circle(10);					//포인터 q가 가리키는 배열의 0번째 index의 반지름를 10으로 지정
	cout << "생존하고 있는 원의 갯수 = " << Circle::getNumOfCircles() << endl;	//생성자가 5번 실행되므로 위에서 +5를 해서 numOfCircles=8
	cout << "q[0] 넓이 = " << q[0].getArea() << endl;							//포인터 q가 가리키는 배열의 0번째 index의 반지름이 10이므로 반지름은 314
 }