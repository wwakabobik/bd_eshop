//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox1Change(TObject *Sender)
{
if      (ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="SMALLINT" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="INTEGER" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="FLOAT" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="DECIMAL" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="NUMERIC")
{
CheckBox1->Visible=true;
CheckBox1->Enabled=true;
CSpinEdit1->Visible=false;
CSpinEdit1->Enabled=false;
}
else if (ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="CHAR" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="CHARACTER" ||
         ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="VARCHAR")
{
CSpinEdit1->Enabled=true;
CSpinEdit1->Visible=true;
CheckBox1->Visible=false;
CheckBox1->Checked=false;
CheckBox1->Enabled=false;
}
else
{
CSpinEdit1->Visible=false;
CSpinEdit1->Value=0;
CheckBox1->Visible=false;
CheckBox1->Checked=false;
CheckBox1->Enabled=false;
CSpinEdit1->Enabled=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BCreateTableClick(TObject *Sender)
{
AnsiString PREVIEW;
Memo1->Clear();
if (LabeledEdit1->Text.Length()!=0)
Memo1->Lines->Add("CREATE TABLE \"" + LabeledEdit1->Text + "\" (");
// 1
if (Edit1->Text.Length()!=0)
{
PREVIEW="\"" + Edit1->Text + "\" " + ComboBox1->Items->Strings[ComboBox1->ItemIndex];
if (CheckBox1->Checked && CheckBox1->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit1->Value!=0 && CSpinEdit1->Enabled)
PREVIEW=PREVIEW + " (" + CSpinEdit1->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
if (RadioButton1->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit2->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 2
if (Edit2->Text.Length()!=0)
{
PREVIEW="\"" + Edit2->Text + "\" " + ComboBox2->Items->Strings[ComboBox2->ItemIndex];
if (CheckBox2->Checked && CheckBox2->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit2->Value!=0 && CSpinEdit2->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit2->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton2->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit3->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 3
if (Edit3->Text.Length()!=0)
{
PREVIEW="\"" + Edit3->Text + "\" " + ComboBox3->Items->Strings[ComboBox3->ItemIndex];
if (CheckBox3->Checked && CheckBox3->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit3->Value!=0 && CSpinEdit3->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit3->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton3->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit4->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 4
if (Edit4->Text.Length()!=0)
{
PREVIEW="\"" + Edit4->Text + "\" " + ComboBox4->Items->Strings[ComboBox4->ItemIndex];
if (CheckBox4->Checked && CheckBox4->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit4->Value!=0  && CSpinEdit4->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit4->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton4->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit5->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 5
if (Edit5->Text.Length()!=0)
{
PREVIEW="\"" + Edit5->Text + "\" " + ComboBox5->Items->Strings[ComboBox5->ItemIndex];
if (CheckBox5->Checked && CheckBox5->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit5->Value!=0 && CSpinEdit5->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit5->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton5->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit6->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 6
if (Edit6->Text.Length()!=0)
{
PREVIEW="\"" + Edit6->Text + "\" " + ComboBox6->Items->Strings[ComboBox6->ItemIndex];
if (CheckBox6->Checked && CheckBox6->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit6->Value!=0  && CSpinEdit6->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit6->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton6->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit7->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 7
if (Edit7->Text.Length()!=0)
{
PREVIEW="\"" + Edit7->Text + "\" " + ComboBox7->Items->Strings[ComboBox7->ItemIndex];
if (CheckBox7->Checked && CheckBox7->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit7->Value!=0  && CSpinEdit7->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit7->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton7->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit8->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 8
if (Edit8->Text.Length()!=0)
{
PREVIEW="\"" + Edit8->Text + "\" " + ComboBox8->Items->Strings[ComboBox8->ItemIndex];
if (CheckBox8->Checked && CheckBox8->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit8->Value!=0 && CSpinEdit8->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit8->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton8->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit9->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 9
if (Edit9->Text.Length()!=0)
{
PREVIEW="\"" + Edit9->Text + "\" " + ComboBox9->Items->Strings[ComboBox9->ItemIndex];
if (CheckBox9->Checked && CheckBox9->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit9->Value!=0 && CSpinEdit9->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit9->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton9->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit10->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 10
if (Edit10->Text.Length()!=0)
{
PREVIEW="\"" + Edit10->Text + "\" " + ComboBox10->Items->Strings[ComboBox10->ItemIndex];
if (CheckBox10->Checked && CheckBox10->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit10->Value!=0 && CSpinEdit10->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit10->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton10->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit11->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 11
if (Edit11->Text.Length()!=0)
{
PREVIEW="\"" + Edit11->Text + "\" " + ComboBox11->Items->Strings[ComboBox11->ItemIndex];
if (CheckBox11->Checked && CheckBox11->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit11->Value!=0 && CSpinEdit11->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit11->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton11->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit12->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 12
if (Edit12->Text.Length()!=0)
{
PREVIEW="\"" + Edit12->Text + "\" " + ComboBox12->Items->Strings[ComboBox12->ItemIndex];
if (CheckBox12->Checked && CheckBox12->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit12->Value!=0 && CSpinEdit12->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit12->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton12->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit13->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 13
if (Edit13->Text.Length()!=0)
{
PREVIEW="\"" + Edit13->Text + "\" " + ComboBox13->Items->Strings[ComboBox13->ItemIndex];
if (CheckBox13->Checked && CheckBox13->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit13->Value!=0 && CSpinEdit13->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit13->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton13->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
if  (Edit14->Text.Length()!=0)
PREVIEW=PREVIEW+",";
else
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
// 14
if (Edit14->Text.Length()!=0)
{
PREVIEW="\"" + Edit14->Text + "\" " + ComboBox14->Items->Strings[ComboBox14->ItemIndex];
if (CheckBox14->Checked && CheckBox14->Enabled)
PREVIEW=PREVIEW + " NOT NULL ";
if (CSpinEdit14->Value!=0 && CSpinEdit14->Enabled)
{
PREVIEW=PREVIEW + " (" + CSpinEdit14->Value + ") character set " + Form1->CBCharSet->Items->Strings[Form1->CBCharSet->ItemIndex] + " collate PXW_CYRL";
}
if (RadioButton14->Checked) PREVIEW=PREVIEW+" PRIMARY KEY";
PREVIEW=PREVIEW+");";
Memo1->Lines->Add(PREVIEW);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BExecQueryClick(TObject *Sender)
{
//CREATE BLOCK
Form1->IBQuery1->SQL->Text=Memo1->Text;
Form1->IBQuery1->ExecSQL();
Form1->IBDataSet1->Active=false;
Form1->IBDatabase1->CloseDataSets();
Form1->IBDatabase1->Close();
Form1->IBDatabase1->Params->Clear();
Form1->IBDatabase1->Connected=false;
Form1->IBDataSet1->Active=true;
//MODIFY BLOCK
Memo1->Clear();
Memo1->Lines->Add("update " + LabeledEdit1->Text);
Memo1->Lines->Add("set");
if (Edit1->Text.Length()!=0)
Memo1->Lines->Add(Edit1->Text + " = :" + Edit1->Text);
if (Edit2->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit2->Text + " = :" + Edit2->Text);
if (Edit3->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit3->Text + " = :" + Edit3->Text);
if (Edit4->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit4->Text + " = :" + Edit4->Text);
if (Edit5->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit5->Text + " = :" + Edit5->Text);
if (Edit6->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit6->Text + " = :" + Edit6->Text);
if (Edit7->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit7->Text + " = :" + Edit7->Text);
if (Edit8->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit8->Text + " = :" + Edit8->Text);
if (Edit9->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit9->Text + " = :" + Edit9->Text);
if (Edit10->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit10->Text + " = :" + Edit10->Text);
if (Edit11->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit11->Text + " = :" + Edit11->Text);
if (Edit12->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit12->Text + " = :" + Edit12->Text);
if (Edit13->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit13->Text + " = :" + Edit13->Text);
if (Edit14->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit14->Text + " = :" + Edit14->Text);
Memo1->Lines->Add("where");
if (RadioButton1->Checked)
Memo1->Lines->Add(Edit1->Text + " = :OLD_" + Edit1->Text);
if (RadioButton2->Checked)
Memo1->Lines->Add(Edit2->Text + " = :OLD_" + Edit2->Text);
if (RadioButton3->Checked)
Memo1->Lines->Add(Edit3->Text + " = :OLD_" + Edit3->Text);
if (RadioButton4->Checked)
Memo1->Lines->Add(Edit4->Text + " = :OLD_" + Edit4->Text);
if (RadioButton5->Checked)
Memo1->Lines->Add(Edit5->Text + " = :OLD_" + Edit5->Text);
if (RadioButton6->Checked)
Memo1->Lines->Add(Edit6->Text + " = :OLD_" + Edit6->Text);
if (RadioButton7->Checked)
Memo1->Lines->Add(Edit7->Text + " = :OLD_" + Edit7->Text);
if (RadioButton8->Checked)
Memo1->Lines->Add(Edit8->Text + " = :OLD_" + Edit8->Text);
if (RadioButton9->Checked)
Memo1->Lines->Add(Edit9->Text + " = :OLD_" + Edit9->Text);
if (RadioButton10->Checked)
Memo1->Lines->Add(Edit10->Text + " = :OLD_" + Edit10->Text);
if (RadioButton11->Checked)
Memo1->Lines->Add(Edit11->Text + " = :OLD_" + Edit11->Text);
if (RadioButton12->Checked)
Memo1->Lines->Add(Edit12->Text + " = :OLD_" + Edit12->Text);
if (RadioButton13->Checked)
Memo1->Lines->Add(Edit13->Text + " = :OLD_" + Edit13->Text);
if (RadioButton14->Checked)
Memo1->Lines->Add(Edit14->Text + " = :OLD_" + Edit14->Text);
Memo1->Lines->SaveToFile(LabeledEdit1->Text + "_MODIFY.dat");
//INSERT BLOCK
Memo1->Clear();
Memo1->Lines->Add("insert into " + LabeledEdit1->Text);
Memo1->Lines->Add("(" + Edit1->Text);
if (Edit2->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit2->Text);
if (Edit3->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit3->Text);
if (Edit4->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit4->Text);
if (Edit5->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit5->Text);
if (Edit6->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit6->Text);
if (Edit7->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit7->Text);
if (Edit8->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit8->Text);
if (Edit9->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit9->Text);
if (Edit10->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit10->Text);
if (Edit11->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit11->Text);
if (Edit12->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit12->Text);
if (Edit13->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit13->Text);
if (Edit14->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit14->Text);
Memo1->Lines->Add(") values");
Memo1->Lines->Add("( :" + Edit1->Text);
if (Edit2->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit2->Text);
if (Edit3->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit3->Text);
if (Edit4->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit4->Text);
if (Edit5->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit5->Text);
if (Edit6->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit6->Text);
if (Edit7->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit7->Text);
if (Edit8->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit8->Text);
if (Edit9->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit9->Text);
if (Edit10->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit10->Text);
if (Edit11->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit11->Text);
if (Edit12->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit12->Text);
if (Edit13->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit13->Text);
if (Edit14->Text.Length()!=0)
Memo1->Lines->Add(", :" + Edit14->Text);
Memo1->Lines->Add(")");
Memo1->Lines->SaveToFile(LabeledEdit1->Text + "_INSERT.dat");
//DELETE
Memo1->Clear();
Memo1->Lines->Add("delete from " + LabeledEdit1->Text + " where");
if (RadioButton1->Checked)
Memo1->Lines->Add(Edit1->Text + " = :OLD_" + Edit1->Text);
if (RadioButton2->Checked)
Memo1->Lines->Add(Edit2->Text + " = :OLD_" + Edit2->Text);
if (RadioButton3->Checked)
Memo1->Lines->Add(Edit3->Text + " = :OLD_" + Edit3->Text);
if (RadioButton4->Checked)
Memo1->Lines->Add(Edit4->Text + " = :OLD_" + Edit4->Text);
if (RadioButton5->Checked)
Memo1->Lines->Add(Edit5->Text + " = :OLD_" + Edit5->Text);
if (RadioButton6->Checked)
Memo1->Lines->Add(Edit6->Text + " = :OLD_" + Edit6->Text);
if (RadioButton7->Checked)
Memo1->Lines->Add(Edit7->Text + " = :OLD_" + Edit7->Text);
if (RadioButton8->Checked)
Memo1->Lines->Add(Edit8->Text + " = :OLD_" + Edit8->Text);
if (RadioButton9->Checked)
Memo1->Lines->Add(Edit9->Text + " = :OLD_" + Edit9->Text);
if (RadioButton10->Checked)
Memo1->Lines->Add(Edit10->Text + " = :OLD_" + Edit10->Text);
if (RadioButton11->Checked)
Memo1->Lines->Add(Edit11->Text + " = :OLD_" + Edit11->Text);
if (RadioButton12->Checked)
Memo1->Lines->Add(Edit12->Text + " = :OLD_" + Edit12->Text);
if (RadioButton13->Checked)
Memo1->Lines->Add(Edit13->Text + " = :OLD_" + Edit13->Text);
if (RadioButton14->Checked)
Memo1->Lines->Add(Edit14->Text + " = :OLD_" + Edit14->Text);
Memo1->Lines->SaveToFile(LabeledEdit1->Text + "_DELETE.dat");
// REFRESH
Memo1->Clear();
Memo1->Lines->Add("select");
if (Edit1->Text.Length()!=0)
Memo1->Lines->Add(Edit1->Text);
if (Edit2->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit2->Text);
if (Edit3->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit3->Text);
if (Edit4->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit4->Text);
if (Edit5->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit5->Text);
if (Edit6->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit6->Text);
if (Edit7->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit7->Text);
if (Edit8->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit8->Text);
if (Edit9->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit9->Text);
if (Edit10->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit10->Text);
if (Edit11->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit11->Text);
if (Edit12->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit12->Text);
if (Edit13->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit13->Text);
if (Edit14->Text.Length()!=0)
Memo1->Lines->Add(", " + Edit14->Text);
Memo1->Lines->Add("from " + LabeledEdit1->Text +" where");
if (RadioButton1->Checked)
Memo1->Lines->Add(Edit1->Text + " = :" + Edit1->Text);
if (RadioButton2->Checked)
Memo1->Lines->Add(Edit2->Text + " = :" + Edit2->Text);
if (RadioButton3->Checked)
Memo1->Lines->Add(Edit3->Text + " = :" + Edit3->Text);
if (RadioButton4->Checked)
Memo1->Lines->Add(Edit4->Text + " = :" + Edit4->Text);
if (RadioButton5->Checked)
Memo1->Lines->Add(Edit5->Text + " = :" + Edit5->Text);
if (RadioButton6->Checked)
Memo1->Lines->Add(Edit6->Text + " = :" + Edit6->Text);
if (RadioButton7->Checked)
Memo1->Lines->Add(Edit7->Text + " = :" + Edit7->Text);
if (RadioButton8->Checked)
Memo1->Lines->Add(Edit8->Text + " = :" + Edit8->Text);
if (RadioButton9->Checked)
Memo1->Lines->Add(Edit9->Text + " = :" + Edit9->Text);
if (RadioButton10->Checked)
Memo1->Lines->Add(Edit10->Text + " = :" + Edit10->Text);
if (RadioButton11->Checked)
Memo1->Lines->Add(Edit11->Text + " = :" + Edit11->Text);
if (RadioButton12->Checked)
Memo1->Lines->Add(Edit12->Text + " = :" + Edit12->Text);
if (RadioButton13->Checked)
Memo1->Lines->Add(Edit13->Text + " = :" + Edit13->Text);
if (RadioButton14->Checked)
Memo1->Lines->Add(Edit14->Text + " = :" + Edit14->Text);
Memo1->Lines->SaveToFile(LabeledEdit1->Text + "_REFRESH.dat");
Memo1->Lines->LoadFromFile("tables.ini");
Memo1->Lines->Add(LabeledEdit1->Text);
Memo1->Lines->SaveToFile("tables.ini");
Form1->CBTables->Items->LoadFromFile("tables.ini");
ShowMessage("Table " + LabeledEdit1->Text + " has been created!");
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox2Change(TObject *Sender)
{
//2
if      (ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="SMALLINT" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="INTEGER" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="FLOAT" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="DECIMAL" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="NUMERIC")
{
CheckBox2->Visible=true;
CheckBox2->Enabled=true;
CSpinEdit2->Visible=false;
CSpinEdit2->Enabled=false;
}
else if (ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="CHAR" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="CHARACTER" ||
         ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="VARCHAR")
{
CSpinEdit2->Enabled=true;
CSpinEdit2->Visible=true;
CheckBox2->Visible=false;
CheckBox2->Checked=false;
CheckBox2->Enabled=false;
}
else
{
CSpinEdit2->Visible=false;
CSpinEdit2->Value=0;
CheckBox2->Visible=false;
CheckBox2->Checked=false;
CheckBox2->Enabled=false;
CSpinEdit2->Enabled=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox3Change(TObject *Sender)
{
// 3
if      (ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="SMALLINT" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="INTEGER" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="FLOAT" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="DECIMAL" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="NUMERIC")
{
CheckBox3->Visible=true;
CheckBox3->Enabled=true;
CSpinEdit3->Visible=false;
CSpinEdit3->Enabled=false;
}
else if (ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="CHAR" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="CHARACTER" ||
         ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="VARCHAR")
{
CSpinEdit3->Enabled=true;
CSpinEdit3->Visible=true;
CheckBox3->Visible=false;
CheckBox3->Checked=false;
CheckBox3->Enabled=false;
}
else
{
CSpinEdit3->Visible=false;
CSpinEdit3->Value=0;
CheckBox3->Visible=false;
CheckBox3->Checked=false;
CheckBox3->Enabled=false;
CSpinEdit3->Enabled=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox4Change(TObject *Sender)
{
//4
if      (ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="SMALLINT" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="INTEGER" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="FLOAT" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="DECIMAL" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="NUMERIC")
{
CheckBox4->Visible=true;
CheckBox4->Enabled=true;
CSpinEdit4->Visible=false;
CSpinEdit4->Enabled=false;
}
else if (ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="CHAR" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="CHARACTER" ||
         ComboBox4->Items->Strings[ComboBox4->ItemIndex]=="VARCHAR")
{
CSpinEdit4->Enabled=true;
CSpinEdit4->Visible=true;
CheckBox4->Visible=false;
CheckBox4->Checked=false;
CheckBox4->Enabled=false;
}
else
{
CSpinEdit4->Visible=false;
CSpinEdit4->Value=0;
CheckBox4->Visible=false;
CheckBox4->Checked=false;
CheckBox4->Enabled=false;
CSpinEdit4->Enabled=false;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox5Change(TObject *Sender)
{
//5
if      (ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="SMALLINT" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="INTEGER" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="FLOAT" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="DECIMAL" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="NUMERIC")
{
CheckBox5->Visible=true;
CheckBox5->Enabled=true;
CSpinEdit5->Visible=false;
CSpinEdit5->Enabled=false;
}
else if (ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="CHAR" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="CHARACTER" ||
         ComboBox5->Items->Strings[ComboBox5->ItemIndex]=="VARCHAR")
{
CSpinEdit5->Enabled=true;
CSpinEdit5->Visible=true;
CheckBox5->Visible=false;
CheckBox5->Checked=false;
CheckBox5->Enabled=false;
}
else
{
CSpinEdit5->Visible=false;
CSpinEdit5->Value=0;
CheckBox5->Visible=false;
CheckBox5->Checked=false;
CheckBox5->Enabled=false;
CSpinEdit5->Enabled=false;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox6Change(TObject *Sender)
{
//6
if      (ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="SMALLINT" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="INTEGER" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="FLOAT" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="DECIMAL" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="NUMERIC")
{
CheckBox6->Visible=true;
CheckBox6->Enabled=true;
CSpinEdit6->Visible=false;
CSpinEdit6->Enabled=false;
}
else if (ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="CHAR" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="CHARACTER" ||
         ComboBox6->Items->Strings[ComboBox6->ItemIndex]=="VARCHAR")
{
CSpinEdit6->Enabled=true;
CSpinEdit6->Visible=true;
CheckBox6->Visible=false;
CheckBox6->Checked=false;
CheckBox6->Enabled=false;
}
else
{
CSpinEdit6->Visible=false;
CSpinEdit6->Value=0;
CheckBox6->Visible=false;
CheckBox6->Checked=false;
CheckBox6->Enabled=false;
CSpinEdit6->Enabled=false;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox7Change(TObject *Sender)
{
//7
if      (ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="SMALLINT" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="INTEGER" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="FLOAT" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="DECIMAL" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="NUMERIC")
{
CheckBox7->Visible=true;
CheckBox7->Enabled=true;
CSpinEdit7->Visible=false;
CSpinEdit7->Enabled=false;
}
else if (ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="CHAR" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="CHARACTER" ||
         ComboBox7->Items->Strings[ComboBox7->ItemIndex]=="VARCHAR")
{
CSpinEdit7->Enabled=true;
CSpinEdit7->Visible=true;
CheckBox7->Visible=false;
CheckBox7->Checked=false;
CheckBox7->Enabled=false;
}
else
{
CSpinEdit7->Visible=false;
CSpinEdit7->Value=0;
CheckBox7->Visible=false;
CheckBox7->Checked=false;
CheckBox7->Enabled=false;
CSpinEdit7->Enabled=false;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox8Change(TObject *Sender)
{
//8
if      (ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="SMALLINT" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="INTEGER" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="FLOAT" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="DECIMAL" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="NUMERIC")
{
CheckBox8->Visible=true;
CheckBox8->Enabled=true;
CSpinEdit8->Visible=false;
CSpinEdit8->Enabled=false;
}
else if (ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="CHAR" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="CHARACTER" ||
         ComboBox8->Items->Strings[ComboBox8->ItemIndex]=="VARCHAR")
{
CSpinEdit8->Enabled=true;
CSpinEdit8->Visible=true;
CheckBox8->Visible=false;
CheckBox8->Checked=false;
CheckBox8->Enabled=false;
}
else
{
CSpinEdit8->Visible=false;
CSpinEdit8->Value=0;
CheckBox8->Visible=false;
CheckBox8->Checked=false;
CheckBox8->Enabled=false;
CSpinEdit8->Enabled=false;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox9Change(TObject *Sender)
{
//9
if      (ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="SMALLINT" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="INTEGER" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="FLOAT" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="DECIMAL" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="NUMERIC")
{
CheckBox9->Visible=true;
CheckBox9->Enabled=true;
CSpinEdit9->Visible=false;
CSpinEdit9->Enabled=false;
}
else if (ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="CHAR" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="CHARACTER" ||
         ComboBox9->Items->Strings[ComboBox9->ItemIndex]=="VARCHAR")
{
CSpinEdit9->Enabled=true;
CSpinEdit9->Visible=true;
CheckBox9->Visible=false;
CheckBox9->Checked=false;
CheckBox9->Enabled=false;
}
else
{
CSpinEdit9->Visible=false;
CSpinEdit9->Value=0;
CheckBox9->Visible=false;
CheckBox9->Checked=false;
CheckBox9->Enabled=false;
CSpinEdit9->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox10Change(TObject *Sender)
{
//10
if      (ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="SMALLINT" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="INTEGER" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="FLOAT" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="DECIMAL" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="NUMERIC")
{
CheckBox10->Visible=true;
CheckBox10->Enabled=true;
CSpinEdit10->Visible=false;
CSpinEdit10->Enabled=false;
}
else if (ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="CHAR" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="CHARACTER" ||
         ComboBox10->Items->Strings[ComboBox10->ItemIndex]=="VARCHAR")
{
CSpinEdit10->Enabled=true;
CSpinEdit10->Visible=true;
CheckBox10->Visible=false;
CheckBox10->Checked=false;
CheckBox10->Enabled=false;
}
else
{
CSpinEdit10->Visible=false;
CSpinEdit10->Value=0;
CheckBox10->Visible=false;
CheckBox10->Checked=false;
CheckBox10->Enabled=false;
CSpinEdit10->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox11Change(TObject *Sender)
{
//11
if      (ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="SMALLINT" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="INTEGER" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="FLOAT" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="DECIMAL" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="NUMERIC")
{
CheckBox11->Visible=true;
CheckBox11->Enabled=true;
CSpinEdit11->Visible=false;
CSpinEdit11->Enabled=false;
}
else if (ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="CHAR" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="CHARACTER" ||
         ComboBox11->Items->Strings[ComboBox11->ItemIndex]=="VARCHAR")
{
CSpinEdit11->Enabled=true;
CSpinEdit11->Visible=true;
CheckBox11->Visible=false;
CheckBox11->Checked=false;
CheckBox11->Enabled=false;
}
else
{
CSpinEdit11->Visible=false;
CSpinEdit11->Value=0;
CheckBox11->Visible=false;
CheckBox11->Checked=false;
CheckBox11->Enabled=false;
CSpinEdit11->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox12Change(TObject *Sender)
{
//8
if      (ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="SMALLINT" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="INTEGER" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="FLOAT" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="DECIMAL" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="NUMERIC")
{
CheckBox12->Visible=true;
CheckBox12->Enabled=true;
CSpinEdit12->Visible=false;
CSpinEdit12->Enabled=false;
}
else if (ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="CHAR" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="CHARACTER" ||
         ComboBox12->Items->Strings[ComboBox12->ItemIndex]=="VARCHAR")
{
CSpinEdit12->Enabled=true;
CSpinEdit12->Visible=true;
CheckBox12->Visible=false;
CheckBox12->Checked=false;
CheckBox12->Enabled=false;
}
else
{
CSpinEdit12->Visible=false;
CSpinEdit12->Value=0;
CheckBox12->Visible=false;
CheckBox12->Checked=false;
CheckBox12->Enabled=false;
CSpinEdit12->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox13Change(TObject *Sender)
{
//13
if      (ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="SMALLINT" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="INTEGER" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="FLOAT" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="DECIMAL" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="NUMERIC")
{
CheckBox13->Visible=true;
CheckBox13->Enabled=true;
CSpinEdit13->Visible=false;
CSpinEdit13->Enabled=false;
}
else if (ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="CHAR" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="CHARACTER" ||
         ComboBox13->Items->Strings[ComboBox13->ItemIndex]=="VARCHAR")
{
CSpinEdit13->Enabled=true;
CSpinEdit13->Visible=true;
CheckBox13->Visible=false;
CheckBox13->Checked=false;
CheckBox13->Enabled=false;
}
else
{
CSpinEdit13->Visible=false;
CSpinEdit13->Value=0;
CheckBox13->Visible=false;
CheckBox13->Checked=false;
CheckBox13->Enabled=false;
CSpinEdit13->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox14Change(TObject *Sender)
{
//14
if      (ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="SMALLINT" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="INTEGER" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="FLOAT" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="DOUBLE PRECISION" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="DECIMAL" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="NUMERIC")
{
CheckBox8->Visible=true;
CheckBox8->Enabled=true;
CSpinEdit8->Visible=false;
CSpinEdit8->Enabled=false;
}
else if (ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="CHAR" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="CHARACTER" ||
         ComboBox14->Items->Strings[ComboBox14->ItemIndex]=="VARCHAR")
{
CSpinEdit14->Enabled=true;
CSpinEdit14->Visible=true;
CheckBox14->Visible=false;
CheckBox14->Checked=false;
CheckBox14->Enabled=false;
}
else
{
CSpinEdit14->Visible=false;
CSpinEdit14->Value=0;
CheckBox14->Visible=false;
CheckBox14->Checked=false;
CheckBox14->Enabled=false;
CSpinEdit14->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BForeignKeyClick(TObject *Sender)
{
Memo1->Clear();
Memo1->Lines->Add("ALTER TABLE \"" + LabeledEdit1->Text + "\" ADD CONSTRAINT FK_" + LabeledEdit1->Text + "  FOREIGN KEY");
Memo1->Lines->Add("(\""+ FKName->Text + "\") REFERENCES \"" + FTName->Text + "\" (\""+ FTFName->Text + "\") ON DELETE CASCADE ON UPDATE CASCADE;");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
Form1->IBQuery1->SQL->Text=Memo1->Text;
Form1->IBQuery1->ExecSQL();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BUniqueClick(TObject *Sender)
{
Memo1->Clear();
Memo1->Lines->Add("ALTER TABLE \"" + LabeledEdit1->Text + "\" ADD CONSTRAINT UQ_" + FKName->Text + " UNIQUE(" + FKName->Text +")");
}
//---------------------------------------------------------------------------

