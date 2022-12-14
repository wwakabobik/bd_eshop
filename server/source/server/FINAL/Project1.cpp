//---------------------------------------------------------------------------
#include <condefs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SysUtils.hpp>
#include <WebBroker.hpp>
#include <CGIApp.hpp>
#pragma hdrstop
USEFORM("Project3.cpp", WebModule1); /* TWebModule: File Type */
//---------------------------------------------------------------------------
#define Application Webbroker::Application
#pragma link "cgiapp.obj"
#pragma link "webbroker.obj"
#pragma link "ReqMulti.obj"
#pragma link "WebSnap.lib"
#pragma link "WebDSnap.lib"
//---------------------------------------------------------------------------
int main(int argc, char* argv[])
{
  try
  {
    Application->Initialize();
    Application->CreateForm(__classid(TWebModule1), &WebModule1);
                 Application->Run();
  }
  catch (Exception &exception)
  {
    Sysutils::ShowException(&exception, System::ExceptAddr());
  }
  return 0;
}
//---------------------------------------------------------------------------
