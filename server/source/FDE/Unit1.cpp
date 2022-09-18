//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
TCursor OldCursor = Screen->Cursor;
Screen->Cursor = crHourGlass;
IBDatabase1->Params->Clear();
IBDatabase1->Params->Add("USER '" + TUserName->Text + "'");
IBDatabase1->Params->Add("PASSWORD '" + TPassword->Text + "'");
IBDatabase1->Params->Add("PAGE_SIZE = " + CBPageSize->Text);
IBDatabase1->Params->Add("LENGTH = " + TLength->Text);
IBDatabase1->Params->Add("DEFAULT CHARACTER SET " + CBCharSet->Text);
AnsiString DBName = "";
if  ((CBServerName->Visible) &&
(Trim(CBServerName->Text) != ""))
{ CBServerName->Text = Trim(CBServerName->Text);
switch  (CBProtocol->ItemIndex)
{ case  0: DBName = "\\\\" + CBServerName->Text + "\\"; break ; // NamedPipe
case  1: DBName = CBServerName->Text + "@"; break ; // SPX
case  2: DBName = CBServerName->Text + ":"; break ; // TCP
}
}
for  ( int  I = 0; I < Memo1->Lines->Count; I++)
IBDatabase1->Params->Add(Memo1->Lines->Strings[I]);
IBDatabase1->DatabaseName = DBName + TDatabase->Text;
IBDatabase1->SQLDialect = StrToInt(SQLDialect->Text);
try
{ IBDatabase1->CreateDatabase(); }
catch  (...)
{ Screen->Cursor = OldCursor;
return ;
}
Application->MessageBox("Database created",
"Database", MB_OK + MB_ICONINFORMATION);
IBDatabase1->Close();
Screen->Cursor = OldCursor;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
if (OpenDialog1->Execute())
TDatabase->Text=OpenDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
if (OpenDialog1->Execute())
TSecondaryDatabase->Text=OpenDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Memo1->Lines->Add("FILE '" + TSecondaryDatabase->Text + "' LENGTH " + TLength2->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{

IBDatabase1->Params->Clear();
IBDatabase1->Params->Add("user_name=" + TUserName->Text);
IBDatabase1->Params->Add("password=" + TPassword->Text);
IBDatabase1->Params->Add("lc_ctype=" + CBCharSet->Items->Strings[CBCharSet->ItemIndex]);
IBDatabase1->SQLDialect=StrToInt(SQLDialect->Items->Strings[SQLDialect->ItemIndex]);
IBDatabase1->DatabaseName=TDatabase->Text;
IBDatabase1->Connected=true;
CBTables->Items->LoadFromFile("tables.ini");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
if (Button4->Caption=="Activate Data Set")
{
IBDataSet1->SelectSQL->Text=Memo3->Text;
IBDataSet1->Active=true;
Button4->Caption="Deactivate Data Set";
}
else
{
IBDataSet1->Active=false;
Button4->Caption="Activate Data Set";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
IBQuery1->SQL->Text=Memo2->Text;
IBQuery1->ExecSQL();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
Memo2->Lines->Add(SQLStatement->Items->Strings[SQLStatement->ItemIndex]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
Memo3->Lines->Add(SQLStatement->Items->Strings[SQLStatement->ItemIndex]);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CBServerTypeChange(TObject *Sender)
{
if (CBServerType->Items->Strings[CBServerType->ItemIndex]=="Local")
{
CBServerName->Enabled=false;
CBProtocol->Enabled=false;
}
else
{
CBServerName->Enabled=true;
CBProtocol->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
IBDataSet1->Active=false;
IBDatabase1->CloseDataSets();
IBDatabase1->Close();
IBDatabase1->Params->Clear();
IBDatabase1->Connected=false;
CBTables->Items->SaveToFile("tables.ini");  
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CBTablesChange(TObject *Sender)
{

IDBBLOB->Text="";
DBImage1->DataField=IDBBLOB->Text;
IBDataSet1->Active=false;
//UpdateSQL
IBUpdateSQL1->ModifySQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile(CBTables->Items->Strings[CBTables->ItemIndex]+"_REFRESH.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM " + CBTables->Items->Strings[CBTables->ItemIndex];

IBDataSet1->Active=true;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button10Click(TObject *Sender)
{
if (MessageDlgPos("Drop table " + CBTables->Items->Strings[CBTables->ItemIndex] +"?",mtConfirmation,TMsgDlgButtons() << mbYes << mbNo,0,BoundsRect.Left,BoundsRect.Bottom)==mrYes)
{
AnsiString OutText;
OutText=CBTables->Items->Strings[CBTables->ItemIndex];
IBQuery1->SQL->Text="DROP TABLE " + CBTables->Items->Strings[CBTables->ItemIndex];
IBQuery1->ExecSQL();
CBTables->Items->Delete(CBTables->ItemIndex);
CBTables->ItemIndex=-1;
CBTables->Items->SaveToFile("tables.ini");
DeleteFile(OutText+"_MODIFY.dat");
DeleteFile(OutText+"_REFRESH.dat");
DeleteFile(OutText+"_DELETE.dat");
DeleteFile(OutText+"_INSERT.dat");
ShowMessage("Table " + OutText + " has been dropped!");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IDBPicClick(TObject *Sender)
{
if (OpenPictureDialog1->Execute())
DBImage1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
DBImage1->DataField=IDBBLOB->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------

