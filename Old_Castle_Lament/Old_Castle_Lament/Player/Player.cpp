#include "Player.h"
#include"../�v���W�F�N�g�ɒǉ����ׂ��t�@�C��_VC�p/DxLib.h"
#include"../GameProcess/Game.h"
#include"../GameProcess/Pad.h"
namespace
{
	// �L�����N�^�[�O���t�B�b�N�̕��ƍ���
	constexpr int kGraphWidth = 32;
	constexpr int kGraphHeight = 32;

	constexpr int kShotGraphWidth = 48;
	constexpr int kShotGraphHeight = 32;
	// �A�j���[�V�����̃R�}��
	constexpr int kIdleAnimNum = 2;
	constexpr int kRunAnimNum = 8;
	constexpr int kAttackAnimNum = 8;
	constexpr int kDeadAnimNum = 8;

	constexpr int kShotIce_AnimNum = 10;
	constexpr int kShotThunder_AnimNum = 16;
	constexpr int kShotAir_AnimNum = 14;

	// �A�j���[�V����1�R�}�̃t���[����
	constexpr int kSingleAnimFrame = 5;

	// �L�����N�^�[�̈ړ����x
	constexpr float kSpeed = 3.0f;

	// �v���C���[�̖��@(�e)�̑��x
	constexpr float IceShotSpeed = 6.0f;
	constexpr float ThunderShotSpeed = 9.0f;
	constexpr float AirShotSpeed = 12.0f;

	// �L�����N�^�[��X��
	constexpr float kPosX = 320.0f;
	constexpr float kPosY = Game::kScreenHeight - 128.0f;

	// �W�����v����
	constexpr float kJumpPower = 10.0f; // �W�����v�̉���
	// �_���[�W�H�������̖��G����
	constexpr int kDamageBlinkFrame = 120;

	// �v���C���[�̏���HP
	constexpr int kMaxHp = 8;

	// ���S���o
	constexpr int kDeadStopFrame = 30;    // ���񂾏u�ԂɎ~�܂鎞��
	constexpr float kDeadJumpSpeed = -4.0f; // ���񂾂��Ɣ�яオ�鏉��

	// �U���̃N�[���^�C��(�A�˂�}���鏈��)
	constexpr float kCoolTimeAttack = 6.0f;
	constexpr float kCoolTimeChant = 120.0f;

}
Player::Player():
	m_handleIdle(-1),
	m_handleMove(-1),
	m_handleAttack(-1),
	m_handleIce_Shot(-1),
	m_handleThunder_Shot(-1),
	m_handleAir_Shot(-1),	
	m_handleLife(-1),
	m_handleDead(-1),
	m_isDead(false),
	m_pos(kPosX, kPosY),
	shot_pos(m_pos.x, m_pos.y),
	m_isDirLeft(false),
	m_isDirRight(false),
	m_isDirUp(false),
	m_isDirDown(false),
	m_ishir(false),
	m_animFrame(0),
	m_isMove(false),
	m_isSpeed(kSpeed),
	m_isDash(false),
	m_DashSpeed(0.0f),
	m_isLastDashButton(false),
	m_isAttack(false),
	m_isShot(false),
	m_ShotBotton(false),
	m_isChange(false),
	m_isChargingFrame(0.0f),
	m_Change(0)

{
}

Player::~Player()
{
}

void Player::Init()
{
	m_handleIdle = LoadGraph(L"../date/image/player_idle.png");
	m_handleMove = LoadGraph(L"../date/image/player_run.png");
	m_handleAttack = LoadGraph(L"../date/image/player_attack.png");
	m_handleIce_Shot = LoadGraph(L"../date/image/IceShot.png");
	m_handleThunder_Shot = LoadGraph(L"../date/image/ThunderShot.png");
	m_handleAir_Shot = LoadGraph(L"../date/image/AirShot.png");
	m_handleDead = LoadGraph(L"../date/image/player_dead.png");
}

void Player::Update()
{
	if (!m_isDead)
	{
		UpdateNormal();
	}
	if(m_isDead)
	{
		UpdateDead();
	}
}

void Player::OnDamage()
{
}

void Player::UpdateNormal()
{
}

void Player::UpdateDead()
{
}

void Player::UpdateMove()
{
}

void Player::UpdateAttack()
{
}

void Player::UpdateDash()
{
}

void Player::UpdateChage()
{
}

void Player::UpdateShot()
{
}

void Player::Draw()
{
}

void Player::DrawShot()
{
}


void Player::End()
{
	DeleteGraph(m_handleIdle);
	DeleteGraph(m_handleMove);
	DeleteGraph(m_handleAttack);
	DeleteGraph(m_handleIce_Shot);
	DeleteGraph(m_handleThunder_Shot);
	DeleteGraph(m_handleAir_Shot);
	DeleteGraph(m_handleDead);
}
