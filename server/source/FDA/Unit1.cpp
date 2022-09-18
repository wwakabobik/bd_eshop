//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

int mostconst=0;

void __fastcall TForm1::CBTablesChange(TObject *Sender)
{
mostconst=0;
ComboBox1->Items->Clear();
DBGrid1->DataSource=DataSource1;
DBEdit3->DataField="";
DBEdit4->DataField="";
DBEdit5->DataField="";
DBEdit6->DataField="";
DBEdit7->DataField="";
DBEdit8->DataField="";
DBEdit9->DataField="";
DBEdit11->DataField="";
DBEdit12->DataField="";
DBEdit13->DataField="";
DBEdit14->DataField="";
DBEdit15->DataField="";
DBEdit16->DataField="";
DBEdit17->DataField="";
DBEdit18->DataField="";
if (CBTables->ItemIndex==0)
{
IBUpdateSQL1->ModifySQL->LoadFromFile("CUSTOMERS_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("CUSTOMERS_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("CUSTOMERS_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("CUSTOMERS_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("CUSTOMERS_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("CUSTOMERS_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("CUSTOMERS_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("CUSTOMERS_REFRESH.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM CUSTOMERS";
DBImage1->DataField="";
}
else if (CBTables->ItemIndex==1)
{
IBUpdateSQL1->ModifySQL->LoadFromFile("STORES_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("STORES_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("STORES_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("STORES_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("STORES_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("STORES_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("STORES_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("STORES_REFRESH.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM STORES";
DBImage1->DataField="";
}
else if (CBTables->ItemIndex==2)
{
IBUpdateSQL1->ModifySQL->LoadFromFile("NOTEBOOK_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("NOTEBOOK_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("NOTEBOOK_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("NOTEBOOK_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("NOTEBOOK_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("NOTEBOOK_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("NOTEBOOK_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("NOTEBOOK_REFRESH.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM NOTEBOOK";
DBImage1->DataField="PIC_NOTE";
}
else if (CBTables->ItemIndex==3)
{
IBUpdateSQL1->ModifySQL->LoadFromFile("VIDEOCARD_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("VIDEOCARD_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("VIDEOCARD_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("VIDEOCARD_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("VIDEOCARD_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("VIDEOCARD_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("VIDEOCARD_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("VIDEOCARD_REFRESH.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM VIDEOCARD";
DBImage1->DataField="PIC_VIDEO";
}
else if (CBTables->ItemIndex==4)
{
IBUpdateSQL1->ModifySQL->LoadFromFile("OFFERS_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("OFFERS_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("OFFERS_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("OFFERS_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("OFFERS_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("OFFERS_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("OFFERS_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("OFFERS_REFRESH.dat");
IBDataSet1->SelectSQL->LoadFromFile("OFFERS_CORRECTION.dat");
DBImage1->DataField="";
}
else if (CBTables->ItemIndex==5)
{
IBQuery1->Open();
while (!IBQuery1->Eof)
{
ComboBox1->Items->Add(DBEdit1->Text);
ComboBox2->Items->Add(DBEdit2->Text);
IBQuery1->Next();
}
IBUpdateSQL1->ModifySQL->LoadFromFile("SUPPLY_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("SUPPLY_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("SUPPLY_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("SUPPLY_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("SUPPLY_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("SUPPLY_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("SUPPLY_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("SUPPLY_REFRESH.dat");
//IBDataSet1->SelectSQL->LoadFromFile("SUPPLY_CORRECTION.dat");
DBImage1->DataField="";
DBEdit1->DataField="";
DBEdit2->DataField="";
//IBQuery1->SQL->Text="SELECT * FROM SUPPLY";
//IBDataSet1->SelectSQL->LoadFromFile("SUPPLY_CORRECTION.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM SUPPLY";
IBQuery1->SQL->LoadFromFile("SUPPLY_CORRECTION.dat");
DBGrid1->DataSource=DataSource3;
IBQuery1->Open();
DBEdit3->DataField="SUPPLY_ID";
DBEdit4->DataField="P_ID";
DBEdit5->DataField="AMOUNT";
DBEdit6->DataField="ST_ID";
DBEdit7->DataField="S_DATE";
DBEdit8->DataField="PRICE";
DBEdit9->DataField="S_DONE";
}
else if (CBTables->ItemIndex==6)
{
IBDataSet1->SelectSQL->LoadFromFile("BALANCE.dat");
DBImage1->DataField="";
}
if (CBTables->ItemIndex==7)
{
IBUpdateSQL1->ModifySQL->LoadFromFile("PRODUCTS_MODIFY.dat");
IBUpdateSQL1->DeleteSQL->LoadFromFile("PRODUCTS_DELETE.dat");
IBUpdateSQL1->InsertSQL->LoadFromFile("PRODUCTS_INSERT.dat");
IBUpdateSQL1->RefreshSQL->LoadFromFile("PRODUCTS_REFRESH.dat");
//DataSet
IBDataSet1->ModifySQL->LoadFromFile("PRODUCTS_MODIFY.dat");
IBDataSet1->DeleteSQL->LoadFromFile("PRODUCTS_DELETE.dat");
IBDataSet1->InsertSQL->LoadFromFile("PRODUCTS_INSERT.dat");
IBDataSet1->RefreshSQL->LoadFromFile("PRODUCTS_REFRESH.dat");
IBDataSet1->SelectSQL->Text="SELECT * FROM PRODUCTS";
DBImage1->DataField="";
ComboBox1->Items->Add("Ноутбуки");
ComboBox1->Items->Add("Видеокарты");
ComboBox2->Items->Add("1");
ComboBox2->Items->Add("2");
mostconst=1;

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
//if (CBTables->ItemIndex!=5)
try {
IBDataSet1->Active=true; }
catch (...) {}
if (CBTables->ItemIndex==5)
IBDataSet1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
if (OpenPictureDialog1->Execute())
{
Edit1->Text=OpenPictureDialog1->FileName;
DBImage1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
ComboBox2->ItemIndex=ComboBox1->ItemIndex;
DBEdit4->Text=ComboBox2->Items->Strings[ComboBox2->ItemIndex];
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
IBQuery2->SQL->Text="select max(SUPPLY_ID)+1 as MAX_S from SUPPLY";
IBQuery2->Open();
DBEdit3->Text=IBQuery2->FieldValues["MAX_S"];
DBEdit7->Text=Date();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBEdit5Change(TObject *Sender)
{
if (Edit2->Text!="")
{
Edit2->Text=DBEdit5->Text;
IBQuery2->SQL->Text="select B_PRICE*"+DBEdit5->Text+" as PRICE from products where PRODUCT_ID="+DBEdit4->Text;
IBQuery2->Open();
DBEdit8->Text=IBQuery2->FieldValues["PRICE"];
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
DBEdit5->Text=Edit2->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBEdit4Change(TObject *Sender)
{
if (DBEdit5->Text!="")
{
Edit2->Text=DBEdit5->Text;
IBQuery2->SQL->Text="select B_PRICE*"+DBEdit5->Text+" as PRICE from products where PRODUCT_ID="+DBEdit4->Text;
IBQuery2->Open();
DBEdit8->Text=IBQuery2->FieldValues["PRICE"];
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBEdit6Change(TObject *Sender)
{
Edit3->Text=DBEdit6->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3Change(TObject *Sender)
{
DBEdit6->Text=Edit3->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4Change(TObject *Sender)
{
DBEdit9->Text=Edit4->Text;
IBDataSet1->Edit();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
try {
IBDataSet1->Open();
IBDataSet1->Insert();
IBDataSet1->Close();
}
catch (...) {}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
DBEdit11->Text=DBEdit3->Text;
DBEdit12->Text=ComboBox2->Items->Strings[ComboBox2->ItemIndex];
IBQuery2->SQL->Text="select max(PRODUCT_ID)+1 as MAX_S from PRODUCTS";
IBQuery2->Open();
DBEdit3->Text=IBQuery2->FieldValues["MAX_S"];
DBEdit11->Text=DBEdit3->Text;
if (ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="1")
{
DBEdit11->DataField="PRODUCT_ID";
DBEdit12->DataField="CAT_ID";
DBEdit13->DataField="ID";
DBEdit14->DataField="AMOUNT";
DBEdit15->DataField="B_PRICE";
DBEdit16->DataField="S_PRICE";
DBEdit17->DataField="NAME";
DBEdit18->DataField="P_ID";
IBUpdateSQL2->ModifySQL->LoadFromFile("NOTEBOOK_MODIFY.dat");
IBUpdateSQL2->DeleteSQL->LoadFromFile("NOTEBOOK_DELETE.dat");
IBUpdateSQL2->InsertSQL->LoadFromFile("NOTEBOOK_INSERT.dat");
IBUpdateSQL2->RefreshSQL->LoadFromFile("NOTEBOOK_REFRESH.dat");
//DataSet
IBDataSet2->ModifySQL->LoadFromFile("NOTEBOOK_MODIFY.dat");
IBDataSet2->DeleteSQL->LoadFromFile("NOTEBOOK_DELETE.dat");
IBDataSet2->InsertSQL->LoadFromFile("NOTEBOOK_INSERT.dat");
IBDataSet2->RefreshSQL->LoadFromFile("NOTEBOOK_REFRESH.dat");
IBDataSet2->SelectSQL->Text="SELECT * FROM NOTEBOOK";
}
else if  (ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="2")
{
DBEdit11->DataField="PRODUCT_ID";
DBEdit12->DataField="CAT_ID";
DBEdit13->DataField="ID";
DBEdit14->DataField="AMOUNT";
DBEdit15->DataField="B_PRICE";
DBEdit16->DataField="S_PRICE";
DBEdit17->DataField="NAME";
DBEdit18->DataField="P_ID";
IBUpdateSQL2->ModifySQL->LoadFromFile("VIDEOCARD_MODIFY.dat");
IBUpdateSQL2->DeleteSQL->LoadFromFile("VIDEOCARD_DELETE.dat");
IBUpdateSQL2->InsertSQL->LoadFromFile("VIDEOCARD_INSERT.dat");
IBUpdateSQL2->RefreshSQL->LoadFromFile("VIDEOCARD_REFRESH.dat");
//DataSet
IBDataSet2->ModifySQL->LoadFromFile("VIDEOCARD_MODIFY.dat");
IBDataSet2->DeleteSQL->LoadFromFile("VIDEOCARD_DELETE.dat");
IBDataSet2->InsertSQL->LoadFromFile("VIDEOCARD_INSERT.dat");
IBDataSet2->RefreshSQL->LoadFromFile("VIDEOCARD_REFRESH.dat");
IBDataSet2->SelectSQL->Text="SELECT * FROM NOTEBOOK";
}
DBEdit14->Text=0;
DBEdit18->Text=DBEdit11->Text;
IBDataSet2->Active=true;
if  (ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="1")
{
IBQuery2->SQL->Text="select max(ID)+1 as MAX_S from NOTEBOOK";
IBQuery2->Open();
DBEdit13->Text=IBQuery2->FieldValues["MAX_S"];
Edit8->Text=IBQuery2->FieldValues["MAX_S"];
}
else if  (ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="2")
{
IBQuery2->SQL->Text="select max(ID)+1 as MAX_S from VIDEOCARD";
IBQuery2->Open();
DBEdit13->Text=IBQuery2->FieldValues["MAX_S"];
Edit8->Text=IBQuery2->FieldValues["MAX_S"];
} 
DBEdit13->Text=Edit8->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBEdit9Change(TObject *Sender)
{
Edit4->Text=DBEdit9->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBEdit3Change(TObject *Sender)
{
if (!mostconst)
{
IBQuery1->First();
DBEdit10->DataField="SUPPLY_ID";
while (DBEdit3->Text!=DBEdit10->Text)
{
if (IBQuery1->Eof)
//ShowMessage("!");
break;
IBQuery1->Next();
}
DataSource3->ComponentIndex;

//DBGrid1->FieldCount;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit6Change(TObject *Sender)
{
DBEdit15->Text=Edit6->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5Change(TObject *Sender)
{
DBEdit16->Text=Edit5->Text;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit7Change(TObject *Sender)
{
DBEdit17->Text=Edit7->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
DBEdit13->Text=Edit8->Text;
DBEdit18->Text=DBEdit11->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
IBQuery3->Open();
IBQuery3->Close();
IBQuery4->Open();
IBQuery3->Close();
}
//---------------------------------------------------------------------------

