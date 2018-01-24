// DllDynamicTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>
#include "DllDemo.h"

/*��̬���ö�̬�ⲽ�裺
1������һ������ָ�룬��ָ����������Ҫ����õ�DLL�����������Ǻϡ�
2��ͨ��Win32 API����LoadLibrary������ʽ�ĵ���DLL���˺�������DLL��ʵ�������
3��ͨ��Win32 API����GetProcAddress������ȡҪ���õ�DLL�ĺ�����ַ, �ѽ�������Զ��庯����ָ�����͡�
4��ʹ�ú���ָ��������DLL������
5����������ɺ�ͨ��Win32 API����FreeLibrary()�ͷ�DLL������*/

int main()
{
	HMODULE hModule = LoadLibrary(_T("DllDemo.dll"));
	typedef int(*TYPE_fnDllDemo) (int);//���庯��ָ��  
	typedef int(*TYPE_fnExternCDllDemo) (int);//���庯��ָ��  
	//���������
	CDllDemo* pCDllDemo = (CDllDemo*)malloc(sizeof(CDllDemo));

	TYPE_fnDllDemo fnDllDemo = (TYPE_fnDllDemo)GetProcAddress(hModule, "?fnDllDemo@@YAHH@Z");
	int *nDllDemo = (int *)GetProcAddress(hModule, "nDllDemo");
	TYPE_fnExternCDllDemo fnExternCDllDemo = (TYPE_fnExternCDllDemo)GetProcAddress(hModule, "fnExternCDllDemo");
	
	if (pCDllDemo != NULL)
		//printf("pCDllDemo->Max(32,42) = %d\n", pCDllDemo->Max(32, 42));//Dll������ĵ���̫�鷳����ΪDLL��������ΪC����������Ƶġ�
	if (fnDllDemo != NULL)
		printf("fnDllDemo(32) = %d\n", fnDllDemo(32));
	if (nDllDemo != NULL)
		printf("*nDllDemo = %d\n", *nDllDemo);
	if (fnExternCDllDemo != NULL)
		printf("fnExternCDllDemo(22) = %d\n", fnExternCDllDemo(22));
	_tsystem(_T("pause"));
    return 0;
}

