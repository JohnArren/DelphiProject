//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
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

void __fastcall TForm1::Button1Click(TObject *Sender)
{
if ( (Edit1->Text) == ' ' ){
ShowMessage ("Введите логин");
}
else
if ( (Edit2->Text) == ' ' ){
ShowMessage ("Введите логин");
}
else
{
DataModule3->ADOQuery1->Active = false;
DataModule3->ADOQuery1->SQL->Clear();
DataModule3->ADOQuery1->SQL->Add("SELECT Сотрудники.Логин, Сотрудники.Пароль, Сотрудники.Код_Сотрудника, Сотрудники.Фамилия,Сотрудники.Имя,Сотрудники.Отчество, Сотрудники.Должность FROM Сотрудники WHERE (((Сотрудники.Логин)=:p1) AND ((Сотрудники.Пароль)=:p2)) ; ");
DataModule3->ADOQuery1->Parameters->ParamByName ("p1")->Value = Edit1->Text;
DataModule3->ADOQuery1->Parameters->ParamByName ("p2")->Value = Edit2->Text;
DataModule3->ADOQuery1->Active = true;
Edit3->Text = DataModule3->ADOQuery1->FieldByName("Логин")->AsString;
Edit4->Text = DataModule3->ADOQuery1->FieldByName("Пароль")->AsString;
Edit5->Text = DataModule3->ADOQuery1->FieldByName("Должность")->AsString;
Edit6->Text = DataModule3->ADOQuery1->FieldByName("Фамилия")->AsString;
Edit7->Text = DataModule3->ADOQuery1->FieldByName("Имя")->AsString;
Edit8->Text = DataModule3->ADOQuery1->FieldByName("Отчество")->AsString;
if ((Edit3->Text) == ' ' ){
ShowMessage ("Логина не существует");
Edit1->Clear();
Edit2->Clear();
}
        else if ((Edit2->Text) != (DataModule3->ADOQuery1->FieldByName("Пароль")->AsString))
        { ShowMessage ("Пароль введён не верно");
Edit1->Clear();
Edit2->Clear();
}
        else if ((Edit5->Text) == "User") {
        Form1->Hide();
        Form4->Label300->Caption = IntToStr(DataModule3->ADOQuery1->FieldByName("Код_Сотрудника")->AsInteger);
        Form4->Label301->Caption = DataModule3->ADOQuery1->FieldByName("Фамилия")->AsString;
        Form4->Label302->Caption = DataModule3->ADOQuery1->FieldByName("Имя")->AsString;
        Form4->Label303->Caption = DataModule3->ADOQuery1->FieldByName("Отчество")->AsString;
        Form4->Show();
Edit1->Clear();
Edit2->Clear();
        }
        else if ((Edit5->Text) == "Admin") {
        Form1->Hide();
        Form2->Label300->Caption = IntToStr(DataModule3->ADOQuery1->FieldByName("Код_Сотрудника")->AsInteger);
        Form2->Label301->Caption = DataModule3->ADOQuery1->FieldByName("Фамилия")->AsString;
        Form2->Label302->Caption = DataModule3->ADOQuery1->FieldByName("Имя")->AsString;
        Form2->Label303->Caption = DataModule3->ADOQuery1->FieldByName("Отчество")->AsString;
        Form2->Show();
Edit1->Clear();
Edit2->Clear();
        }
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{
ShellExecute(0,"open","default.exe",NULL,NULL,SW_MINIMIZE);        
}
//---------------------------------------------------------------------------

