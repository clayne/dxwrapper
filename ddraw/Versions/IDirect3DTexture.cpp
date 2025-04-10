/**
* Copyright (C) 2025 Elisha Riedlinger
*
* This software is  provided 'as-is', without any express  or implied  warranty. In no event will the
* authors be held liable for any damages arising from the use of this software.
* Permission  is granted  to anyone  to use  this software  for  any  purpose,  including  commercial
* applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*   1. The origin of this software must not be misrepresented; you must not claim that you  wrote the
*      original  software. If you use this  software  in a product, an  acknowledgment in the product
*      documentation would be appreciated but is not required.
*   2. Altered source versions must  be plainly  marked as such, and  must not be  misrepresented  as
*      being the original software.
*   3. This notice may not be removed or altered from any source distribution.
*/

#include "..\ddraw.h"

HRESULT m_IDirect3DTexture::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
	if (!ProxyInterface)
	{
		if (ppvObj)
		{
			*ppvObj = nullptr;
		}
		return E_NOINTERFACE;
	}
	return ProxyInterface->QueryInterface(ReplaceIIDUnknown(riid, WrapperID), ppvObj, DirectXVersion);
}

ULONG m_IDirect3DTexture::AddRef()
{
	if (!ProxyInterface)
	{
		return 0;
	}
	return ProxyInterface->AddRef(DirectXVersion);
}

ULONG m_IDirect3DTexture::Release()
{
	if (!ProxyInterface)
	{
		return 0;
	}
	return ProxyInterface->Release(DirectXVersion);
}

HRESULT m_IDirect3DTexture::Initialize(LPDIRECT3DDEVICE a, LPDIRECTDRAWSURFACE b)
{
	if (!ProxyInterface)
	{
		return DDERR_INVALIDOBJECT;
	}
	return ProxyInterface->Initialize(a, b);
}

HRESULT m_IDirect3DTexture::GetHandle(LPDIRECT3DDEVICE a, LPD3DTEXTUREHANDLE b)
{
	if (!ProxyInterface)
	{
		return DDERR_INVALIDOBJECT;
	}
	return ProxyInterface->GetHandle((LPDIRECT3DDEVICE2)a, b);
}

HRESULT m_IDirect3DTexture::PaletteChanged(DWORD a, DWORD b)
{
	if (!ProxyInterface)
	{
		return DDERR_INVALIDOBJECT;
	}
	return ProxyInterface->PaletteChanged(a, b);
}

HRESULT m_IDirect3DTexture::Load(LPDIRECT3DTEXTURE a)
{
	if (!ProxyInterface)
	{
		return DDERR_INVALIDOBJECT;
	}
	return ProxyInterface->Load((LPDIRECT3DTEXTURE2)a);
}

HRESULT m_IDirect3DTexture::Unload()
{
	if (!ProxyInterface)
	{
		return DDERR_INVALIDOBJECT;
	}
	return ProxyInterface->Unload();
}
