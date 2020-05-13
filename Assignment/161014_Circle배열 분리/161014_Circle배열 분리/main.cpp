#include <iostream>
#include "Circle.h"									//Circle.h를 include

using namespace std;

int main() {
	cout << "생성하고자 하는 원의 개수?";			//생성하고자 하는 원의 개수? 출력
	int n, radius;									//n=원의 개수, radius=원의 반지름
	cin >> n;										//n에 원의 개수를 입력
	if(n <= 0) return 0;							//입력받은 n이 0보다 작거나같으면 0반환
	Circle *pArray = new Circle [n];				//n개의 Circle배열 생성
	for(int i=0;i<n;++i) {							//i가 0부터 n보다 작을때까지 +1하면서 {}반복실행 
		cout << "원" << i+1 << ": ";				//"원 (i+1) : "출력 -> ()안은 {}가 한번실행되면 1, 2번실행=2...
		cin >> radius;								//radius에 원의 반지름을 입력
		pArray[i].setRadius(radius);				//각 Circle 객체를 입력받은 반지름으로 초기화
	}
	int count =0;											//카운트 변수
	Circle*p = pArray;										//pArray를 안전하게 사용하기 위한 포인터 p
	for(int i=0;i<n;++i) {									//i가 0부터 n보다 작을때까지 +1하면서 {}반복실행
		cout << p->getArea() << ' ';						//getArea에서 반환된 원의 면적 출력
		if(p->getArea() >= 100 && p->getArea() <= 200)		//면적이 100에서 200사이인 원의 개수를 카운트
			count++;										//위 조건을 만족하면 count를 +1
		p++;												//다음 배열로 넘어감
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;	//count 출력
	delete [] pArray;															//객체 배열 소멸
}
