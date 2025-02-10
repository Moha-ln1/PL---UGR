
%{
#include <stdio.h>
#include <stdlib.h>
%}

%option noyywrap
%option yylineno

DIGITO   [0-9]
LETRA    [a-zA-Z_]
IDENT    {LETRA}({LETRA}|{DIGITO})*
CADENA   \"([^\"]|\\.)*\" 
CARACTER '.'

%%
"ini_var_local"     {return INI_VAR_LOCAL;}
"fin_var_local"     {return FIN_VAR_LOCAL;}
"scanf"              { return INPUT; }
"printf"             { return OUTPUT; }
"repeat"             { return REPEAT; }
"until"              { return UNTIL; }
"program"            { return PROGRAM; }
"while"              { return WHILE; }
"if"                 { return IF; }
"else"               { return ELSE; }
"return"             { return RETURN; }
"TRUE"               { yylval.identificador = 0; yylval.tipo = 3; yylval.lex = strdup(yytext); return BOOL_VALUE; }
"FALSE"              { yylval.identificador = 1; yylval.tipo = 3; yylval.lex = strdup(yytext); return BOOL_VALUE; }
";"                  { return PYC; }
","                  { return COMA; }
"="                  { return OP_ASIGNACION; }
"++"                 { return OP_INCREMENT; }
"--"                 { return OP_DECREMENT; }   
"<<"                 { return OP_LISTA; }
">>"                 { return OP_LISTA; }
"@"                  { return OP_ACCESO; }
"-"                  { yylval.identificador = 1; yylval.lex = strdup(yytext); return OP_SUM_RES; }
"+"                  { yylval.identificador = 0; yylval.lex = strdup(yytext); return OP_SUM_RES; } 
"!"                  { return OP_R; }       
"?"                  { return OP_R; }      
"#"                  { return OP_R; }      
"$"                  { return OP_INIT_LISTA; }          
"*"                  { yylval.lex = strdup(yytext); return OP_MULT; } 
"&&"                 { yylval.lex = strdup(yytext); return OP_LOGIC; }
"&"                  { return OP_AND; }  
"||"                 { yylval.lex = strdup(yytext); return OP_LOGIC; }    
"|"                  { return OP_LOGIC; }
"^"                  { return OP_LOGIC;}
"=="                 { yylval.identificador = 0; yylval.lex = strdup(yytext); return OP_COMP; }
"!="                 { yylval.identificador = 1; yylval.lex = strdup(yytext); return OP_COMP; }
"<="                 { yylval.identificador = 2; yylval.lex = strdup(yytext); return OP_COMP; }    
"<"                  { yylval.identificador = 0; yylval.lex = strdup(yytext); return MENOR_QUE; }  
">"                  { yylval.identificador = 0; yylval.lex = strdup(yytext); return MAYOR_QUE; }
">="                 { yylval.identificador = 3; yylval.lex = strdup(yytext); return OP_COMP; }
"/"                  { yylval.lex = strdup(yytext); yylval.identificador = 0; return OP_ARIT; } 
"**"                 { yylval.lex = strdup(yytext); yylval.identificador = 1; return OP_ARIT; } 
"%"                  { yylval.lex = strdup(yytext); yylval.identificador = 2; return OP_ARIT; }
"("                  { return PAR_IZQ; }
")"                  { return PAR_DER; }
"{"                  { return LLAVE_IZQ; }
"}"                  { return LLAVE_DER; }
"["                  { return COR_IZQ; }
"]"                  { return COR_DER; }
"int"                { yylval.lex = strdup(yytext); yylval.tipo= 0; return TIPO_DATO; }
"float"              { yylval.lex = strdup(yytext); yylval.tipo= 1; return TIPO_DATO; }
"char"               { yylval.lex = strdup(yytext); yylval.tipo= 2; return TIPO_DATO; }
"bool"               { yylval.lex = strdup(yytext); yylval.tipo= 3; return TIPO_DATO; }
"list"               { yylval.lex = strdup(yytext); return LISTA; }
{IDENT}              { yylval.lex = strdup(yytext); return ID; } 
{DIGITO}+            { yylval.lex = strdup(yytext); return CONST_ENTERO; }
{CARACTER}           { yylval.lex = strdup(yytext); return CONST_CARACTER; }
{CADENA}             { yylval.lex = strdup(yytext); return CADENA; }
"'"                  { return COMILLAS; }
"\""                 { return COMILLAS; }
[ \t]+               { /* Ignorar espacios y tabuladores*/ }
\n                   { } 
.                    { printf("Error léxico: '%s' en línea %d\n", yytext, yylineno); }

{DIGITO}+"."{DIGITO}+f { yylval.lex = strdup(yytext); return CONST_FLOAT; }

"//".*                                          { /* Ignorar comentarios de una sola línea */ }

"/*"([^*]|\*+[^*/])*\*+"/"                      { /* Ignorar comentarios de múltiples líneas */ }


%%
