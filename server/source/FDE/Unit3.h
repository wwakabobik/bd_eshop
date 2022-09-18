//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
#include "Unit1.h"
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBTables.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *CAT_NAME;
        TComboBox *CAT_NO;
        TComboBox *CAT_TABLE;
        TDBEdit *PR_NO;
        TDBEdit *PC_ID;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall CAT_NAMEChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
