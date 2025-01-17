#include "SceneManager.h"

SceneManager::SceneManager()
	: m_Kind(kSceneTitle)
{
	m_pSceneTitle = new SceneTitle;
	m_pSceneGame = new SceneGame;
	m_pSceneGameOver = new SceneGameOver;
}

SceneManager::~SceneManager()
{
	if (m_pSceneTitle != nullptr)
	{
		m_pSceneTitle = nullptr;
		delete m_pSceneTitle;
	}

	if (m_pSceneGame != nullptr)
	{
		m_pSceneGame = nullptr;
		delete m_pSceneGame;
	}

	if (m_pSceneGameOver != nullptr)
	{
		m_pSceneGameOver = nullptr;
		delete m_pSceneGameOver;
	}
}

void SceneManager::Init()
{
	switch (m_Kind)
	{
	case SceneManager::kSceneTitle:
		m_pSceneTitle->Init();
		break;
	case SceneManager::kSceneGame:
		m_pSceneGame->Init();
		break;
	case SceneManager::kSceneGameOver:
		m_pSceneGameOver->Init();
		break;
	}
}

void SceneManager::Update()
{
	switch (m_Kind)
	{
	case SceneManager::kSceneTitle:
		m_pSceneTitle->Update();
		break;
	case SceneManager::kSceneGame:
		m_pSceneGame->Update();
		break;
	case SceneManager::kSceneGameOver:
		m_pSceneGameOver->Update();
		break;
	}
}

void SceneManager::Draw()
{
	switch (m_Kind)
	{
	case SceneManager::kSceneTitle:
		m_pSceneTitle->Draw();
		break;
	case SceneManager::kSceneGame:
		m_pSceneGame->Draw();
		break;
	case SceneManager::kSceneGameOver:
		m_pSceneGameOver->Draw();
		break;
	}
}

void SceneManager::End()
{
	switch (m_Kind)
	{
	case SceneManager::kSceneTitle:
		m_pSceneTitle->End();
		break;
	case SceneManager::kSceneGame:
		m_pSceneGame->End();
		break;
	case SceneManager::kSceneGameOver:
		m_pSceneGameOver->End();
		break;
	}
}
