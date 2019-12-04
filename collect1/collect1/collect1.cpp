#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <shellapi.h>

int main()
{


	//WinExec("C:\\Users\\Administrator\\source\\repos\\ConsoleApplication11\\ConsoleApplication11\\x64\\Release\\DCMTK\\bin\\storescp.exe -aet myaet 104 +xy -fe .dcm", SW_SHOWMAXIMIZED);
	WinExec("D:\\ultrasound\\ultrasound\\x64\\Release\\DCMTK\\bin\\storescp.exe -aet myaet -od D:\\collect1 104 +xy -fe .dcm", SW_SHOWMAXIMIZED);
	system("pause");
	return 0;





}