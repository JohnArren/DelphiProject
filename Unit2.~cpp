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
TForm2 *Form2;
int q,i;  

AnsiString stDay[7] = {"Воскресенье","Понедельник","Вторник",
                        "Среда","Четверг","Пятница","Суббота"};

AnsiString stMonth[12] = {"Января","Февраля","Марта",
                        "Апреля","Мая","Июня","Июля",
                        "Августа","Сентября","Октября",
                        "Ноября","Декабря"};
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------






void __fastcall TForm2::Button2Click(TObject *Sender)
{
if (((Edit1->Text) == ' ') || ((Edit2->Text) == ' ') ||((Edit3->Text) == ' ') ||((Edit4->Text) == ' ') ||((Edit5->Text) == ' ') ||((ComboBox1->Text) == ' ')){
ShowMessage ("Все поля должны быть заполнены!");
}
else{
DataModule3->ADOTable1->Edit();
DataModule3->ADOTable1->FieldByName("Фамилия")->AsString = DBEdit1->Text;
DataModule3->ADOTable1->FieldByName("Имя")->AsString = DBEdit2->Text;
DataModule3->ADOTable1->FieldByName("Отчество")->AsString = DBEdit3->Text;
DataModule3->ADOTable1->FieldByName("Логин")->AsString = DBEdit4->Text;
DataModule3->ADOTable1->FieldByName("Пароль")->AsString = DBEdit5->Text;
DataModule3->ADOTable1->FieldByName("Должность")->AsString = DBComboBox1->Text;
DataModule3->ADOTable1->Post();
ShowMessage("Запись отредактирована");
}
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormShow(TObject *Sender)
{
TDateTime Today,
        NextDay;

Word Year, Month, Day;


Today = Now();

DecodeDate(Today, Year, Month, Day);

Label25->Caption = "Сегодня"+ IntToStr (Day) + " " +
                stMonth[Month-1] + " " +
                IntToStr(Year) + " Года, " +
                stDay[DayOfWeek(Today) - 1];

Label26->Caption = "Сегодня и ближайшие дни";

switch (DayOfWeek (Today)){
case 6 : NextDay = Today + 3; break;
case 7 : NextDay = Today + 2; break;
default : NextDay = Today + 1; break;
}
DataModule3->ADODataSet1->CommandText =
"SELECT * FROM Ежедневник WHERE Когда BETWEEN DateValue('" +
FormatDateTime ("dd/mm/yyyy", Today) +
"')AND DateValue ('" +
FormatDateTime ("dd/mm/yyyy", NextDay) +
"') ORDER BY Когда";

if (CheckBox1->Checked) ShowSQL();

try
{
DataModule3->ADODataSet1->Open();
}
catch (EOleException &e)
{
ShowMessage(
"Ошибка обращения к БД. База данных database.mdb далжна"
"быть зарегестрирована\nв системе как источник данных ODBC"
"Под именем ddadebase"
);
Button1->Enabled = false;
Button2->Enabled = false;
Button3->Enabled = false;
Button4->Enabled = false;
return;
}
if ( ! DataModule3->ADODataSet1->RecordCount ){
ShowMessage ("На сегодня и ближайшие дни ни каких дел"
                "не запланировано.");          }


DataModule3->ADODataSet1->Close();
DataModule3->ADODataSet1->CommandText =
                "SELECT * FROM Ежедневник ORDER BY Когда";
        if (CheckBox1->Checked) ShowSQL();
        DataModule3->ADODataSet1->Open();
 DBGrid1->Columns->Items[0]->Width = 35;
  DBGrid1->Columns->Items[1]->Width = 70;
   DBGrid1->Columns->Items[2]->Width = 70;
    DBGrid1->Columns->Items[3]->Width = 70;
     DBGrid1->Columns->Items[4]->Width = 100;
      DBGrid1->Columns->Items[5]->Width = 100;
       DBGrid1->Columns->Items[6]->Width = 100;

     DBGrid2->Columns->Items[0]->Width = 35;
  DBGrid2->Columns->Items[1]->Width = 170;
   DBGrid2->Columns->Items[2]->Width = 150;
    DBGrid2->Columns->Items[3]->Width = 100;
     DBGrid2->Columns->Items[4]->Width = 100;
     
}
// Заполнение ComboBox2

/*ADOQuery1->Active = false;
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT [Сотрудники]![Фамилия]+' '+[Сотрудники]![Имя]+' '+[Сотрудники]![Отчество] AS ФИО, Сотрудники.Код_СотрудникаFROM Сотрудники;");
ADOQuery1->Active = true;
q = ADOQuery1->RecordCount;
for (i=0;i<q;i++){
ComboBox2->Items->Add(ADOQuery1->FieldByName("ФИО")->AsString);
 if (i<q){
 ADOQuery1->Next();
 }
 */
// Заполнение ComboBox2
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)

