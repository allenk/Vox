// ******************************************************************************
// Filename:    VoxSettings.h
// Project:     Vox
// Author:      Steven Ball
//
// Purpose:
//   Vox settings, initalized at the application creation and contains all of
//   the run time settings and configuration that is loaded for Vox.
// 
// Revision History:
//   Initial Revision - 27/10/15
//
// Copyright (c) 2005-2016, Steven Ball
// ******************************************************************************

#pragma once

#include <string>
using namespace std;

class VoxGame;


class VoxSettings
{
public:
	/* Public methods */
	VoxSettings();
	~VoxSettings();

	// Load settings
	void LoadSettings();

	// Save settings
	void SaveSettings();

	// Load options
	void LoadOptions();

	// Save options
	void SaveOptions();

protected:
	/* Protected methods */

private:
	/* Private methods */

public:
	/* Public members */
	
	// Gameplay
	bool m_invertedMouse;

	// Graphics
	int m_windowWidth;
	int m_windowHeight;
	bool m_vsync;
	bool m_fullscreen;
	bool m_deferredRendering;
	bool m_shadows;
	bool m_blur;
	bool m_ssao;
	bool m_dynamicLighting;
	bool m_msaa;
	bool m_instancedParticles;
	bool m_faceMerging;

	// Landscape generation
	float m_landscapeOctaves;
	float m_landscapePersistence;
	float m_landscapeScale;
	float m_mountainOctaves;
	float m_mountainPersistence;
	float m_mountainScale;
	float m_mountainMultiplier;

	// Debug
	float m_loaderRadius;
	bool m_debugRendering;
	bool m_wireframeRendering;
	bool m_stepUpdating;
	bool m_showDebugGUI;
	string m_gameMode;
	string m_version;

protected:
	/* Protected members */

private:
	/* Private members */
};
