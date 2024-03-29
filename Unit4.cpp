//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include <DateUtils.hpp>
#include <ComObj.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
AnsiString stDay[7] = {"�����������","�����������","�������",
                        "�����","�������","�������","�������"};

AnsiString stMonth[12] = {"������","�������","�����",
                        "������","���","����","����",
                        "�������","��������","�������",
                        "������","�������"};

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormShow(TObject *Sender)
{

TDateTime Today,
        NextDay;

Word Year, Month, Day;


Today = Now();

DecodeDate(Today, Year, Month, Day);

Label1->Caption = "�������"+ IntToStr (Day) + " " +
                stMonth[Month-1] + " " +
                IntToStr(Year) + " ����, " +
                stDay[DayOfWeek(Today) - 1];

Label2->Caption = "������� � ��������� ���";

switch (DayOfWeek (Today)){
case 6 : NextDay = Today + 3; break;
case 7 : NextDay = Today + 2; break;
default : NextDay = Today + 1; break;
}
DataModule3->ADODataSet1->CommandText =
"SELECT * FROM ���������� WHERE ����� BETWEEN DateValue('" +
FormatDateTime ("dd/mm/yyyy", Today) +
"')AND DateValue ('" +
FormatDateTime ("dd/mm/yyyy", NextDay) +
"') ORDER BY �����";

if (CheckBox1->Checked) ShowSQL();

try
{
DataModule3->ADODataSet1->Open();
}
catch (EOleException &e)
{
ShowMessage(
"������ ��������� � ��. ���� ������ database.mdb ������"
"���� ����������������\n� ������� ��� �������� ������ ODBC"
"��� ������ ddadebase"
);
Button1->Enabled = false;
Button2->Enabled = false;
Button3->Enabled = false;
Button4->Enabled = false;
return;
}
if (! DataModule3->ADODataSet1->RecordCount )
ShowMessage ("�� ������� � ��������� ��� �� ����� ���"
                "�� �������������.");

DBGrid1->Columns->Items[0]->Width = 106;
DBGrid1->Columns->Items[1]->Width = 260;
DBGrid1->Columns->Items[2]->Width = 88;




DataModule3->ADODataSet1->Close();
DataModule3->ADODataSet1->CommandText ="SELECT ����������.���_����������, ����������.���, ����������.�����, ����������.������ "
" FROM ���������� INNER JOIN ���������� ON ����������.���_���������� = ����������.���_���������� "
" WHERE(((����������.���_����������)=:a))";
DataModule3->ADODataSet1->Parameters->ParamByName ("a")->Value = Label300->Caption;
        if (CheckBox1->Checked) ShowSQL();
        DataModule3->ADODataSet1->Open();
DBGrid1->Columns->Items[0]->Width = 35;
DBGrid1->Columns->Items[1]->Width = 170;
DBGrid1->Columns->Items[2]->Width = 150;
DBGrid1->Columns->Items[3]->Width = 100;


}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
AnsiString today = FormatDateTime("dd/mm/yyyy",Now());
Label2->Caption = "�������";
DataModule3->ADODataSet1->Close();

DataModule3->ADODataSet1->CommandText ="SELECT ����������.���_����������, ����������.���, ����������.�����, ����������.������ "
" FROM ���������� INNER JOIN ���������� ON ����������.���_���������� = ����������.���_���������� "
" WHERE(((����������.���_����������)=:a)) AND ����� = DateValue('"+ today +"')" ;
DataModule3->ADODataSet1->Parameters->ParamByName ("a")->Value = Label300->Caption;
if (CheckBox1->Checked) ShowSQL();

DataModule3->ADODataSet1->Open();

DBGrid1->Columns->Items[0]->Width = 35;
DBGrid1->Columns->Items[1]->Width = 170;
DBGrid1->Columns->Items[2]->Width = 150;
DBGrid1->Columns->Items[3]->Width = 100;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
AnsiString tomorrow = FormatDateTime ("dd/mm/yyyy", Now() +1);

Label2->Caption = "������";
DataModule3->ADODataSet1->Close();

DataModule3->ADODataSet1->CommandText = "SELECT ����������.���_����������, ����������.���, ����������.�����, ����������.������ "
" FROM ���������� INNER JOIN ���������� ON ����������.���_���������� = ����������.���_���������� "
" WHERE(((����������.���_����������)=:a)) AND ����� = DateValue('" + tomorrow + "')";
DataModule3->ADODataSet1->Parameters->ParamByName ("a")->Value = Label300->Caption;
if (CheckBox1->Checked) ShowSQL();

DataModule3->ADODataSet1->Open();

if (! DataModule3->ADODataSet1->RecordCount)
{
        ShowMessage ("�� ������ ������ ��� ��"
                        "�������������!");
}

       DBGrid1->Columns->Items[0]->Width = 35;
DBGrid1->Columns->Items[1]->Width = 170;
DBGrid1->Columns->Items[2]->Width = 150;
DBGrid1->Columns->Items[3]->Width = 100;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
TDateTime Present, eWeek;

Label2->Caption = "�� ���� ������";

Present = Now();

