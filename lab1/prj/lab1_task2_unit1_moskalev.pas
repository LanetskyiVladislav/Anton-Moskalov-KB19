unit lab1_task2_unit1_moskalev;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, ExtCtrls,
  Menus, lab1_task2_unit2_moskalev;

type

  { TForm1 }

  TForm1 = class(TForm)
    Label1: TLabel;
    Label6: TLabel;
    Label7: TLabel;
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
const Numbers = ['0'..'9', ',', '.', '-'];
var
  tempSTR : string[255];
  i : byte;
  x_coms, y_coms, z_coms : boolean;

begin
  x_coms := false;
  y_coms := false;
  z_coms := false;
  tempSTR := x_input.text;
  for i:=1 to length(tempSTR) do
  //Проверка числа Х
  begin
  if not(tempSTR[i] in Numbers) then
  begin ResLabel.Caption := 'Помилка. Введене некоректне число (Х).'; exit; end;
  if ((tempSTR[i] = ',') or (tempSTR[i] = '.')) and (x_coms = true) then
  begin ResLabel.Caption := 'Помилка. Введене некоректне число (Х).'; exit; end;
  if (tempSTR[i] = '.') or (tempSTR[i] = ',') then
  begin tempSTR[i] := ','; x_input.text := tempSTR; x_coms := true; end;
  end;
  //Проверка числа У
  tempSTR := y_input.text;
  for i:=1 to length(tempSTR) do
  begin
  if not(tempSTR[i] in Numbers) then
  begin ResLabel.Caption := 'Помилка. Введене некоректне число (Y).'; exit; end;
  if ((tempSTR[i] = ',') or (tempSTR[i] = '.')) and (y_coms = true) then
  begin ResLabel.Caption := 'Помилка. Введене некоректне число (Y).'; exit; end;
  if (tempSTR[i] = '.') or (tempSTR[i] = ',') then
  begin tempSTR[i] := ','; y_input.text := tempSTR; y_coms := true; end;
  end;
  //Проверка числа З
  tempSTR := z_input.text;
  for i:=1 to length(tempSTR) do
  begin
  if not(tempSTR[i] in Numbers) then
  begin ResLabel.Caption := 'Помилка. Введене некоректне число (Z).'; exit; end;
  if ((tempSTR[i] = ',') or (tempSTR[i] = '.')) and (z_coms = true) then
  begin ResLabel.Caption := 'Помилка. Введене некоректне число (Z).'; exit; end;
  if (tempSTR[i] = '.') or (tempSTR[i] = ',') then
  begin tempSTR[i] := ','; z_input.text := tempSTR; z_coms := true; end;
  end;

  //Ограничение чисел
  if (StrToFloat(x_input.text) > 142) or (StrToFloat(x_input.text) < 1) then
  begin ResLabel.Caption := 'Число не може бути меншим за 1 та більшим за 142. (Х)'; exit; end;
  if (StrToFloat(y_input.text) > 142) or (StrToFloat(x_input.text) < -142) then
  begin ResLabel.Caption := 'Число не може бути меншим за -142 та більшим за 142. (Y)'; exit; end;
  if (StrToFloat(z_input.text) > 142) or (StrToFloat(x_input.text) < 1) then
  begin ResLabel.Caption := 'Число не може бути меншим за 1 та більшим за 142. (Z)'; exit; end;

  //Формула
  ResLabel.Caption := 'Результат: ' + FloatToStr((cos(StrToFloat(x_input.text)+StrToFloat(y_input.text)) - sqrt(exp(abs(StrToFloat(x_input.text))*ln(StrToFloat(z_input.text)))) + sqrt(pi*( exp(StrToFloat(y_input.text)*ln(StrToFloat(x_input.text)))))));

end;

procedure TForm1.AboutClick(Sender: TObject);
begin
  Form2.Show;
end;



end.

