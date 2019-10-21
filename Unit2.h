//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TPanel *Panel6;
        TPanel *Panel1;
        TPanel *Panel2;
        TLabel *Label1;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TButton *Button1;
        TComboBox *ComboBox1;
        TPanel *Panel3;
        TLabel *Label2;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TButton *Button2;
        TDBComboBox *DBComboBox1;
        TPanel *Panel4;
        TLabel *Label3;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TButton *Button3;
        TDBEdit *DBEdit11;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBComboBox *DBComboBox2;
        TDBEdit *DBEdit6;
        TPanel *Panel5;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TLabel *Label300;
        TLabel *Label301;
        TLabel *Label302;
        TLabel *Label303;
        TLabel *Label304;
        TPanel *Panel7;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TCheckBox *CheckBox1;
        TDBNavigator *DBNavigator2;
        TLabel *Label26;
        TLabel *Label25;
        TPanel *Panel8;
        TLabel *Label27;
        TLabel *Label28;
        TLabel *Label29;
        TLabel *Label30;
        TLabel *Label32;
        TLabel *Label33;
        TButton *Button8;
        TPanel *Panel9;
        TLabel *Label34;
        TButton *Button9;
        TPanel *Panel10;
        TLabel *Label41;
        TButton *Button10;
        TDateTimePicker *DateTimePicker1;
        TADOConnection *ADOConnection1;
        TADOQuery *ADOQuery1;
        TDataSource *DataSource1;
        TDBLookupComboBox *DBLookupComboBox1;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBGrid *DBGrid2;
        TLabel *Label31;
        TLabel *Label35;
        TDBEdit *DBEdit20;
        TLabel *Label37;
        TLabel *Label38;
        TMemo *Memo1;
        TLabel *Label40;
        TEdit *Edit6;
        TDBMemo *DBMemo1;
        TDBText *DBText1;
        TDBText *DBText2;
        TButton *ButtonLogOut;
        TButton *ButtonExit;
        TButton *Button11112;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Label23Click(TObject *Sender);
        void __fastcall Label24Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall ShowSQL();
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall DBLookupComboBox1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall DBGrid2DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumn *Column,
          TGridDrawState State);
        void __fastcall ButtonExitClick(TObject *Sender);
        void __fastcall ButtonLogOutClick(TObject *Sender);
        void __fastcall Button11112Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
 