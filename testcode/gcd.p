program Hello;
var a,b,res:integer;

function gcd(a,b:integer) : integer;
var tmp:integer;
begin
	if a<b then
	begin
		tmp:=a;
		a:=b;
		b:=tmp;
	end;
	tmp :=a mod b;
	if tmp = 1 then
		gcd := b
	else
		gcd := gcd(b,a mod b);
end;

begin
	a:=189;
	b:=4425;
	writeln (gcd(a,b));
end.