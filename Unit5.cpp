//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
int q,i;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormShow(TObject *Sender)
{
/*ADOQuery1->Active = false;
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT [Сотрудники]![Фамилия],[Сотрудники]![Имя],[Сотрудники]![Отчество] , Сотрудники.Код_Сотрудника FROM Сотрудники;");
ADOQuery1->Active = true;
DBLookupComboBox1->ListSource = DataSource1;
DBLookupComboBox1->ListField = ADOQuery1->FieldByName("ФИО")->AsString;
DBLookupComboBox1->KeyField = ADOQuery1->FieldByName("Код_Сотрудника")->AsInteger;
q = ADOQuery1->RecordCount;
for (i=0;i<q;i++){
ComboBox2->Items->Add(ADOQuery1->FieldByName("ФИО")->AsString);
 if (i<q){
 ADOQuery1->Next();
 }
 }*/
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
ADOTable1->Insert();
ADOTable1->FieldByName("Код_Сотрудника")->AsInteger = DBLookupComboBox1->KeyValue;
ADOTable1->FieldByName("Что")->AsString = Edit1->Text;
ADOTable1->FieldByName("Когда")->AsDateTime = DateTimePicker1->Date;
ADOTable1->Post();
ShowMessage("Запись добавлена");
}
//---------------------------------------------------------------------------

