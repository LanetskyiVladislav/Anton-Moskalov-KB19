unit lab1_task1_validator_moskalev;

interface

function CorrectSymb(text : string) : boolean;
function SymvIsZnak(text : string) : boolean;

implementation


function CorrectSymb(text : string) : boolean;
var
  i : byte;
  TrueSymbols : string;
begin
TrueSymbols := 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzАаБбВвГгДдЕеЁёЖжЗзИиЙйКкЛлМмНнОоПпРрСсТтУуФфХхЦцЧчШшЩщЪъЫыЬьЭэЮюЯяЄєЇїІіҐґ.,:;"()?!- ';
for i:=1 to Length(text) do
  begin
    if (pos(text[i],TrueSymbols)=0)  then
    begin
    CorrectSymb := false;
    exit;
    end;
  end;
CorrectSymb := true;
end;

function SymvIsZnak(text : string) : boolean;
var
  i : byte;
  Znaks : string;
begin
Znaks := '.,:;"()?!- ';
for i:=1 to Length(text) do
  begin
    if (pos(text[i],Znaks)=0)  then
    begin
    SymvIsZnak := false;
    exit;
    end;
  end;
SymvIsZnak := true;
end;


end.

