#ifndef CALCULATOR_H		//조건 컴파일문
#define CALCULATOR_H		//조건 컴파일문

class Calculator {
public:						//외부에서 접근이 가능하도록 함
	int x, y;				//run()에서 두 개의 정수를 입력받고 다른 파일에서도 사용가능하도록 저장할 변수
	void run();				//Calculator.cpp에서 구현되어 있는 계산기 실행함수 선언
};

#endif						//조건 컴파일문 Calculator.h를 여러번 include해도 문제 없게 하기 위함


