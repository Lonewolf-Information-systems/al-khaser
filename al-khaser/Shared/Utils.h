BOOL IsWoW64();
BOOL Is_RegKeyValueExists(HKEY hKey, TCHAR* lpSubKey, TCHAR* lpValueName, TCHAR* search_str);
BOOL Is_RegKeyExists(HKEY hKey, TCHAR* lpSubKey);
BOOL is_FileExists(TCHAR* szPath);
BOOL is_DirectoryExists(TCHAR* szPath);
BOOL check_mac_addr(TCHAR* szMac);
BOOL check_adapter_name(TCHAR* szName);
BOOL GetOSDisplayString(LPTSTR pszOS);
DWORD GetProccessIDByName(TCHAR* szProcessNameTarget);
DWORD GetProcessIdFromName(LPCTSTR ProcessName);
BOOL SetPrivilege(HANDLE, LPCTSTR, BOOL);
BOOL SetDebugPrivileges(VOID);
DWORD GetMainThreadId(DWORD pid);
BOOL InitWMI(IWbemServices **pSvc, IWbemLocator **pLoc, TCHAR* szNetworkResource);
BOOL ExecWMIQuery(IWbemServices **pSvc, IWbemLocator **pLoc, IEnumWbemClassObject **pEnumerator, TCHAR* szQuery);
ULONG get_idt_base();
ULONG get_ldt_base();
ULONG get_gdt_base();
UCHAR* get_str_base();
BOOL IsElevated();
BOOL find_str_in_data(PBYTE needle, size_t needleLen, PBYTE haystack, size_t haystackLen);
UINT enum_system_firmware_tables(_In_ DWORD FirmwareTableProviderSignature, _Out_ PVOID pFirmwareTableBuffer, _In_ DWORD BufferSize);
PBYTE get_system_firmware(_In_ DWORD signature, _In_ DWORD table, _Out_ PDWORD pBufferSize);

#define	MALLOC(x)	HeapAlloc(GetProcessHeap(), 0, x)
#define FREE(x)		HeapFree(GetProcessHeap(), 0, x)

#if _WIN32 || _WIN64
#if _WIN64
#define ENV64BIT
#else
#define ENV32BIT
#endif
#endif