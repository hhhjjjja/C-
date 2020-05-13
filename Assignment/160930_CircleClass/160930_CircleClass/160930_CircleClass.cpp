#include <iostream>
using namespace std;											//std 이름 공간에 선언된 모든 이름에 std:: 생략

class Circle {													//Circle 클래스 생성
public:
	int radius;													//radius : 원의 반지름을 의미하는 int형 변수
	Circle();													//기본 생성자
	Circle(int r);												//매개변수가 있는 생성자
	double getArea();											//원의 면적을 구하는 함수
	double getRound();											//원의 둘레를 구하는 함수
};

Circle::Circle() {
	radius = 1;													//원의 반지름을 1로 초기화
	cout << "반지름" << radius << "원 생성" << endl;			//"반지름 1 원 생성(줄바꿈)" 출력
}

Circle::Circle(int r) {
	radius = r;													//원의 반지름을 매개변수 r로 지정
	cout << "반지름" << radius << "원 생성" << endl;			//"반지름 r 원 생성(줄바꿈)" 출력
}

double Circle::getArea() {
	return 3.14*radius*radius;									//원의 넓이인 3.14*radius*radius 반환
}

double Circle::getRound() {
	return 2*3.14*radius;										//원의 둘레인 2*3.14*radius 반환
}

int main() {
	Circle donut;												//매개변수가 없는 생성자를 호출
	double area = donut.getArea();								//double형 변수 area를 donut의 넓이를 받는 변수로 지정
	double round = donut.getRound();							//double형 변수 round를 donut의 둘레를 받는 변수로 지정

	cout << "donut 면적은 " << area << endl;					//donut 넓이(면적) 출력
	cout << "donut 둘레는 " << round << endl;					//donut 둘레 출력

	Circle pizza(30);											//매개변수가 있는 생성자를 호출. r은 30
	area = pizza.getArea();										//area를 pizza의 넓이를 받는 변수로 지정
	round = pizza.getRound();									//round를 pizza의 둘레를 받는 변수로 지정

	cout << "pizza 면적은 " << area << endl;					//pizza 넓이 출력
	cout << "pizza 둘레는 " << round << endl;					//pizza 둘레 출력

	Circle sun(96);												//매개변수가 있는 생성자를 호출. r은 96
	area = sun.getArea();										//area를 sun의 넓이를 받는 변수로 지정
	round = sun.getRound();										//round를 sun의 둘레를 받는 변수로 지정

	cout << "sun 면적은 " << area << endl;						//sun 넓이 출력
	cout << "sun 둘레는 " << round << endl;						//sun 둘레 출력
}