//******************************************************
//* ASC - Absolutely Safe Chat                         *
//******************************************************
//* about_form.cpp                                     *
//* ����:    10.09.2005                                *
//* ������:  1.3.0.3	                               *
//* �����:   �������� ���� ��������� (DrAF)           *
//******************************************************

//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "about_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAboutForm *AboutForm;
//---------------------------------------------------------------------------
__fastcall TAboutForm::TAboutForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAboutForm::OKButtonClick(TObject *Sender)
{
        AboutForm->Close();        
}
//---------------------------------------------------------------------------
