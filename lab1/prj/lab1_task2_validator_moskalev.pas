unit lab1_task2_validator_moskalev;



interface

function ReturnNum (tempSTR : string) : string;
function Interv (x,y,z : extended) : boolean;

implementation

function ReturnNum (tempSTR : string) : string;
var
  chisla : string;
  znak : boolean;
  i : byte;
begin
  znak := false;
  chisla := '0123456789-,.';
  for i:=1 to length(tempSTR) do
  begin
    if (pos(tempSTR[i], chisla) = 0) then
    begin ReturnNum := 'N'; exit; end;
  end;
  for i:=1 to length(tempSTR) do
  begin
    if (tempSTR[i] = '.') then tempSTR[i] := ',';
    if (tempSTR[i] = '-') and (i<>1) then
    begin ReturnNum := 'N'; exit; end;
    if (tempSTR[i] = ',') and (znak = true) then
    begin ReturnNum := 'N'; exit; end;
    if (tempSTR[i] = ',') and (znak = false) then
    begin znak := true; end;
  end;
  if tempSTR[1] = ',' then
  begin ReturnNum := 'N'; exit; end;
  if tempSTR[length(tempSTR)] = ',' then
  begin ReturnNum := 'N'; exit; end;
  ReturnNum := tempSTR;
end;


function Interv (x,y,z : extended) : boolean;
begin
Interv := false;
if (x<1) or (x>142) then exit;
if (y<-142) or (y>142) then exit;
if (z<1) or (z>142) then exit;
Interv := true;
end;

end.

