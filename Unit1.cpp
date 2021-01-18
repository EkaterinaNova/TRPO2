//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
	TPoint points[3];
	//Table
	Form1->Canvas->Brush->Color = clGray;
	Form1->Canvas->Rectangle(-2, 100, 500, 500);
	//Candy
	Form1->Canvas->Brush->Color = clPurple;
	Form1->Canvas->Rectangle(120, 120, 270, 190);
	points[0] = Point(119, 155);
	points[1] = Point(70, 120);
	points[2] = Point(70, 190);
	Form1->Canvas->Polygon(points, 2);
	points[0] = Point(271, 155);
	points[1] = Point(320, 120);
	points[2] = Point(320, 190);
	Form1->Canvas->Polygon(points, 2);
	Form1->Canvas->Brush->Color = clYellow;
	Form1->Canvas->Rectangle(180, 120, 210, 190);
	Form1->Canvas->Rectangle(120, 140, 270, 170);
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(180,140,210,170);
}
//---------------------------------------------------------------------------
