#include <iostream> // 전처리 지시자
#include <stdio.h> // 전처리 지시자

// c++에서 함수를 사용하고자 한다면?
// 반드시 그 함수의 원형을 미리 정의하여야 합니다.

#include <cstdio>

using namespace std;
// ' ; ' 종결자의 역할을 한다.


int main(){
    // c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
    cout << "Hello";
    cout << " World!" << endl;
    // printf("Hello, World!\n");


    // 1. 변수란? 변할 수 있는 수
    // cf) 상수: 변할 수 없는 수

    /*
    1. 변수의 자료형
    2. 변수의 이름
    3. 변수가 어디에 저장되는가(메모리 영역)?
    */
   int a; // 정수형 변수 a를 선언

   /*
   1. 숫자로 시작할 수 없습니다.
   2. c++에서 예약어로 지정되어 있는 단어는 사용할 수 없습니다.
   3. white space(공백, 탭, 줄바꿈) 문자를 사용할 수 없습니다.
   4. 특수문자(예: !, @, #, $, %, ^, &, *, (, ), -, +, =, {, }, [, ], |, \, :, ;, ", ', <, >, ,, ., ?, /)를 사용할 수 없습니다.
   */

   // ex) int 77a; // 숫자로 시작할 수 없습니다.
   // ex) int return; // 예약어를 사용할 수 없습니다.
   // ex) int aa aa; // 공백을 사용할 수 없습니다.

   int a; // 변수 선언
   a = 7; // 변수 대입

   int b = 3; // 변수 선언과 동시에 초기화
   
   a=5;
   b=3;


   { int b;
        {
        int a;
        b = 3;
        }
        a=5;
   }
   cout << "a=" << a << ", b=" << b << endl; //a=5, b=3

   return 0;
}

// https://www.youtube.com/watch?v=axsHmm-5tmI&list=PLgqG2uj21HgkcfVtlr5rPekQl5VWJEnIB&index=4