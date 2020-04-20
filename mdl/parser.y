
//https://www.gnu.org/software/bison/manual/bison.html#Split-Symbols
%code
{
  namespace yy
  {
    int yylex(parser::semantic_type* yylval);
  }
}

%%

addexp: addexp '+' n;
addexp: n;

n: '1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'|'0';

%%