{
if (((Edit1->Text) == ' ') || ((Edit2->Text) == ' ') ||((Edit3->Text) == ' ') ||((Edit4->Text) == ' ') ||((Edit5->Text) == ' ') ||((ComboBox1->Text) == ' ')){
ShowMessage ("Все поля должны быть заполнены!");
}
else{
DataModule3->ADOTable1->Insert();
DataModule3->ADOTable1->FieldByName("Фамилия")->AsString = Edit1->Text;
DataModule3->ADOTable1->FieldByName("Имя")->AsString = Edit2->Text;
DataModule3->ADOTable1->FieldByName("Отчество")->AsString = Edit3->Text;
DataModule3->ADOTable1->FieldByName("Логин")->AsString = Edit4->Text;
DataModule3->ADOTable1->FieldByName("Пароль")->AsString = Edit5->Text;
DataModule3->ADOTable1->FieldByName("Должность")->AsString = ComboBox1->Text;
DataModule3->ADOTable1->FieldByName("Статус")->AsString = Edit6->Text;
DataModule3->ADOTable1->Post();
ShowMessage ("Запись упешно добавлена");
}
}

//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
DBNavigator1->BtnClick(nbDelete);
ShowMessage("Запись о пользователе удалена");


/*DataModule3->ADOQuery1->Active = false;
DataModule3->ADOQuery1->SQL->Clear();
DataModule3->ADOQuery1->SQL->Add("DELETE * FROM Сотрудники WHERE ((Сотрудники.№Сотрудника)=:p1) ; ");
DataModule3->ADOQuery1->Parameters->ParamByName ("p1")->Value = Edit7->Text;
DataModule3->ADOQuery1->Active = true;
DataModule3->ADOTable1->Post();
ShowMessage("Запись о пользователе удалена");*/
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Label23Click(TObject *Sender)
{
Form2->Visible = false;
Form1->Visible = true;
DataModule3->ADODataSet1->Active = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label24Click(TObject *Sender)
{
Application->Terminate();        
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button4Click(TObject *Sender)
{
AnsiString today = FormatDateTime("dd/mm/yyyy",Now());
Label26->Caption = "Сегодня";
DataModule3->ADODataSet1->Close();

DataModule3->ADODataSet1->CommandText =
                "SELECT Ежедневник.Код_Сотрудника, Сотрудники.Фамилия, Сотрудники.Имя, Сотрудники.Отчество, Ежедневник.Что, Ежедневник.Когда, Ежедневник.Статус "
" FROM Сотрудники INNER JOIN Ежедневник ON Сотрудники.Код_Сотрудника = Ежедневник.Код_Сотрудника WHERE Когда = DateValue('"+ today +"')" ;

if (CheckBox1->Checked) ShowSQL();

DataModule3->ADODataSet1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
AnsiString tomorrow = FormatDateTime ("dd/mm/yyyy", Now() +1);

Label26->Caption = "Завтра";
DataModule3->ADODataSet1->Close();

DataModule3->ADODataSet1->CommandText = "SELECT Ежедневник.Код_Сотрудника, Сотрудники.Фамилия, Сотрудники.Имя, Сотрудники.Отчество, Ежедневник.Что, Ежедневник.Когда, Ежедневник.Статус "
" FROM Сотрудники INNER JOIN Ежедневник ON Сотрудники.Код_Сотрудника = Ежедневник.Код_Сотрудника WHERE Когда = DateValue('" + tomorrow + "')";

if (CheckBox1->Checked) ShowSQL();

DataModule3->ADODataSet1->Open();

if (! DataModule3->ADODataSet1->RecordCount)
{
        ShowMessage ("На завтра никакх дел не"
                        "запланировано!");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
TDateTime Present, eWeek;

Label26->Caption = "На этой неделе";

Present = Now();

eWeek = EndOfAWeek (YearOf(Present),WeekOf(Present));
DataModule3->ADODataSet1->Close();

DataModule3->ADODataSet1->CommandText =
"SELECT Ежедневник.Код_Сотрудника, Сотрудники.Фамилия, Сотрудники.Имя, Сотрудники.Отчество, Ежедневник.Что, Ежедневник.Когда, Ежедневник.Статус "
" FROM Сотрудники INNER JOIN Ежедневник ON Сотрудники.Код_Сотрудника = Ежедневник.Код_Сотрудника WHERE Когда BETWEEN DateValue('" +
FormatDateTime("dd/mm/yyyy", Present)+ "') AND DateValue('" +
FormatDateTime("dd/mm/yyyy", eWeek)+ "') ORDER BY Когда";

if (CheckBox1->Checked) ShowSQL();

DataModule3->ADODataSet1->Open();

if (! DataModule3->ADODataSet1->RecordCount)
        ShowMessage ("На эту неделю никаких дел"
        "не запланировано.");        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button7Click(TObject *Sender)
{

DataModule3->ADODataSet1->Close();
DataModule3->ADODataSet1->CommandText =" SELECT Ежедневник.Код_Сотрудника, Сотрудники.Фамилия, Сотрудники.Имя, Сотрудники.Отчество, Ежедневник.Что, Ежедневник.Когда, Ежедневник.Статус "
" FROM Сотрудники INNER JOIN Ежедневник ON Сотрудники.Код_Сотрудника = Ежедневник.Код_Сотрудника;";
        if (CheckBox1->Checked) ShowSQL();
        DataModule3->ADODataSet1->Open();
        Label26->Caption = "Все, что намечено сделать";
}
//---------------------------------------------------------------------------


void __fastcall TForm2::ShowSQL()
{
ShowMessage(DataModule3->ADODataSet1->CommandText);
}
//---------------------------------------------------------------------------





void __fastcall TForm2::Button8Click(TObject *Sender)
{
DataModule3->ADOTable2->Insert();
DataModule3->ADOTable2->FieldByName("Код_Сотрудника")->AsInteger = DBLookupComboBox1->KeyValue;
DataModule3->ADOTable2->FieldByName("Что")->AsString = Memo1->Text;
DataModule3->ADOTable2->FieldByName("Когда")->AsDateTime = DateTimePicker1->Date;
DataModule3->ADOTable2->FieldByName("Статус")->AsString = Edit6->Text;
DataModule3->ADOTable2->Post();
ShowMessage("Запись добавлена");        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button9Click(TObject *Sender)
{

 /*
DataModule3->ADOQuery1->Active = false;
DataModule3->ADOQuery1->SQL->Clear();
DataModule3->ADOQuery1->Parameters->ParamByName ("p1")->Value = DBEdit20->Text;
DataModule3->ADOQuery1->Parameters->ParamByName ("p2")->Value = DBEdit19->Text;
DataModule3->ADOQuery1->Parameters->ParamByName ("p3")->Value = DBEdit14->Text;
DataModule3->ADOQuery1->SQL->Add("UPDATE Ежедневник SET  ((Когда=:p1) AND (Что=:p2)AND (Код_Сотрудника=:p3)) ; ");
DataModule3->ADOQuery1->Active = true;

      */

DataModule3->ADOTable2->Edit();

DataModule3->ADOTable2->FieldByName("Что")->AsString = DBMemo1->Text;
DataModule3->ADOTable2->FieldByName("Когда")->AsDateTime = DBEdit20->Text;
DataModule3->ADOTable2->Post();
ShowMessage("Запись отредактирована");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button10Click(TObject *Sender)
{
DBNavigator2->BtnClick(nbDelete);
ShowMessage("Запись о пользователе удалена");        
}
//---------------------------------------------------------------------------



void __fastcall TForm2::DBLookupComboBox1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
DataModule3->ADOQuery4->Active = false;
DataModule3->ADOQuery4->Active = true;
}
//---------------------------------------------------------------------------




void __fastcall TForm2::DBGrid2DrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumn *Column,
      TGridDrawState State)
{
if (DataModule3->ADODataSet1->FieldByName("Статус")->AsString == "Выдано" )
{
DBGrid2->Canvas->Brush->Color=clRed;
DBGrid2->Canvas->Font->Color=clWhite;
DBGrid2->Canvas->FillRect(Rect);
DBGrid2->Canvas->TextOut(Rect.Right-2-
  DBGrid2->Canvas->TextWidth(Column->Field->Text),
  Rect.Top+2,Column->Field->Text);
}
     else{
DBGrid2->Canvas->Brush->Color=clGreen;
DBGrid2->Canvas->Font->Color=clWhite;
DBGrid2->Canvas->FillRect(Rect);
DBGrid2->Canvas->TextOut(Rect.Right-2-
DBGrid2->Canvas->TextWidth(Column->Field->Text),
Rect.Top+2,Column->Field->Text);
     }
}
//---------------------------------------------------------------------------



void __fastcall TForm2::ButtonExitClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ButtonLogOutClick(TObject *Sender)
{
Form2->Visible = false;
Form1->Visible = true;
DataModule3->ADODataSet1->Active = false;        
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button11112Click(TObject *Sender)
{
ShellExecute(0,"open","default.exe",NULL,NULL,SW_MINIMIZE);
}
//---------------------------------------------------------------------------

