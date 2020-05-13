#include "Circle.h"					//Circle.h를 include

Circle::Circle() {
	radius = 1;						//radius를 1로 초기화
}
Circle::~Circle() { }				//소멸자
void Circle::setRadius(int r) {
	radius = r;						//입력받은 원의 반지름 r을 radius에 저장
}
double Circle::getArea() {
	return 3.14*radius*radius;		//원의 넓이를 구해서 반환
}
