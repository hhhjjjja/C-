#ifndef BOX_H											//조건 컴파일문
#define BOX_H											//조건 컴파일문

class Box {												//Box 클래스 생성
	int width, height;									//박스의 폭(width)과 높이(height)를 의미하는 변수
	char fill;											//박스의 내부를 채우는 문자
public:													//외부에서 접근이 가능하도록 한다
	Box(int w, int h) {setSize(w, h); fill = '*';}		/*너비(w)와 높이(h) 파라미터를 가진 생성자. setSize함수에서 박스의 너비와 높이
														  파라미터를 지정해주고, fill='*'로 박스내부를 채운다*/
	void setFill(char f) {fill = f;}					//박스 내부를 채울 문자(f 파라미터)를 fill에 저장
	void setSize(int w, int h) {width=w; height=h;}		//width=w, height=h 각각 지정
	void draw();										//박스 그리기
};
#endif													//조건 컴파일문 Box.h를 여러번 include 해도 문제없게 하기 위함
