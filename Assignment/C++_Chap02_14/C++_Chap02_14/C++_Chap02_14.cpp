#include <iostream>
using namespace std;														//Line2 std 이름 공간에 선언된 모든 이름에 std:: 생략

int main() {
	int count = 0;															//Line5 총 알파벳 수를 세기 위한 변수 count 선언 후 0으로 초기화
	int i, j;																//Line6 for문을 실행시킬 변수 i, j 선언
	char c='a';																//Line7 문자변수 c를 선언 후 a로 초기화

	cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";				//Line9 영문 텍스트를 입력하세요. 히스토그램을 그립니다.(줄바꿈) 출력
	cout<<"텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n\n";			//Line10 텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.(줄바꿈) 출력

	int histo[26]={0};														//Line12 히스토그램을 그릴 때 필요한 배열 histo를 총 알파벳 수인 26의 크기로 선언&0으로 초기화
	char en[10000]={0};														//Line13 영문 텍스트를 입력받을 문자열 배열 en을 최대크기 10000으로 선언 후 0으로 초기화
	cin.getline(en, 10000, ';');											//Line14 공백이 포함된 문자열을 입력받을 수 있는 cin.getline으로 문자열을 최대 10000개까지로 지정하고
																			//       입력받은 문자열을 배열en에 저장하고, 끝을 ;으로 표시한다

	for(i=0;i<10000;++i) {													//Line17 i를 0부터 문자열배열 en의 최대크기 10000미만까지 1씩 늘려가며 {}안을 반복실행
		if(isalpha(en[i])) {												//Line18 배열 en[i]안에 저장된 것이 알파벳인지 검사하는 함수 isalpha를 사용하여 알파벳이라면 {}안 실행
			count++;														//Line19 count를 1만큼 늘린다
		}
	}
	cout<<"\n총 알파벳 수 " << count << "\n\n";								//Line22 총 알파벳수 (알파벳 수를 카운트한 변수 count 출력) 출력

	for(i=0;i<10000;++i) {													//Line24 i를 0부터 10000미만까지 1씩 늘려가며 {}안을 반복실행
			en[i] = tolower(en[i]);											//Line25 입력받은 문자열배열 en에 i번째에 저장되어있는 알파벳이 대문자일 경우 소문자로 바꿔준다

			for(j=0;j<26;j++) {												//Line27 j를 0부터 26까지 1씩 늘려가며 {}안을 반복실행
				if(en[i]=='a'+j) {											//Line28 문자열배열 en의 i번째에 저장된 알파벳이 97(a를 의미하는 아스키코드)+j가 의미하는 알파벳과 일치할 때 {}안을 실행
					histo[j]++;												//Line29 histo배열의 j번째 칸에 1을 늘려준다
				}
			}
	}
	

	for(i=0;i<26;++i) {														//Line35 i를 0부터 총 알파벳 수인 26까지 1씩 늘려가면서 {}안을 반복실행
		 cout << (char)(c+i) << " (" << histo[i] << ")" << "\t:\t";			//Line36 a(97)로 초기화한 변수 c에 1씩 늘어나는 변수 i를 더한 수가 의미하는 알파벳을 출력
																			//       + () 안에 histo배열의 i번째 칸에 저장된 숫자를 출력한다
		 for(j=0;j<histo[i];++j) {											//Line38 j를 0부터 앞에서 출력한 histo배열의 i번째 칸에 저장된 수만큼 {}안을 반복실행한다
			 cout << '*';													//Line39 for문이 반복실행되는 만큼 *을 출력한다
		 }
		 cout<<"\n";														//Line41 줄바꿈 출력
	}
}

/*Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help, falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be; */