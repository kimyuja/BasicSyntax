// BasicSyntax.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello C Plus Plus\n";
    //std::cout << "Hello C Plus Plus" << std::endl;
    //std::cout << "Hello World!\n";
    //std::cout << 12345 << std::endl; // endl : end line
    //

    ///* 
    //    정수형 타입 : int(integer) - 4 byte
    //    실수형 타입 : float - 4 byte
    //    문자형 타입 : char(Character) - 문자 1개
    //    bool형 타입 : bool
    //*/
    //int Number1;
    //Number1 = 10; // 대입 연산자

    //int Number2 = 20; // 변수  초기화
    //float PointNumber = 1.234f;
    //char Word = 'A';
    //bool Condition = true;

    //// 구구단
    //for (int i = 2; i < 10; i++)
    //{
    //    for (int j = 1; j < 10; j++) {
    //        cout << i << " * " << j << " = " << i * j << endl;
    //    }
    //    cout << endl;
    //}

    /*
    * class 설계도 생성 => class 변수 타입을 생성
    * 
    * 정보 은닉 : 프로퍼티/메소드에 접근 권한
    * - public : 공용 - 클래스 바깥 위치에서 접근 가능
    * - private : 전용 - 클래스 내부 위치에서만 접근 가능
    * - protected : 상속 전용 - 상속 받은 클래스에서 접근 가능
    * - 디폴트 : private
    * 
    * - 프로퍼티는 클래스 외부에서 접근하지 못하게 하는 경우가 일반적
    * - 프로퍼티는 private 상태로 설정
    * - 따라서, 프로퍼티에 접근하는 내부 메소드가 필요해짐.
    * - 그러므로, 클래스 외부에서는 메소드만 사용하면 됨.
    */
    

    
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
