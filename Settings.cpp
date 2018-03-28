/**
* Overlord Project
* Copyright (C) 2016-2017 RangeMachine
*/

#include "Settings.h"

#include "ImGui/imgui.h"

Settings* Settings::m_pInstance;

Settings::Settings()
{
	this->bESPEnabled = false;

	this->bESPBox = false;
	this->bESPHealth = false;
	this->bESPName = false;
	this->bESPDistance = false;
	this->bESPHead = false;
	this->bESPSnapline = false;

	this->bVisualsCrosshair = false;
	this->bVisualsFPS = false;

	this->bAccuracyNoSpread = false;
	this->fSpread = 1.f;
	this->bAccuracyNoRecoil = false;
	this->fRecoil = 1.f;

	this->Menu = false;
}

Settings::~Settings()
{
}

Settings* Settings::GetInstance()
{
	if (!m_pInstance)
		m_pInstance = new Settings();

	return m_pInstance;
}
