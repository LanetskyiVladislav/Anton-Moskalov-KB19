unit lab1_task2_unit2_moskalev;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus;

type

  { TForm2 }

  TForm2 = class(TForm)
    CloseButton: TButton;
    Label2: TLabel;
    Label3: TLabel;
    procedure CloseButtonClick(Sender: TObject);
  private

  public

  end;

var
  Form2: TForm2;

implementation

{$R *.lfm}

{ TForm2 }

procedure TForm2.CloseButtonClick(Sender: TObject);
begin
  Form2.Hide;
end;

end.

