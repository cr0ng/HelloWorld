#define _CRT_SECURE_NO_WARNINGS

#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK,__FILE__, __LINE__ )
#include <crtdbg.h>

#include <iostream> // 입출력 관련 (cout)
#include <stdio.h>
#include <cstdio>  // stdio.h에 네임스페이스 추가한 래퍼
#include "header.h"
#include "TestMath.h"
//#include "Practice0905.h"
//#include "lesson0908.h"
//#include "lesson0909.h"
//#include "lesson0910.h"
//#include "lesson0911.h"
//#include "lesson0912.h"
//#include "HW0906.h"
//#include "EscapeMaze.h"
//#include "baekjoon.h"
//#include "HW0913.h"
//#include "Position.h"
//#include "BlackJack.h"
//#include "lesson0915.h"

//#include "lesson0916.h"
//#include "lesson0917.h"
//#include "lesson0918.h"
//#include "lesson0919.h"

//#include "HW0920.h"
//#include "lesson0922.h"
//#include "lesson0923.h"
#include "lesson0924.h"
#include "Position.h"

//using namespace std;

//int lesson0902();
//int lesson0903();
//int lesson0904();
//int TurnBattle();

int main() // 엔트리 포인트 (코드가 시작되는 곳)
{	
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	srand(time(0));

	/*HW0920 hw0920;
	hw0920.BattleShip();*/

	//lesson0922 lesson0922;
	//lesson0922.TestBattlerShip();
	//lesson0922.TestTree();

	//lesson0923 lesson0923;
	//lesson0923.TestTemplateClass();
	//lesson0923.TestCalculator();
	//lesson0923.TestVector();
	//lesson0923.TestVectorPracice();

	lesson0924 lesson0924;
	//lesson0924.TestLamda();
	//lesson0924.TestLambda2();
	//lesson0924.TestLambdaPractice();
	//lesson0924.TestSet();
	//lesson0924.TestSetPractice();
	//lesson0924.TestMap();
	lesson0924.TestUnOrderedMap();


	/*Position posA(1, 2);
	Position posB(3, 1);
	Position posC = posA + posB;
	Position posD = posA - posB;*/
	
	//Day0916 day0916;
	//day0916.ClassInstance();
	//day0916.TestAnimal();
	//day0916.TestTiger();
	/*day0916.TestCat();
	printf("\n\n\n\n");
	day0916.TestBird();
	printf("\n\n\n\n");
	day0916.TestRabbit();*/
	//day0916.TestMonsters();
	/*day0916.ZombieTest();
	printf("\n\n");
	day0916.GoblinTest();
	printf("\n\n");
	day0916.OakTest();
	printf("\n\n");
	day0916.SkeletonTest();
	printf("\n\n");
	day0916.MazePlayerTest();*/
	
	/*Day0917 day0917;
	day0917.TestAbstractClass();*/

	//lesson0918 lesson0918;
	//lesson0918.TestSingleLinkedList();
	//lesson0918.PracticeLinkedListPrint();

	//lesson0919 lesson0919;
	//lesson0919.TestStack();
	//lesson0919.TestQueue();
	//lesson0919.TestQueue2();
	//lesson0919.TestSwallowCopy();

	//Position pos2;
	//Position pos2 = Position(); // 안되는 이유 기본생성자가 없어서

	//Practice0905_02_05();
	
	//lesson0902();	// 9월 2일 내용
	//lesson0903();	// 9월 3일 내용
	//lesson0904();	// 9월 4일 내용
	//lesson0905();	// 9월 5일 내용
	//HW0906(); // 1주차 주말 과제
	//Lesson0908();	// 9월 8일 내용
	//Lesson0909();	// 9월 9일 내용
	//Lesson0910();	// 9월 10일 내용
	//Lesson0911();	// 9월 11일 내용
	//MazeEscapeRun();
	//baekjoon1();

	//Lesson0912();	// 9월 12일 내용
	//OperatorOverloading0912();
	//Practice1_0912();
	//BattleReward();
	//Practice3_0909();
	//HW0913_1();
	//Day0915_WeekPracticeBlackjack();


	return 0; 

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

