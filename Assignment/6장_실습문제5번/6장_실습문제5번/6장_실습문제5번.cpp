#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size);			//source[]에 저장된 int값을 dest[]에 double로 변환 후 저장, size=배열크기
	static void doubleToInt(double source[], int dest[], int size);			//source[]에 저장된 double값을 dest[]에 int로 변환 후 저장, size=배열크기
};

void ArrayUtility::intToDouble(int source[], double dest[], int size) {		//ArrayUtility에 있는 멤버함수 intToDouble 구현부
	for(int i=0;i<size;i++) {				//배열의 크기 size만큼 반복실행
		dest[i]=(double)source[i];			//double dest[i]에 int형 값이 저장되어있는 source[i]의 값을 double로 변환 후 저장
	}
}

void ArrayUtility::doubleToInt(double source[], int dest[], int size) {		//ArrayUtility에 있는 멤버함수 doubleToInt 구현부
	for(int i=0;i<size;i++) {				//배열의 크기 size만큼 반복실행
		dest[i]=(int)source[i];				//int dest[i]에 double형 값이 저장되어있는 source[i]의 값을 int로 변환 후 저장
	}
}

int main() {
	int x[] = {1, 2, 3, 4, 5};					//배열 x에 int형으로 1,2,3,4,5 저장
	double y[5];								//double형 배열 y 생성
	double z[] = {9.9, 8.8, 7.7, 6.6, 5.6};		//배열 z에 double형으로 9.9, 8.8, 7.7, 6.6, 5.6 저장

	ArrayUtility::intToDouble(x, y, 5);			//ArrayUtility의 멤버함수 intToDouble실행(x배열의 값을 double형으로 변환후 y배열에 저장, 배열크기는 5)
	for(int i=0;i<5;i++) {						//배열크기 5만큼 반복실행
		cout << y[i] << ' ';					//y[1], y[2], y[3], y[4], y[5] 출력
	}
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5);			//ArrayUtility의 멤버함수 doubleToInt실행(z배열의 값을 int형으로 변환후 x에 저장, 배열크기는 5)
	for(int i=0;i<5;i++) {						//배열크기 5만큼 반복실행
		cout << x[i] << ' ';					//x[1], x[2], x[3], x[4], x[5] 출력
	}
	cout << endl;
}