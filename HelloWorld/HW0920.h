#pragma once
class HW0920
{
public:
	/// <summary>
	/// ������ �����ϱ� ���� ��� �Լ� ���� �Լ�
	/// </summary>
	void BattleShip();

	/// <summary>
	/// ������ �� ���� ���� ���� �� �� ���� �� �ȿ� �������ϴ� �ȳ� ���� ���
	/// </summary>
	void StartBattleShip();

	/// <summary>
	/// 10x10 ũ���� �� ���
	/// </summary>
	void DrawBattleMap();

	/// <summary>
	/// �÷��̾ ��ǥ�� �Է¹޾ƿ���
	/// �̹� ������ ��ǥ�� ��� �ٽ� �Է��ϵ��� �ϱ�
	/// </summary>
	void PlayerAttack(int X, int Y);

	/// <summary>
	/// �÷��̾ �Է��� ��ǥ�� �������� �������� Ȯ���ϰ�, �ʿ� ���
	/// �� �Լ��� ��� ĭ�� ���߽�Ű�� "��ħ" �޼��� ���
	/// </summary>
	void AttackResult();

	/// <summary>
	/// ���� �����Ű��
	/// </summary>
	void GameOveR();
};
