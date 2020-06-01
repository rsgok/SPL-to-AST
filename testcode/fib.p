program fib;
var
a,b,i,tmp:integer;
res : array[1..100] of integer;

begin
	a:=1;
	b:=100;
	res[1]:=1;
	res[2]:=1;
	for i := 3 to 100 do
		res[i] := res[i-1]+res[i-2];
	i:=1;
	while i<=100 do
	begin
		writeln(res[i]);
		i:=i+1;
	end;
end.
