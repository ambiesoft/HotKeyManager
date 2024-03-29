﻿
#pragma once
#include "CHotKeyManagerDialog.h"
#include "exported.h"



CHotKeyManagerManipulator::CHotKeyManagerManipulator(CWnd* pParent, FnGetNameFromID fnGetNameFromID)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	// m_pParent = new CWnd;
	m_pParent = pParent;
	m_pDialog = new CHotKeyManagerDialog(m_pParent, fnGetNameFromID);
}
CHotKeyManagerManipulator::~CHotKeyManagerManipulator()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	delete m_pDialog;
	// delete m_pParent;
}
BOOL CHotKeyManagerManipulator::LoadDataFromIni(LPCWSTR pIniFile)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	return m_pDialog->LoadFromIni(pIniFile);
}
BOOL CHotKeyManagerManipulator::SaveDataToIni(LPCWSTR pIniFile)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	return m_pDialog->SaveToIni(pIniFile);
}

BOOL CHotKeyManagerManipulator::ShowDialog()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	return m_pDialog->DoModal() == IDOK;
}