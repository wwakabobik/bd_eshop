//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CSPIN.h"
#include <Buttons.hpp>
#include <DB.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <IBDatabase.hpp>
#include <IBCustomDataSet.hpp>
#include <IBQuery.hpp>
#include <DBClient.hpp>
#include <DBGrids.hpp>
#include <DBLocal.hpp>
#include <DBLocalI.hpp>
#include <Grids.hpp>
#include <IBTable.hpp>
#include <IBUpdateSQL.hpp>
#include <Provider.hpp>
#include <DBCtrls.hpp>
#include "Unit2.h"
#include "Unit3.h"
#include <ExtDlgs.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *CBServerType;
        TComboBox *CBServerName;
        TComboBox *CBProtocol;
        TLabeledEdit *TDatabase;
        TSpeedButton *SpeedButton1;
        TComboBox *CBPageSize;
        TComboBox *CBCharSet;
        TComboBox *SQLDialect;
        TEdit *TUserName;
        TEdit *TPassword;
        TButton *Button1;
        TCSpinEdit *TLength;
        TLabeledEdit *TSecondaryDatabase;
        TSpeedButton *SpeedButton2;
        TCSpinEdit *TLength2;
        TButton *Button3;
        TMemo *Memo1;
        TIBDatabase *IBDatabase1;
        TOpenDialog *OpenDialog1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TIBQuery *IBQuery1;
        TIBTransaction *IBTransaction1;
        TIBDataSet *IBDataSet1;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        TButton *Button2;
        TButton *Button4;
        TMemo *Memo2;
        TButton *Button5;
        TMemo *Memo3;
        TLabel *Label8;
        TLabel *Label9;
        TDBNavigator *DBNavigator1;
        TComboBox *SQLStatement;
        TButton *Button6;
        TButton *Button7;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TButton *Button8;
        TButton *Button9;
        TComboBox *CBTables;
        TIBUpdateSQL *IBUpdateSQL1;
        TButton *Button10;
        TDBImage *DBImage1;
        TButton *IDBPic;
        TOpenPictureDialog *OpenPictureDialog1;
        TEdit *IDBBLOB;
        TButton *Button11;
        TIBDataSet *IBDataSet2;
        TDataSource *DataSource2;
        TIBUpdateSQL *IBUpdateSQL2;
        TIBTransaction *IBTransaction2;
        TDBEdit *DBEdit1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall CBServerTypeChange(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall CBTablesChange(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall IDBPicClick(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
