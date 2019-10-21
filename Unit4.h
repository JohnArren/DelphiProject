//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TDBNavigator *DBNavigator1;
        TLabel *Label2;
        TLabel *Label1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TCheckBox *CheckBox1;
        TLabel *Label300;
        TLabel *Label301;
        TLabel *Label302;
        TLabel *Label303;
        TLabel *Label304;
        TDBGrid *DBGrid1;
        TPanel *Panel2;
        TLabel *Label3;
        TButton *Button54;
        TDBMemo *DBMemo1;
        TLabel *Label4;
        TEdit *Edit1;
        TButton *ButtonExit;
        TButton *ButtonLogOut;
        TButton *Button534634;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall ShowSQL();
        void __fastcall ButtonLogOutClick(TObject *Sender);
        void __fastcall Button54Click(TObject *Sender);
        void __fastcall ButtonExitClick(TObject *Sender);
        void __fastcall DBGrid1DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumn *Column,
          TGridDrawState State);
        void __fastcall Button534634Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
 