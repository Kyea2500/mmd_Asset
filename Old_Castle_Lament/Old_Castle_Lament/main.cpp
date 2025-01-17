#include "DxLib.h"
#include "Player/Player.h"
#include"GameProcess/Game.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// �t���X�N���[���ł͂Ȃ��A�E�B���h�E���[�h�ŊJ���悤�ɂ���
	ChangeWindowMode(1);

	SetGraphMode(Game::kScreenWidth, Game::kScreenHeight, Game::kColorBitNum);

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	// �`���𗠉�ʂɂ���
	SetDrawScreen(DX_SCREEN_BACK);
	
	Player* m_player = new Player;	//�R���X�g���N�^�ɓ���
	m_player->Init();				//�����������ɓ���



	// �Q�[�����[�v
	while (ProcessMessage() == 0)
	{
		// ���[�v���n�܂������Ԃ��o���Ă���
		LONGLONG time = GetNowHiPerformanceCount();
		// ��ʂ��N���A��
		ClearDrawScreen();

		// �����ɃQ�[���̏���������
		m_player->Update();//�X�V�����ɓ���
		m_player->Draw();	//�`�揈���ɓ���





		// ��ʂ̐؂�ւ���҂K�v������
		ScreenFlip();
		//FPS(Frame Per Second)60�ɌŒ�

		// esc�L�[�ŏI��(��������I��)
		if (CheckHitKey(KEY_INPUT_ESCAPE))	break;

		while (GetNowHiPerformanceCount() - time < 16667)
		{
		}

	}

	m_player->End();//��������ɓ���

	m_player = nullptr; //�|�C���^�𖳌��l
	delete(m_player);	//�f�X�g���N�^���Ă΂��

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}