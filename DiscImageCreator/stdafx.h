// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B

#pragma warning(disable:4710 4711)
#pragma warning(push)
#pragma warning(disable:4091 4191 4365 4514 4668 4820 4987)
#include <stddef.h>
#include <stdio.h>
#include <shlwapi.h>
#include <tchar.h>
#include <time.h>
#if 0
#include <TlHelp32.h>
#endif
#include <windows.h>
#include <winioctl.h>
#include <WinSock.h>
#ifdef UNICODE
#include <fcntl.h>
#include <io.h>
#endif

// XML
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#include <atlbase.h>
#include <atlstr.h>
#include <xmllite.h>
#pragma comment(lib, "xmllite.lib")

// SPTI(need Windows Driver Kit(wdk))
#include <ntddcdrm.h> // inc\api
#include <ntddcdvd.h> // inc\api
#include <ntddmmc.h> // inc\api
#include <ntddscsi.h> // inc\api
#define _NTSCSI_USER_MODE_
#include <scsi.h> // inc\ddk
#undef _NTSCSI_USER_MODE_

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif
#pragma warning(pop)
