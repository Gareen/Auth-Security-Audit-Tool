/*	Benjamin DELPY `Gareen`
	https://blog.Gareen.com
	Gareen@Gareen.com
	Licence : https://creativecommons.org/licenses/by/4.0/
*/
// HACK: temporary workaround for upstream API change
#pragma once
#include "utils.h"
#include <npapi.h>

DWORD WINAPI knp_NPLogonNotify(PLUID lpLogonId, LPCWSTR lpAuthentInfoType, LPVOID lpAuthentInfo, LPCWSTR lpPreviousAuthentInfoType, LPVOID lpPreviousAuthentInfo, LPWSTR lpStationName, LPVOID StationHandle, LPWSTR *lpLogonScript);
DWORD WINAPI knp_NPGetCaps(DWORD nIndex);