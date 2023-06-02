Задача Matrix24.
var
  a:array [1..10,1..10] of integer;
  Max,M, N, i, j:Integer;
 
begin
 Write('N: ');
 Readln(N);
 Write('M: ');
 Readln(M);
 
 
 for  i:=1 to M do
  begin
   writeln(i,': ');
   for j:=1 to N do
    begin
     Write(j,' : ');
     Read(a[i,j]);
    end;
  end;
 
 for  j:=1 to N do
  begin
   writeln(j,': ');
   Max:=a[1,j];
   for i:=2 to M do
    begin
     if a[i,j]>Max then Max:=a[i,j];
    end;
   writeln('Масимальный элемент:',Max);
  end;
end.
}
