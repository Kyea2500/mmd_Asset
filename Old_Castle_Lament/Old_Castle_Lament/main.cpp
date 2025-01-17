#include "DxLib.h"
#include "Player/Player.h"
#include"GameProcess/Game.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// フルスクリーンではなく、ウィンドウモードで開くようにする
	ChangeWindowMode(1);

	SetGraphMode(Game::kScreenWidth, Game::kScreenHeight, Game::kColorBitNum);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	// 描画先を裏画面にする
	SetDrawScreen(DX_SCREEN_BACK);
	
	Player* m_player = new Player;	//コンストラクタに入る
	m_player->Init();				//初期化処理に入る



	// ゲームループ
	while (ProcessMessage() == 0)
	{
		// ループが始まった時間を覚えておく
		LONGLONG time = GetNowHiPerformanceCount();
		// 画面をクリアに
		ClearDrawScreen();

		// ここにゲームの処理を書く
		m_player->Update();//更新処理に入る
		m_player->Draw();	//描画処理に入る





		// 画面の切り替わりを待つ必要がある
		ScreenFlip();
		//FPS(Frame Per Second)60に固定

		// escキーで終了(いったん終了)
		if (CheckHitKey(KEY_INPUT_ESCAPE))	break;

		while (GetNowHiPerformanceCount() - time < 16667)
		{
		}

	}

	m_player->End();//解放処理に入る

	m_player = nullptr; //ポインタを無効値
	delete(m_player);	//デストラクタが呼ばれる

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}