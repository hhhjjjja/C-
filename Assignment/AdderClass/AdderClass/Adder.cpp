#include <iostream>
#include "Adder.h"						//Adder.h를 include

Adder::Adder(int a, int b) {			//파라미터 a, b를 가진 Adder 생성자
	op1=a; op2=b;						//op1에 a 저장, op2에 b 저장
}

int Adder::process() {					//덧셈계산 함수
	return op1+op2;						//두 정수 op1과 op2를 더한 값을 반환
}
