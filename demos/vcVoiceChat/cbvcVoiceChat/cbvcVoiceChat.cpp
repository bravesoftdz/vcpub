//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("cbvcVoiceChat.res");
USEFORM("u_cbvcVoiceChat_main.cpp", c_form_main);
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