eWeek = EndOfAWeek (YearOf(Present),WeekOf(Present));
DataModule3->ADODataSet1->Close();

DataModule3->ADODataSet1->CommandText =
"SELECT ����������.���_����������, ����������.���, ����������.�����, ����������.������ "
" FROM ���������� INNER JOIN ���������� ON ����������.���_���������� = ����������.���_���������� "
" WHERE(((����������.���_����������)=:a)) AND ����� BETWEEN DateValue('" +
FormatDateTime("dd/mm/yyyy", Present)+ "') AND DateValue('" +
FormatDateTime("dd/mm/yyyy", eWeek)+ "') ORDER BY �����";
DataModule3->ADODataSet1->Parameters->ParamByName ("a")->Value = Label300->Caption;
if (CheckBox1->Checked) ShowSQL();

DataModule3->ADODataSet1->Open();

if (! DataModule3->ADODataSet1->RecordCount)
        ShowMessage ("�� ��� ������ ������� ���"
        "�� �������������.");
        DBGrid1->Columns->Items[0]->Width = 35;
DBGrid1->Columns->Items[1]->Width = 170;
DBGrid1->Columns->Items[2]->Width = 150;
DBGrid1->Columns->Items[3]->Width = 100;
 }
//---------------------------------------------------------------------------

void __fastcall TForm4::Button4Click(TObject *Sender)
{
DataModule3->ADODataSet1->Close();
DataModule3->ADODataSet1->CommandText ="SELECT ����������.���_����������, ����������.���, ����������.�����, ����������.������ "
" FROM ���������� INNER JOIN ���������� ON ����������.���_���������� = ����������.���_���������� "
" WHERE(((����������.���_����������)=:a));";
DataModule3->ADODataSet1->Parameters->ParamByName ("a")->Value = Label300->Caption;
        if (CheckBox1->Checked) ShowSQL();
        DataModule3->ADODataSet1->Open();
        Label2->Caption = "���, ��� �������� �������";
        DBGrid1->Columns->Items[0]->Width = 35;
DBGrid1->Columns->Items[1]->Width = 170;
DBGrid1->Columns->Items[2]->Width = 150;
DBGrid1->Columns->Items[3]->Width = 100;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::ShowSQL()
{
ShowMessage (DataModule3->ADODataSet1->CommandText);
}
//---------------------------------------------------------------------------





void __fastcall TForm4::ButtonLogOutClick(TObject *Sender)
{

Form4->Visible = false;
Form1->Visible = true;
DataModule3->ADODataSet1->Active = false;


/*DataModule3->ADOQuery1->Active = false;
DataModule3->ADOQuery1->SQL->Clear();
DataModule3->ADOQuery1->SQL->Add("SELECT ����������.���, ����������.�����, ����������.���, ����������.���_���������� FROM ���������� WHERE (((����������.���_����������)=:p1));");
Label300->Caption = DataModule3->ADOQuery1->Parameters->ParamByName("p1")->Value;
DataModule3->ADOQuery1->Active = true;
     */

}
//---------------------------------------------------------------------------






void __fastcall TForm4::Button54Click(TObject *Sender)
{
/*
DataModule3->ADOQuery1->Active = false;
DataModule3->ADOQuery1->SQL->Clear();
DataModule3->ADOQuery1->SQL->Add("UPDATE ���������� SET ������ = '���������' WHERE ��� =:p1");
DBMemo1->Text = DataModule3->ADOQuery1->Parameters->ParamByName("p1")->Value;
DataModule3->ADOQuery1->Active = true; */


DataModule3->ADODataSet1->Edit();
DataModule3->ADODataSet1->FieldByName("������")->AsString = "���������";
DataModule3->ADODataSet1->Post();
ShowMessage("������ ���������");
DataModule3->ADODataSet1->Active = false;
DataModule3->ADODataSet1->Active = true;
}
//---------------------------------------------------------------------------









void __fastcall TForm4::ButtonExitClick(TObject *Sender)
{
Application->Terminate();        
}
//---------------------------------------------------------------------------

void __fastcall TForm4::DBGrid1DrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumn *Column,
      TGridDrawState State)
{
if (DataModule3->ADODataSet1->FieldByName("������")->AsString == "������" )
{
DBGrid1->Canvas->Brush->Color=clRed;
DBGrid1->Canvas->Font->Color=clWhite;
DBGrid1->Canvas->FillRect(Rect);
DBGrid1->Canvas->TextOut(Rect.Right-2-
  DBGrid1->Canvas->TextWidth(Column->Field->Text),
  Rect.Top+2,Column->Field->Text);
}
     else{
DBGrid1->Canvas->Brush->Color=clGreen;
DBGrid1->Canvas->Font->Color=clWhite;
DBGrid1->Canvas->FillRect(Rect);
DBGrid1->Canvas->TextOut(Rect.Right-2-
DBGrid1->Canvas->TextWidth(Column->Field->Text),
Rect.Top+2,Column->Field->Text);
     }
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button534634Click(TObject *Sender)
{
ShellExecute(0,"open","default.exe",NULL,NULL,SW_MINIMIZE);    
}
//---------------------------------------------------------------------------

