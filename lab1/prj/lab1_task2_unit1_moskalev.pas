unit lab1_task2_unit1_moskalev;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, ExtCtrls,
  Menus, lab1_task2_unit2_moskalev, lab1_task2_validator_moskalev, math;

type

  { TForm1 }

  TForm1 = class(TForm)
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    MainMenu1: TMainMenu;
    About: TMenuItem;
    ResButton: TButton;
    Formula: TImage;
    ResLabel: TLabel;
    x_input: TEdit;
    y_input: TEdit;
    z_input: TEdit;
    procedure AboutClick(Sender: TObject);
    procedure ResButtonClick(Sender: TObject);

  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.ResButtonClick(Sender: TObject);
const Pi = 3.14159;
var
  tempSTR : string;
  x,y,z : extended;
begin
  if (x_input.text = '') or (y_input.text = '') or (z_input.text = '') then
  begin reslabel.caption := 'Задайте усі значення.'; exit; end;
  tempSTR := x_input.text;                                                  // X
  if ReturnNum(tempSTR) = 'N' then
  begin reslabel.caption := 'Невірне число Х.'; exit; end;
  x := StrToFloat(ReturnNum(tempSTR));
  tempSTR := y_input.text;                                                  // Y
  if ReturnNum(tempSTR) = 'N' then
  begin reslabel.caption := 'Невірне число Y.'; exit; end;
  y := StrToFloat(ReturnNum(tempSTR));
  tempSTR := z_input.text;                                                  // Z
  if ReturnNum(tempSTR) = 'N' then
  begin reslabel.caption := 'Невірне число Z.'; exit; end;
  z := StrToFloat(ReturnNum(tempSTR));


  if Interv(x,y,z) = false then
  begin reslabel.caption := 'Одне з чисел не відповідає діапазону.'; exit; end;

  //Формула
  ResLabel.Caption := 'Результат: ' + FloatToStr((cos(x+y)) - (sqrt(power(z,abs(x)))) + (sqrt(Pi*power(x,y))));

end;

procedure TForm1.AboutClick(Sender: TObject);
begin
  Form2.Show;
end;



end.

