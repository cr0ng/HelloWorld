#pragma once
class HW0920
{
public:
	/// <summary>
	/// 게임을 시작하기 위한 모든 함수 담을 함수
	/// </summary>
	void BattleShip();

	/// <summary>
	/// 시작할 때 게임 시작 문구 및 몇 번의 턴 안에 끝내야하는 안내 문구 출력
	/// </summary>
	void StartBattleShip();

	/// <summary>
	/// 10x10 크기의 맵 출력
	/// </summary>
	void DrawBattleMap();

	/// <summary>
	/// 플레이어가 좌표를 입력받아오기
	/// 이미 공격한 좌표일 경우 다시 입력하도록 하기
	/// </summary>
	void PlayerAttack(int X, int Y);

	/// <summary>
	/// 플레이어가 입력한 좌표가 명중인지 실패인지 확인하고, 맵에 기록
	/// 한 함선의 모든 칸을 명중시키면 "격침" 메세지 출력
	/// </summary>
	void AttackResult();

	/// <summary>
	/// 게임 종료시키기
	/// </summary>
	void GameOveR();
};
