//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("cbMgClient.res");
USEFORM("u_cbMgClient_main.cpp", c_form_main);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(Tc_form_main), &c_form_main);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	return 0;
}
//---------------------------------------------------------------------------
