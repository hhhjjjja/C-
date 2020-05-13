#ifndef CIRCLE_H			//조건 컴파일문. Circle.h를 여러번 컴파일해도
#define CIRCLE_H			//문제 없게 하기 위함

class Circle{
	int radius;				//radius = 원의 반지름
public:
	Circle();				//생성자
	~Circle();				//소멸자
	void setRadius(int r);	//원의 반지름을 r로 입력받으면 radius에 저장
	double getArea();		//원넓이를 계산하고 double형으로 반환하는 멤버함수
};
#endif						//조건컴파일문 끝
