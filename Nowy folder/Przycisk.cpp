//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Przycisk.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWITAJ *WITAJ;
//---------------------------------------------------------------------------
__fastcall TWITAJ::TWITAJ(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWITAJ::PrzyciskClick(TObject *Sender)
{
        if (Label1->Visible==false)
        {

          Label1 -> Visible = true;
          Przycisk -> Caption = "¯egnam";

        }
         else
         {

            Label1 -> Visible = false;
          Przycisk -> Caption = "Witam";

         }

}
//---------------------------------------------------------------------------
