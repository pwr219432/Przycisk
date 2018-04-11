//---------------------------------------------------------------------------

#ifndef PrzyciskH
#define PrzyciskH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TWITAJ : public TForm
{
__published:	// IDE-managed Components
        TButton *Przycisk;
        TLabel *Label1;
        void __fastcall PrzyciskClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TWITAJ(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWITAJ *WITAJ;
//---------------------------------------------------------------------------
#endif
