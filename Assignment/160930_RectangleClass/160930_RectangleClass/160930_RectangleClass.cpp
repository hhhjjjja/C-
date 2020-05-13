#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;												//너비와 높이
	Rectangle();													//기본 생성자
	Rectangle(int w, int h);										//너비(w)와 높이(h)를 매개변수로 가지는 생성자 
	Rectangle(int length);											//너비와 높이가 같은 (=length) 사각형의 길이를 매개변수로 갖는 생성자
	bool isSquare();												//정사각형인지 검사하는 함수
	double getArea();												//사각형의 넓이를 구하는 함수
	double getCercum();												//사각형의 둘레를 구하는 함수
};

Rectangle::Rectangle() {
	width = height = 1;												//너비(width)와 높이(height)를 1로 지정
}

Rectangle::Rectangle(int w, int h) {
	width = w;														//너비를 받는 매개변수 w = width
	height = h;														//높이를 받는 매개변수 h = height
}

Rectangle::Rectangle(int length) {
	width = height = length;										//한 변의 길이를 받는 매개변수 length=width=height
}

bool Rectangle::isSquare() {
	if(width == height) return true;								//만약 너비와 높이가 같다면 true(1)를 반환
	else return false;												//같지 않다면 false(0)를 반환
}

double Rectangle::getArea() {
	return width*height;											//사각형의 넓이를 구하는 식 width*height를 반환
}

double Rectangle::getCercum() {
	return 2*(width+height);										//사각형의 둘레를 구하는 식 2*(width+height) 반환
}

int main() {
	Rectangle rect1;														//매개변수가 없는 생성자를 호출
	double area = rect1.getArea();											//변수 area는 rect1의 넓이를 계산한 값을 받는다
	double cercum = rect1.getCercum();										//변수 cercum은 rect1의 둘레를 계산한 값을 받는다
	cout << "rect1의 넓이는 " <<  area << ", 둘레는" << cercum << endl;		//rect1의 넓이와 둘레를 계산한 결과를 출력

	Rectangle rect2(3, 5);													//매개변수 너비(width)=3, 높이(height)=5인 생성자 호출
	area = rect2.getArea();													//변수 area는 rect2의 넓이를 계산한 값을 받는다
	cercum = rect2.getCercum();												//변수 cercum은 rect2의 둘레를 계산한 값을 받는다
	cout << "rect2의 넓이는 " <<  area << ", 둘레는" << cercum << endl;		//rect2의 넓이와 둘레를 계산한 결과를 출력

	Rectangle rect3(3);														//매개변수 length=3인 생성자를 호출
	area = rect3.getArea();													//변수 area는 rect3의 넓이를 계산한 값을 받는다
	cercum = rect3.getCercum();												//변수 cercum은 rect3의 둘레를 계산한 값을 받는다
	cout << "rect3의 넓이는 " <<  area << ", 둘레는" << cercum << endl;		//rect3의 넓이와 둘레를 계산한 결과를 출력

	Rectangle rect4(5);														//매개변수 length=5인 생성자를 호출
	area = rect4.getArea();													//변수 area는 rect4의 넓이를 계산한 값을 받는다
	cercum = rect4.getCercum();												//변수 cercum은 rect4의 둘레를 계산한 값을 받는다
	cout << "rect4의 넓이는 " <<  area << ", 둘레는" << cercum << endl;		//rect4의 넓이와 둘레를 계산한 결과를 출력

	cout << endl;															//줄바꿈 출력

	if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;			//만약 rect1이 정사각형이라면 "rect1은 정사각형이다" 출력
	if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;			//만약 rect2가 정사각형이라면 "rect2은 정사각형이다" 출력
	if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;			//만약 rect3이 정사각형이라면 "rect3은 정사각형이다" 출력
	if(rect4.isSquare()) cout << "rect4는 정사각형이다." << endl;			//만약 rect4가 정사각형이라면 "rect4은 정사각형이다" 출력
}