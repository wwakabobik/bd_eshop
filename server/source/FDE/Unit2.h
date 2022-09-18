//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include "Unit1.h"
#include "CSPIN.h"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *ComboBox1;
        TEdit *Edit1;
        TComboBox *ComboBox2;
        TEdit *Edit2;
        TComboBox *ComboBox3;
        TEdit *Edit3;
        TComboBox *ComboBox4;
        TEdit *Edit4;
        TComboBox *ComboBox5;
        TEdit *Edit5;
        TComboBox *ComboBox6;
        TEdit *Edit6;
        TComboBox *ComboBox7;
        TEdit *Edit7;
        TComboBox *ComboBox8;
        TEdit *Edit8;
        TComboBox *ComboBox9;
        TEdit *Edit9;
        TComboBox *ComboBox10;
        TEdit *Edit10;
        TComboBox *ComboBox11;
        TEdit *Edit11;
        TComboBox *ComboBox12;
        TEdit *Edit12;
        TComboBox *ComboBox13;
        TEdit *Edit13;
        TComboBox *ComboBox14;
        TEdit *Edit14;
        TLabel *Label1;
        TLabel *Label2;
        TLabeledEdit *LabeledEdit1;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TCheckBox *CheckBox9;
        TCheckBox *CheckBox10;
        TCheckBox *CheckBox11;
        TCheckBox *CheckBox12;
        TCheckBox *CheckBox13;
        TCheckBox *CheckBox14;
        TGroupBox *GroupBox1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TRadioButton *RadioButton5;
        TRadioButton *RadioButton6;
        TRadioButton *RadioButton7;
        TRadioButton *RadioButton8;
        TRadioButton *RadioButton9;
        TRadioButton *RadioButton10;
        TRadioButton *RadioButton11;
        TRadioButton *RadioButton12;
        TRadioButton *RadioButton13;
        TRadioButton *RadioButton14;
        TButton *BCreateTable;
        TMemo *Memo1;
        TCSpinEdit *CSpinEdit1;
        TCSpinEdit *CSpinEdit2;
        TCSpinEdit *CSpinEdit3;
        TCSpinEdit *CSpinEdit4;
        TCSpinEdit *CSpinEdit5;
        TCSpinEdit *CSpinEdit6;
        TCSpinEdit *CSpinEdit7;
        TCSpinEdit *CSpinEdit8;
        TCSpinEdit *CSpinEdit9;
        TCSpinEdit *CSpinEdit10;
        TCSpinEdit *CSpinEdit11;
        TCSpinEdit *CSpinEdit12;
        TCSpinEdit *CSpinEdit13;
        TCSpinEdit *CSpinEdit14;
        TButton *BExecQuery;
        TButton *BForeignKey;
        TButton *BUnique;
        TButton *Button1;
        TEdit *FTName;
        TEdit *FTFName;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *FKName;
        TLabel *Label5;
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall BCreateTableClick(TObject *Sender);
        void __fastcall BExecQueryClick(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall ComboBox3Change(TObject *Sender);
        void __fastcall ComboBox4Change(TObject *Sender);
        void __fastcall ComboBox5Change(TObject *Sender);
        void __fastcall ComboBox6Change(TObject *Sender);
        void __fastcall ComboBox7Change(TObject *Sender);
        void __fastcall ComboBox8Change(TObject *Sender);
        void __fastcall ComboBox9Change(TObject *Sender);
        void __fastcall ComboBox10Change(TObject *Sender);
        void __fastcall ComboBox11Change(TObject *Sender);
        void __fastcall ComboBox12Change(TObject *Sender);
        void __fastcall ComboBox13Change(TObject *Sender);
        void __fastcall ComboBox14Change(TObject *Sender);
        void __fastcall BForeignKeyClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall BUniqueClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
