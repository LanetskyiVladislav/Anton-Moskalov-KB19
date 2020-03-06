unit lab1_task1_unit1_Moskalev;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  EditBtn, Menus, lab1_task1_unit2_moskalev;

type

  { TForm1 }

  TForm1 = class(TForm)
    Label2: TLabel;
    MainMenu1: TMainMenu;
    MenuItem1: TMenuItem;
    NomZan: TButton;
    RPlus: TButton;
    KolZn: TButton;
    Edit1: TEdit;
    Label1: TLabel;
    procedure KolZnClick(Sender: TObject);
    procedure MenuItem1Click(Sender: TObject);
    procedure NomZanClick(Sender: TObject);
    procedure RPlusClick(Sender: TObject);
  private

  public

  end;

const Znaks = ['.', ',', ';', '-', '?', '!', ':', ' ', '(', ')', '"'];
var
  Form1: TForm1;
  TrueSymbols : string;
implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.RPlusClick(Sender: TObject);
var
  i1 : byte;
  TStr : string[255];
  curS : byte;
  UncorrectS : boolean;
begin
  TStr := Edit1.Text;
  UncorrectS := False;
  for i1:=1 to Length(tstr) do
  begin
    if (pos(tstr[i1],TrueSymbols)>0)  then
     begin
      UncorrectS:=False;
     end
  else
     begin
      label1.Caption := 'Ви використали некоректний символ.'; UncorrectS := true; exit;
     end;
  end;


if UncorrectS = false then
  begin
  repeat
  for i1 := 1 to 255 do
  begin
  if tstr[i1] in Znaks then
     begin curS := i1; break; end;
   if i1 = 255 then
     curS := 255;
  end;
  if curS <> 255 then
    begin
      for i1:=curS to 255 do
      begin
       tstr[i1] := tstr[i1+1];
       if tstr[i1] = #0 then
         begin
         tstr[i1+1] := #0;
         break;
         end;
       end;
    end;
  until curS = 255;
label1.Caption := TStr;
edit1.text := #0;
end;
end;

procedure TForm1.KolZnClick(Sender: TObject);

var
  i1, i2 : byte;
  tstr : string[255];
  UncorrectS : boolean;


begin
tstr := edit1.text;
UncorrectS := False;

for i1:=1 to Length(tstr) do
begin
 if (pos(tstr[i1],TrueSymbols)>0)  then
 begin
  UncorrectS:=False;
 end
else
 begin
  label1.Caption := 'Ви використали некоректний символ.'; UncorrectS := true; exit;
 end;
end;
if UncorrectS = false then
begin
Label1.Caption := '0';
for i2:=1 to length(tstr) do
  begin
   if tstr[i2] in Znaks then
   begin
   Label1.Caption := IntToStr(StrToInt(label1.caption)+1);
   end;
  end;
Label1.Caption := 'Кількість пунктуаційних знаків: ' + label1.caption;
edit1.text := #0;
end;
end;

procedure TForm1.MenuItem1Click(Sender: TObject);
begin
 Form2.Show;
end;

procedure TForm1.NomZanClick(Sender: TObject);                                   // "Номер заняття"
var
  CurTime : TDateTime;
  i1 : byte;
  TimeEd : word;
  tstr : string[5];
begin
  CurTime := Now;
  tstr := TimeToStr(CurTime);

  if (DayOfWeek(CurTime) = 1) or (DayOfWeek(CurTime) = 7) then
  begin label1.caption := 'Не навчальний день.'; exit; end;

  for i1:=1 to 5 do
  begin
  if tstr[i1] = ':' then
    begin
    tstr[i1] := tstr[i1+1];
    tstr[i1+1] := tstr[i1+2];
    tstr[i1+2] := #0;
    end;
  end;
  TimeEd := StrToInt(tstr);
  if (TimeEd > 830) and (TimeEd < 950) then         //  8:30 - 9:50
  begin label1.caption := 'Перша пара.';  end;
  if (TimeEd > 950) and (TimeEd < 1000) then          //  9:50 - 10:00
  begin label1.caption := 'Перерва.';  end;
  if (TimeEd > 1000) and (TimeEd < 1120) then         //  10:00 - 11:20
  begin label1.caption := 'Друга пара.';  end;
  if (TimeEd > 1120) and (TimeEd < 1150) then         //  11:20 - 11:50
  begin label1.caption := 'Перерва.';  end;
  if (TimeEd > 1150) and (TimeEd < 1310) then         //  11:50 - 13:10
  begin label1.caption := 'Третя пара.';  end;
  if (TimeEd > 1310) and (TimeEd < 1320) then         //  13:10 - 13:20
  begin label1.caption := 'Перерва.';  end;
  if (TimeEd > 1320) and (TimeEd < 1440) then         //  13:20 - 14:40
  begin label1.caption := 'Четверта пара.';  end;
  if (TimeEd > 1440) or (TimeEd < 830) then
  begin label1.caption := 'Не навчальний час.'; end;
end;

begin
  TrueSymbols := 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzАаБбВвГгДдЕеЁёЖжЗзИиЙйКкЛлМмНнОоПпРрСсТтУуФфХхЦцЧчШшЩщЪъЫыЬьЭэЮюЯяЄєЇїІіҐґ.,:;"()?!- ';
end.

