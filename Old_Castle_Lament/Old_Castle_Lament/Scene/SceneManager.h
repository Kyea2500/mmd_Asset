#pragma once
#include "SceneTitle.h"
#include "SceneGame.h"
#include "SceneGameOver.h"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void Init();
	void Update();
	void Draw();
	void End();

private:

	//SceneKind m_kind�ƈȉ��̏����͓����Ӗ�����
	enum SceneKind
	{
		kSceneTitle,
		kSceneGame,
		kSceneGameOver
	}m_Kind;

	SceneTitle* m_pSceneTitle;
	SceneGame* m_pSceneGame;
	SceneGameOver* m_pSceneGameOver;


};

