// DllDemo.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "DllDemo.h"


// ���ǵ���������һ��ʾ��
DLLDEMO_API int nDllDemo=10;

// ���ǵ���������һ��ʾ����
DLLDEMO_API int fnDllDemo(int input)
{
    return input;
}

// ���ǵ���������һ��ʾ����
DLLDEMO_API int fnExternCDllDemo(int input)
{
	return input;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� DllDemo.h
CDllDemo::CDllDemo()
{
    return;
}

// �й��ඨ�����Ϣ������� DllDemo.h
int CDllDemo::Max(int a,int b)
{
	return a>b?a:b;
}
