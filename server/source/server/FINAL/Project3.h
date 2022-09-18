//---------------------------------------------------------------------------
#ifndef Project3H
#define Project3H
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <HTTPApp.hpp>
#include <DB.hpp>
#include <DBWeb.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBQuery.hpp>
#include <Provider.hpp>
#include <DSProd.hpp>
#include <HTTPProd.hpp>
#include <IBTable.hpp>
//---------------------------------------------------------------------------
class TWebModule1 : public TWebModule
{
__published:	// IDE-managed Components
        TIBQuery *IBQuery1;
        TIBDatabase *IBDatabase1;
        TIBTransaction *IBTransaction1;
        TDataSetTableProducer *DataSetTableProducer1;
        TDataSetPageProducer *DataSetPageProducer1;
        TIBQuery *IBQuery2;
        TIBTable *IBTable1;
        TDataSetPageProducer *DataSetPageProducer2;
        TIBTable *IBTable2;
        TDataSetTableProducer *DataSetTableProducer2;
        TIBQuery *IBQuery4;
        TIBQuery *IBQuery5;
        TDataSetTableProducer *DataSetTableProducer3;
        TIBTable *IBTable3;
        TIBQuery *IBQuery3;
        TDataSetPageProducer *DataSetPageProducer4;
        void __fastcall WebModule1WebActionItem1Action(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall DataSetTableProducer1FormatCell(TObject *Sender,
          int CellRow, int CellColumn, THTMLBgColor &BgColor,
          THTMLAlign &Align, THTMLVAlign &VAlign, AnsiString &CustomAttrs,
          AnsiString &CellData);
        void __fastcall WebModule1recordAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall DataSetPageProducer1HTMLTag(TObject *Sender,
          TTag Tag, const AnsiString TagString, TStrings *TagParams,
          AnsiString &ReplaceText);
        void __fastcall WebModule1photoAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall WebModule1VphotoAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall DataSetTableProducer2FormatCell(TObject *Sender,
          int CellRow, int CellColumn, THTMLBgColor &BgColor,
          THTMLAlign &Align, THTMLVAlign &VAlign, AnsiString &CustomAttrs,
          AnsiString &CellData);
        void __fastcall DataSetTableProducer3FormatCell(TObject *Sender,
          int CellRow, int CellColumn, THTMLBgColor &BgColor,
          THTMLAlign &Align, THTMLVAlign &VAlign, AnsiString &CustomAttrs,
          AnsiString &CellData);
        void __fastcall DataSetPageProducer2HTMLTag(TObject *Sender,
          TTag Tag, const AnsiString TagString, TStrings *TagParams,
          AnsiString &ReplaceText);
        void __fastcall WebModule1videocardAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall WebModule1videocard_catAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall WebModule1offerAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall WebModule1registerAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall WebModule1register_newAction(TObject *Sender,
          TWebRequest *Request, TWebResponse *Response, bool &Handled);
        void __fastcall WebModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TWebModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWebModule1 *WebModule1;
//---------------------------------------------------------------------------
#endif
