//---------------------------------------------------------------------------
#include "Project3.h"
#include "fstream.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include <Graphics.hpp>
#include <Jpeg.hpp>
TWebModule1 *WebModule1;
int i=0;
AnsiString ProgrammName, ServerName, CgiDirName;
char ProgrammName0[1024], ServerName0[1024], CgiDirName0[1024];

//---------------------------------------------------------------------------
__fastcall TWebModule1::TWebModule1(TComponent* Owner)
	: TWebModule(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TWebModule1::WebModule1WebActionItem1Action(
      TObject *Sender, TWebRequest *Request, TWebResponse *Response,
      bool &Handled)
{
IBDatabase1->Connected=true;
IBQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::DataSetTableProducer1FormatCell(
      TObject *Sender, int CellRow, int CellColumn, THTMLBgColor &BgColor,
      THTMLAlign &Align, THTMLVAlign &VAlign, AnsiString &CustomAttrs,
      AnsiString &CellData)
{
if ((CellRow>0)&&(CellColumn==4))
CellData="<a href=\""+ServerName+CgiDirName+ProgrammName+"/notebook?N=" + DataSetTableProducer1->Columns->Items[0]->Field->AsString +"\">подробнее</a>";
if ((CellRow>0)&&(CellColumn==5))
CellData="<form method=\"POST\" action=\""+ServerName+CgiDirName+ProgrammName+"/offer\">Заказать: <input type=\"text\" name=\"AMOUNT\"> шт. <input type=\"hidden\" name=\"P_ID\" value=\"" + DataSetTableProducer1->Columns->Items[0]->Field->AsString +  "\"><Script language=\"JavaScript\">document.write('<input type=\"hidden\" name=\"C_ID\" value=\"'+ username + '\"');</SCRIPT>\"><input type=\"submit\" value=\"Заказать\" name=\"B1\"></FORM>";
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::WebModule1recordAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
IBQuery2->ParamByName("N")->AsString=Request->QueryFields->Values["N"];
IBQuery2->Open();
Response->Content=DataSetPageProducer1->Content();
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::DataSetPageProducer1HTMLTag(TObject *Sender,
      TTag Tag, const AnsiString TagString, TStrings *TagParams,
      AnsiString &ReplaceText)
{
if (TagString=="PHOTO")
ReplaceText="<img src=Nphoto?N="+ IBQuery2->FieldByName("P_ID")->AsString +">";
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::WebModule1photoAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
TLocateOptions SearchOptions;
IBTable1->Active=true;
//IBQuery2->Open();
TMemoryStream *S1 = new TMemoryStream();
Graphics::TBitmap *B = new Graphics::TBitmap();
TJPEGImage* JPEG=new TJPEGImage();
IBTable1->Locate("P_ID",Request->QueryFields->Values["N"],SearchOptions<<loPartialKey<<loCaseInsensitive);
TStream *S2=IBTable1->CreateBlobStream(IBTable1->FieldByName("PIC_NOTE"),bmRead);
S2->Position=0;
B->LoadFromStream(S2);
//B->SaveToFile("noteb.bmp");
JPEG->Assign(B);
JPEG->SaveToStream(S1);
//JPEG->SaveToFile("note.jpg");
S1->Position=0;
Response->ContentType="image/jpeg";
Response->ContentStream=S1;
Response->SendResponse();
//TEST
//TMemoryStream *M1 = new TMemoryStream();
//TStream *S3=IBTable1->CreateBlobStream(IBTable1->FieldByName("PIC_NOTE"),bmRead);
//M1->CopyFrom(S3,S3->Size);
//M1->SaveToFile("pic1.bmp");
//S3->Position=0;
//B->LoadFromStream(S3);
//B->SaveToFile("noteb0.bmp");
delete B;
delete JPEG;
//delete S2;
//delete S1;
IBTable1->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1VphotoAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
TLocateOptions SearchOptions;
IBTable2->Active=true;
//IBQuery2->Open();
TMemoryStream *S1 = new TMemoryStream();
Graphics::TBitmap *B = new Graphics::TBitmap();
TJPEGImage* JPEG=new TJPEGImage();
IBTable2->Locate("P_ID",Request->QueryFields->Values["N"],SearchOptions<<loPartialKey<<loCaseInsensitive);
TStream *S2=IBTable2->CreateBlobStream(IBTable2->FieldByName("PIC_VIDEO"),bmRead);
S2->Position=0;
B->LoadFromStream(S2);
//B->SaveToFile("noteb.bmp");
JPEG->Assign(B);
JPEG->SaveToStream(S1);
//JPEG->SaveToFile("note.jpg");
S1->Position=0;
Response->ContentType="image/jpeg";
Response->ContentStream=S1;
Response->SendResponse();
//TEST
//TMemoryStream *M1 = new TMemoryStream();
//TStream *S3=IBTable1->CreateBlobStream(IBTable1->FieldByName("PIC_NOTE"),bmRead);
//M1->CopyFrom(S3,S3->Size);
//M1->SaveToFile("pic1.bmp");
//S3->Position=0;
//B->LoadFromStream(S3);
//B->SaveToFile("noteb0.bmp");
delete B;
delete JPEG;
delete S2;
delete S1;
IBTable2->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::DataSetTableProducer2FormatCell(
      TObject *Sender, int CellRow, int CellColumn, THTMLBgColor &BgColor,
      THTMLAlign &Align, THTMLVAlign &VAlign, AnsiString &CustomAttrs,
      AnsiString &CellData)
{
if ((CellRow>0)&&(CellColumn==4))
CellData="<a href=\""+ServerName+CgiDirName+ProgrammName+"/videocard?N=" + DataSetTableProducer2->Columns->Items[0]->Field->AsString +"\">подробнее</a>";
if ((CellRow>0)&&(CellColumn==5))
CellData="<form method=\"POST\" action=\""+ServerName+CgiDirName+ProgrammName+"/offer\">Заказать: <input type=\"text\" name=\"AMOUNT\"> шт. <input type=\"hidden\" name=\"P_ID\" value=\"" + DataSetTableProducer2->Columns->Items[0]->Field->AsString +  "\"><Script language=\"JavaScript\">document.write('<input type=\"hidden\" name=\"C_ID\" value=\"'+ username + '\"');</SCRIPT>\"><input type=\"submit\" value=\"Заказать\" name=\"B1\"></FORM>";
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::DataSetTableProducer3FormatCell(
      TObject *Sender, int CellRow, int CellColumn, THTMLBgColor &BgColor,
      THTMLAlign &Align, THTMLVAlign &VAlign, AnsiString &CustomAttrs,
      AnsiString &CellData)
{
if ((CellRow==1)&&(CellColumn==2))
CellData="<a href=\""+ServerName+CgiDirName+ProgrammName+"/notebook_cat\">подробнее</a>";
if ((CellRow==2)&&(CellColumn==2))
CellData="<a href=\""+ServerName+CgiDirName+ProgrammName+"/videocard_cat\">подробнее</a>";
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::DataSetPageProducer2HTMLTag(TObject *Sender,
      TTag Tag, const AnsiString TagString, TStrings *TagParams,
      AnsiString &ReplaceText)
{
if (TagString=="PHOTO")
{
TLocateOptions SearchOptions;
IBTable2->Locate("P_ID",Request->QueryFields->Values["N"],SearchOptions<<loPartialKey<<loCaseInsensitive);
ReplaceText="<img src=Vphoto?N="+ IBTable2->FieldByName("P_ID")->AsString +">";
}
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1videocardAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
//IBDatabase1->Connected=true;
//IBQuery3->ParamByName("N")->AsString=Request->QueryFields->Values["N"];
//IBQuery3->ParamByName("N")->As="10";
//IBQuery3->Open();
TLocateOptions SearchOptions;
IBTable2->Locate("P_ID",Request->QueryFields->Values["N"],SearchOptions<<loPartialKey<<loCaseInsensitive);
Response->Content=DataSetPageProducer2->Content();
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1videocard_catAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
IBDatabase1->Connected=true;
IBQuery4->Open();
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1offerAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
//int C_ID=1; //get from cookie!
bool errorDATA=false;
AnsiString HTMLHeader="<HTML><HEAD><TITLE>База данных \"Рога и Копыта\"</TITLE><link rel=stylesheet href=\"http://hedgehog/istyle.css\" type=\"text/css\"></HEAD><BODY>", HTMLFooter="</BODY></HTML>",RespCont;
if ((Request->ContentFields->Values["C_ID"]).ToIntDef(0)==0)
{
errorDATA=true;
RespCont=HTMLHeader+"<p>"+(Request->ContentFields->Values["C_ID"])+" Вы незарегистрированы в нашем магазине! Пожалуйста, прежде чем заказывать какой-либо товар, <a href=\""+ServerName+CgiDirName+ProgrammName+"/register\">зарегистрируйтесь</a>! Или вернитесь <a href=\"javascript:history.back()\">назад.";
}
if ((Request->ContentFields->Values["AMOUNT"]).ToIntDef(0)==0)
{
errorDATA=true;
RespCont=RespCont+Request->ContentFields->Values["AMOUNT"]+"<p>Вы ввели неккоректное количество товара! <a href=\"javascript:history.back()\">Назад</a>";
}
if (errorDATA)
{
Response->Content=RespCont+HTMLFooter;
Handled=true;
}
else
{
int maxOff=0;
IBQuery3->SQL->Text="select max(OFFER_ID) as max_O_ID from OFFERS";
IBQuery3->Open();
AnsiString TMP;
TMP=(IBQuery3->FieldValues["max_O_ID"]);
maxOff=TMP.ToIntDef(0);
maxOff=maxOff+1;
//Response->Content=HTMLHeader+"<p>"+AnsiString(maxOff) + " || " + Request->ContentFields->Values["AMOUNT"] + " " + Request->ContentFields->Values["P_ID"] + " " + Request->ContentFields->Values["C_ID"] + " " + AnsiString(Date()) + " F, F" + HTMLFooter;
//Handled=true;
IBQuery3->Close();
IBQuery3->SQL->Text="insert into OFFERS(OFFER_ID, C_ID, P_ID, AMOUNT, O_DATE, PAYMENT, O_DONE) values(" + AnsiString(maxOff) + ", " + Request->ContentFields->Values["C_ID"] + ", " + Request->ContentFields->Values["P_ID"] +"," + Request->ContentFields->Values["AMOUNT"] +", '" + AnsiString(Date()) +"', 'F', 'F')";
//IBQuery3->SQL->Text="insert into OFFERS values(7, 2, 2, 1, 23.08.1986, 'F', 'F')";
IBQuery3->Open();
Response->Content=HTMLHeader+"<p>Ваш заказ оформлен! В ближайшее заказ будет выполнен. В случае каких-либо затруднений наши сотрудники свяжутся с вами. <p>Спасибо за заказ!<p>Теперь вы можете снова <a href=\"javascript:history.back()\">вернуться</a> в наш магазин."+HTMLFooter;
Handled=true;
IBQuery3->Close();
}
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1registerAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
int maxOff=0;
IBQuery3->SQL->Text="select max(CUSTOMER_ID) as max_C_ID from CUSTOMERS";
IBQuery3->Open();
AnsiString TMP;
TMP=(IBQuery3->FieldValues["max_C_ID"]);
maxOff=TMP.ToIntDef(0);
maxOff=maxOff+1;
Response->Content="<HTML><HEAD><TITLE>Интернет-магазин Рога и Копыта - регистрация</TITLE><link rel=stylesheet href=\""+ServerName+CgiDirName+"/istyle.css\" type=\"text/css\"></HEAD><BODY>";
Response->Content=Response->Content+"<p><b>Ваш уникальный <i>ID="+AnsiString(maxOff)+"</i> - запомните его!</b></H1><p>Все поля обязательны для заполнения!<p><form method=\"POST\" action=\""+ServerName+CgiDirName+ProgrammName+"/register_new\">Фамилия: <input type=\"text\" name=\"FAMILY_NAME\"> <BR>Имя: <input type=\"text\" name=\"FIRST_NAME\"> <BR> Отчество: <input type=\"text\" name=\"LAST_NAME\"> <BR> Адрес: <input type=\"text\" name=\"ADRESS\"> <BR> Телефон: <input type=\"text\" name=\"PHONE\"> <BR> E-mail: <input type=\"text\" name=\"EMAIL\"><input type=\"hidden\" name=\"C_ID\" value="+AnsiString(maxOff)+"><p><input type=\"submit\" value=\"Зарегистрироваться!\" name=\"B1\"></form>";
Response->Content=Response->Content+"<p>Если вы уже зарегистрированный пользователь, то вы можете вернуться <a href=\"javascript:history.back()\">назад</a>.</BODY></HTML>";
Handled=true;
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1register_newAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{
int maxOff=0;
IBQuery3->SQL->Text="select max(CUSTOMER_ID) as max_C_ID from CUSTOMERS";
IBQuery3->Open();
AnsiString TMP;
TMP=(IBQuery3->FieldValues["max_C_ID"]);
maxOff=TMP.ToIntDef(0);
maxOff=maxOff+1;
IBQuery3->Close();
//Response->Content=HTMLHeader+"<p>"+AnsiString(maxOff) + " || " + Request->ContentFields->Values["AMOUNT"] + " " + Request->ContentFields->Values["P_ID"] + " " + Request->ContentFields->Values["C_ID"] + " " + AnsiString(Date()) + " F, F" + HTMLFooter;
//Handled=true;
//IBQuery3->Close();

IBQuery3->SQL->Text="insert into CUSTOMERS(CUSTOMER_ID, FAMILY_NAME, FIRST_NAME, LAST_NAME, ADRESS, PHONE, EMAIL, OFFERS_TOTAL, OFFERS_NOW, VIP) values ("+ AnsiString(maxOff)+", '"+Request->ContentFields->Values["FAMILY_NAME"]+"', '"+Request->ContentFields->Values["FIRST_NAME"]+"', '"+Request->ContentFields->Values["LAST_NAME"]+"', '"+Request->ContentFields->Values["ADRESS"]+"', '"+Request->ContentFields->Values["PHONE"]+"', '"+Request->ContentFields->Values["EMAIL"]+"', 0, 'F', 'F')";
IBQuery3->Open();
//AnsiString HTMLHeader1="<HTML><HEAD><TITLE>Регистрация в Рогах и Копытах</TITLE></HEAD><BODY>";
//AnsiString HTMLHeader2="<script language=\"JavaScript\"><!--var username="+AnsiString(maxOff)+";    pathname = location.pathname;    myDomain = pathname.substring(0,pathname.lastIndexOf('/')) +'/';    var largeExpDate = new Date ();    largeExpDate.setTime(largeExpDate.getTime() + (365 * 24 * 3600 * 1000)); SetCookie('username',username,largeExpDate,myDomain);function SetCookie (name, value) {        var argv = SetCookie.arguments;        var argc = SetCookie.arguments.length;        var expires = (argc > 2) ? argv[2] : null;        var path = (argc > 3) ? argv[3] : null;        var domain = (argc > 4) ? argv[4] : null;        var secure = (argc > 5) ? argv[5] : false;        document.cookie = name + \"=\" + escape (value) +                ((expires == null) ? \"\" : (\"; expires=\" + expires.toGMTString())) +                ((path == null) ? \"\" : (\"; path=\" + path)) +                ((domain == null) ? \"\" : (\"; domain=\" + domain)) + ((secure == true) ? \"; secure\" : \"\");}--></SCRIPT>";
//AnsiString HTMLFooter="<script language=\"JavaScript\">document.write('<p align=center>Hello, ' + username + '</p>');--></SCRIPT></BODY></HTML>";
//Response->Content=HTMLHeader1+HTMLHeader2+"<p>Вы зарегистрированы в системе! Теперь вы можете снова <a href=\"javascript:history.back()\">вернуться</a> в наш магазин."+HTMLFooter;
Response->Content=DataSetPageProducer4->Content();
Handled=true;
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModuleCreate(TObject *Sender)
{
ifstream f;
//ofstream w;
f.open("server.ini");
f.getline(ServerName0,1024);
f.getline(CgiDirName0,1024);
f.getline(ProgrammName0,1024);
f.close();
ProgrammName=AnsiString(ProgrammName0);
ServerName=AnsiString(ServerName0);
CgiDirName=AnsiString(CgiDirName0);
//w.open("readme.txt");
//w << ServerName0 << "! !" << CgiDirName0 << "! !" << ProgrammName0 << "! !";
//w.close();
}
//---------------------------------------------------------------------------

