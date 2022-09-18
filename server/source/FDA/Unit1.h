//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBQuery.hpp>
#include <IBUpdateSQL.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TIBDatabase *IBDatabase1;
        TIBTransaction *IBTransaction1;
        TIBUpdateSQL *IBUpdateSQL1;
        TIBDataSet *IBDataSet1;
        TIBQuery *IBQuery1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TDBImage *DBImage1;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TComboBox *CBTables;
        TButton *Button1;
        TEdit *Edit1;
        TSpeedButton *SpeedButton1;
        TOpenPictureDialog *OpenPictureDialog1;
        TDataSource *DataSource2;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TIBQuery *IBQuery2;
        TDataSource *DataSource3;
        TComboBox *ComboBox1;
        TComboBox *ComboBox2;
        TButton *Button2;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TButton *Button3;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TDBEdit *DBEdit10;
        TButton *Button4;
        TDBEdit *DBEdit11;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBEdit *DBEdit14;
        TDBEdit *DBEdit15;
        TDBEdit *DBEdit16;
        TIBDataSet *IBDataSet2;
        TIBUpdateSQL *IBUpdateSQL2;
        TDBNavigator *DBNavigator2;
        TDataSource *DataSource4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TDBEdit *DBEdit17;
        TDBEdit *DBEdit18;
        TEdit *Edit8;
        TSpeedButton *SpeedButton2;
        TIBQuery *IBQuery3;
        TIBQuery *IBQuery4;
        void __fastcall CBTablesChange(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall DBEdit5Change(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall DBEdit4Change(TObject *Sender);
        void __fastcall DBEdit6Change(TObject *Sender);
        void __fastcall Edit3Change(TObject *Sender);
        void __fastcall Edit4Change(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall DBEdit9Change(TObject *Sender);
        void __fastcall DBEdit3Change(TObject *Sender);
        void __fastcall Edit6Change(TObject *Sender);
        void __fastcall Edit5Change(TObject *Sender);
        void __fastcall Edit7Change(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
