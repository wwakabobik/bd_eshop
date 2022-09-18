//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
Form1->IBDataSet1->SelectSQL->Text="SELECT CATEGORIES_ID, CAT_NAME, TABLE_NAME FROM CATEGORIES";
Form1->IBDataSet1->Active=true;
Form1->IBDataSet1->First();
while (!Form1->IBDataSet1->Eof)
{
Form1->DBEdit1->DataField="CATEGORIES_ID";
CAT_NO->Items->Add(Form1->DBEdit1->Text);
Form1->DBEdit1->DataField="CAT_NAME";
CAT_NAME->Items->Add(DBEdit2->Text);
Form1->DBEdit1->DataField="TABLE_NAME";
CAT_TABLE->Items->Add(DBEdit3->Text);
//ShowMessage(DBEdit3->Text);
Form1->IBDataSet1->Next();
}
//Products
//UpdateSQL
Form1->IBUpdateSQL2->ModifySQL->LoadFromFile("PRODUCTS_MODIFY.dat");
Form1->IBUpdateSQL2->DeleteSQL->LoadFromFile("PRODUCTS_DELETE.dat");
Form1->IBUpdateSQL2->InsertSQL->LoadFromFile("PRODUCTS_INSERT.dat");
Form1->IBUpdateSQL2->RefreshSQL->LoadFromFile("PRODUCTS_REFRESH.dat");
//DataSet
Form1->IBDataSet2->ModifySQL->LoadFromFile("PRODUCTS_MODIFY.dat");
Form1->IBDataSet2->DeleteSQL->LoadFromFile("PRODUCTS_DELETE.dat");
Form1->IBDataSet2->InsertSQL->LoadFromFile("PRODUCTS_INSERT.dat");
Form1->IBDataSet2->RefreshSQL->LoadFromFile("PRODUCTS_REFRESH.dat");
Form1->IBDataSet2->SelectSQL->Text="SELECT * FROM PRODUCTS";
Form1->IBDataSet2->Active=true;
PR_NO->DataField="PRODUCT_ID";
int i_no=0;
Form1->IBDataSet2->First();
while (!Form1->IBDataSet2->Eof)
{
i_no++;
Form1->IBDataSet2->Next();
}
PR_NO->Text=AnsiString(i_no+1);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::CAT_NAMEChange(TObject *Sender)
{
CAT_NO->ItemIndex=CAT_NAME->ItemIndex;
CAT_TABLE->ItemIndex=CAT_NO->ItemIndex;
if (CAT_TABLE->Items->Strings[CAT_TABLE->ItemIndex]=="NOTEBOOK")
{
//UpdateSQL
Form1->IBUpdateSQL1->ModifySQL->LoadFromFile("NOTEBOOK_MODIFY.dat");
Form1->IBUpdateSQL1->DeleteSQL->LoadFromFile("NOTEBOOK_DELETE.dat");
Form1->IBUpdateSQL1->InsertSQL->LoadFromFile("NOTEBOOK_INSERT.dat");
Form1->IBUpdateSQL1->RefreshSQL->LoadFromFile("NOTEBOOK_REFRESH.dat");
//DataSet
Form1->IBDataSet1->ModifySQL->LoadFromFile("NOTEBOOK_MODIFY.dat");
Form1->IBDataSet1->DeleteSQL->LoadFromFile("NOTEBOOK_DELETE.dat");
Form1->IBDataSet1->InsertSQL->LoadFromFile("NOTEBOOK_INSERT.dat");
Form1->IBDataSet1->RefreshSQL->LoadFromFile("NOTEBOOK_REFRESH.dat");
Form1->IBDataSet1->SelectSQL->Text="SELECT * FROM NOTEBOOK";
Form1->IBDataSet1->Active=true;
PC_ID->DataField="ID";
int i_no=0;
Form1->IBDataSet1->First();
while (!Form1->IBDataSet1->Eof)
{
i_no++;
Form1->IBDataSet1->Next();
}
PC_ID->Text=AnsiString(i_no+1);
}
}
//---------------------------------------------------------------------------
