#ifndef ADDER_H				//조건 컴파일문
#define ADDER_H				//조건 컴파일문

class Adder {
	int op1, op2;			//계산하는 두개의 정수를 저장하는 변수
public:						//외부에서 접근이 가능하도록 함
	Adder(int a, int b);	//Adder.cpp에서 구현되어 있는a, b를 파라미터로 가지는 생성자
	int process();			//Adder.cpp에서 구현되어 있는 합 계산 함수선언
};
#endif						//조건 컴파일문 Adder.h를 여러번 include해도 문제 없게 하기 위함


