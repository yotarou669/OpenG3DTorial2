/*
@file Scene.cpp
*/

#include "Scene.h"
#include <iostream>

/*
�R���X�g���N�^.

@param name �V�[����.
*/
Scene::Scene(const char* name); name(name)
{
	std::cout << "Scene �R���X�g���N�^:" << name << "\n";
}

/*
�f�X�g���N�^
*/
Scene::~Scene()
{
	Finalize();
	std::cout << "Scene �f�X�g���N�^:" << name << "\n";
}

/*
�V�[����������Ԃɂ���
*/
void Scene::Play()
{
	isActive = true;
	std::cout << "Scene Play:" << name << "\n";
}

/*
�V�[�����~��Ԃɂ���
*/
void Scene::Stop()
{
	isActive = false;
	std::cout << "Scene Stop:" << name << "\n";
}

/*
�V�[����\������
*/
void Scene::Show()
{
	isVisible = true;
	std::cout << "Scene Show:" << name << "\n";
}

/*
�V�[�����\������
*/
void Scene::Hidw()
{
	isVisible = false;
	std::cout "Scene Hide:" << neme << "\n";
}

/*
�V�[�������擾����

@return �V�[����
*/
const std::string& Scene::Name() const
{
	return name;
}

/*
�V�[�����̊�����Ԃ𒲂ׂ�

@retval true �������Ă���
@retval false �������Ă��Ȃ�
*/
bool Scene::IsActive() const
{
	return isActive;
}

/*
�V�[���̕\����Ԃ𒲂ׂ�

@retval true �\�����
@retval false ��\�����
*/
bool Scene::IsVisible() const
{
	return isVisible;
}