// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DLLDEMO_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DLLDEMO_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DLLDEMO_EXPORTS
#define DLLDEMO_API __declspec(dllexport)
#else
#define DLLDEMO_API __declspec(dllimport)
#endif

// �����Ǵ� DllDemo.dll ������
class DLLDEMO_API CDllDemo {
public:
	CDllDemo(void);
	// TODO:  �ڴ�������ķ�����
	int Max(int, int);
};

extern "C" extern DLLDEMO_API int nDllDemo;

DLLDEMO_API int fnDllDemo(int);

extern "C" DLLDEMO_API int fnExternCDllDemo(int);
