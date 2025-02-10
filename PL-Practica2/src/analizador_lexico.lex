%{
    
#include "tabla_tokens.h"  // Incluye el archivo con las definiciones de tokens
#include <stdio.h>
#include <stdlib.h>


extern int yylex();  // Declaración explícita de yylex()
extern FILE *yyin;   // Declaración de yyin para Flex

// Contador de líneas (ya está manejado por Flex con yylineno)
extern int yylineno;

// Función para convertir el código del token en una cadena legible
const char* getTokenName(int token) {
    switch (token) {
        case INPUT: return "INPUT";
        case OUTPUT: return "OUTPUT";
        case REPEAT: return "REPEAT";
        case UNTIL: return "UNTIL";
        case PROGRAM: return "PROGRAM";
        case WHILE: return "WHILE";
        case IF: return "IF";
        case ELSE: return "ELSE";
        case RETURN: return "RETURN";
        case BOOL_VALUE: return "BOOL_VALUE";
        case PYC: return "PYC";
        case COMA: return "COMA";
        case PUNTO: return "PUNTO";
        case OP_INCREMENT: return "OP_INCREMENT";
        case OP_DECREMENT: return "OP_DECREMENT";
        case OP_ASIGNACION: return "OP_ASIGNACION";
        case OP_LISTA: return "OP_LISTA";
        case OP_ACCESO: return "OP_ACCESO";
        case OP_SUM_RES: return "OP_SUM_RES";
        case OP_R: return "OP_R";
        case OP_INIT_LISTA: return "OP_INIT_LISTA";
        case OP_MULT: return "OP_MULT";
        case OP_LOGIC: return "OP_LOGIC";
        case OP_AND: return "OP_AND";
        case OP_COMP: return "OP_COMP";
        case MENOR_QUE: return "MENOR_QUE";
        case MAYOR_QUE: return "MAYOR_QUE";
        case OP_ARIT: return "OP_ARIT";
        case PAR_IZQ: return "PAR_IZQ";
        case PAR_DER: return "PAR_DER";
        case LLAVE_IZQ: return "LLAVE_IZQ";
        case LLAVE_DER: return "LLAVE_DER";
        case COR_IZQ: return "COR_IZQ";
        case COR_DER: return "COR_DER";
        case TIPO_DATO: return "TIPO_DATO";
        case LISTA: return "LISTA";
        case END_FLOAT: return "END_FLOAT";
        case ID: return "ID";
        case NUMERO: return "NUMERO";
        case LETRA: return "LETRA";
        case CADENA: return "CADENA";
        case COMILLAS: return "COMILLAS";
        case COMENT: return "COMENT";
        default: return "UNKNOWN_TOKEN";
    }
}

void imprime_token (int val){
    switch (val) {
        case BOOL_VALUE:
            if (strcmp(yytext, "TRUE") == 0) { 
                printf("[   %s] :: %s  :: atrib = 0 (true) \n", yytext, getTokenName(val));
            } else if (strcmp(yytext, "FALSE") == 0) {
                printf("[   %s] :: %s  :: atrib = 1 (false)\n", yytext, getTokenName(val)); 
            }
            break;
        
        case OP_LISTA:
            if (strcmp(yytext, ">>") == 0) {
                printf("[   %s] :: %s  :: atrib = 0 (>>) \n", yytext, getTokenName(val));
            } else if (strcmp(yytext, "<<") == 0) { 
                printf("[   %s] :: %s  :: atrib = 1 (<<)\n", yytext, getTokenName(val)); 
            }
            break;
        
        case OP_R:
            if (strcmp(yytext, "!") == 0) { 
                printf("[   %s] :: %s  :: atrib = 0 (!) \n", yytext, getTokenName(val));
            } else if (strcmp(yytext, "?") == 0) {
                printf("[   %s] :: %s  :: atrib = 1 (?)\n", yytext, getTokenName(val)); 
            } else if (strcmp(yytext, "#") == 0) {
                printf("[   %s] :: %s  :: atrib = 2 (#)\n", yytext, getTokenName(val)); 
            }
            break;
        
        case OP_SUM_RES:
            if (strcmp(yytext, "+") == 0) {
                printf("[   %s] :: %s  :: atrib = 0 (+) \n", yytext, getTokenName(val));
           
            } else if (strcmp(yytext, "-") == 0) {
                printf("[   %s] :: %s  :: atrib = 1 (*)\n", yytext, getTokenName(val)); 
            }
            break;

        case OP_LOGIC:
            if (strcmp(yytext, "&&") == 0) {
                printf("[   %s] :: %s  :: atrib = 0 (&&)\n", yytext, getTokenName(val));        
            } else if (strcmp(yytext, "||") == 0) {
                printf("[   %s] :: %s  :: atrib = 1 (||)\n", yytext, getTokenName(val)); 
            }  else if (strcmp(yytext, "^") == 0) { 
                printf("[   %s] :: %s  :: atrib = 2 (^)\n", yytext, getTokenName(val)); 
            }  else if (strcmp(yytext, "|") == 0) { 
                printf("[   %s] :: %s  :: atrib = 3 (|)\n", yytext, getTokenName(val)); 
            }
            break;
        
        case OP_COMP:
            if (strcmp(yytext, "==") == 0) {
                printf("[   %s] :: %s  :: atrib = 0 (==)\n", yytext, getTokenName(val)); 
            
            } else if (strcmp(yytext, "!=") == 0) { 
                printf("[   %s] :: %s  :: atrib = 1 (!=)\n", yytext, getTokenName(val)); 
            
            } else if (strcmp(yytext, "<=") == 0) {
                printf("[   %s] :: %s  :: atrib = 2 (<=)\n", yytext, getTokenName(val)); 
            
            } else if (strcmp(yytext, ">=") == 0) {
                printf("[   %s] :: %s  :: atrib = 3 (>=)\n", yytext, getTokenName(val)); 
            
            } 
            break;

        case OP_ARIT:
            if(strcmp(yytext, "/") == 0) {
                printf("[   %s] :: %s  :: atrib = 0 (/)\n", yytext, getTokenName(val)); 
            } else if (strcmp(yytext, "**") == 0) {
                printf("[   %s] :: %s  :: atrib = 1 (**)\n", yytext, getTokenName(val)); 
            
            } else if (strcmp(yytext, "%") == 0) {
                printf("[   %s] :: %s  :: atrib = 2 (%%)\n", yytext, getTokenName(val)); 
            }
            break;
        case TIPO_DATO:
        if (strcmp(yytext, "int") == 0) {
            printf("[   %s] :: %s  :: atrib = 0 (int) \n", yytext, getTokenName(val));
    
        } else if (strcmp(yytext, "float") == 0) {
            printf("[   %s] :: %s  :: atrib = 1 (float)\n", yytext, getTokenName(val)); 
        
        } else if (strcmp(yytext, "char") == 0) {
            printf("[   %s] :: %s  :: atrib = 2 (char)\n", yytext, getTokenName(val)); 
        
        } else if (strcmp(yytext, "bool") == 0) {
            printf("[   %s] :: %s  :: atrib = 3 (bool)\n", yytext, getTokenName(val)); 
        
        } else if (strcmp(yytext, "list") == 0) {
            printf("[   %s] :: %s  :: atrib = 4 (list)\n", yytext, getTokenName(val)); 
        }
        break;

        default: printf("[   %s] :: %s \n", yytext, getTokenName(val)); break;
    }
}


int main() {
    // Abre un archivo para leer
    FILE *myfile = fopen("./programas_test/programa_prueba.txt", "r");

    // Comprueba si el archivo se abrió correctamente
    if (!myfile) {
        printf("No puedo abrir el archivo!\n");
        exit(-1);
    }

    // Configura yyin para que lea desde el archivo
    yyin = myfile;

    // Lee tokens del archivo
    int val;

    while ((val = yylex()) != 0) {
        imprime_token(val);
    }

    // Cierra el archivo
    fclose(myfile);

    printf("\n");
    exit(0);
}

%}

%option noyywrap
%option yylineno

DIGITO   [0-9]
LETRA    [a-zA-Z_]
IDENT    {LETRA}({LETRA}|{DIGITO})*
CADENA   \"([^\"]|\\.)*\" 
CARACTER '.'
COMENT   \"(\\.|[^\\"])*\"

%%

"scanf"              { return INPUT; }
"printf"             { return OUTPUT; }
"repeat"             { return REPEAT; }
"until"              { return UNTIL; }
"program"            { return PROGRAM; }
"while"              { return WHILE; }
"if"                 { return IF; }
"else"               { return ELSE; }
"return"             { return RETURN; }
"TRUE"               { return BOOL_VALUE; }
"FALSE"              { return BOOL_VALUE; }
";"                  { return PYC; }
","                  { return COMA; }
"."                  { return PUNTO; }
"="                  { return OP_ASIGNACION; }
"++"                 { return OP_INCREMENT; }
"--"                 { return OP_DECREMENT; }   
"<<"                 { return OP_LISTA; }
">>"                 { return OP_LISTA; }
"@"                  { return OP_ACCESO; }
"-"                  { return OP_SUM_RES; }
"+"                  { return OP_SUM_RES; } 
"!"                  { return OP_R; }       
"?"                  { return OP_R; }      
"#"                  { return OP_R; }      
"$"                  { return OP_INIT_LISTA; }          
"*"                  { return OP_MULT; } 
"&&"                 { return OP_LOGIC; }
"&"                  { return OP_AND; }  
"||"                 { return OP_LOGIC; }    
"|"                  { return OP_LOGIC; }
"^"                  { return OP_LOGIC;}
"=="                 { return OP_COMP; }
"!="                 { return OP_COMP; }
"<="                 { return OP_COMP; }    
"<"                  { return MENOR_QUE; }  
">"                  { return MAYOR_QUE; }
">="                 { return OP_COMP; }
"/"                  { return OP_ARIT; } 
"**"                 { return OP_ARIT; } 
"%"                  { return OP_ARIT; }
"("                  { return PAR_IZQ; }
")"                  { return PAR_DER; }
"{"                  { return LLAVE_IZQ; }
"}"                  { return LLAVE_DER; }
"["                  { return COR_IZQ; }
"]"                  { return COR_DER; }
"int"                { return TIPO_DATO; }
"float"              { return TIPO_DATO; }
"char"               { return TIPO_DATO; }
"bool"               { return TIPO_DATO; }
"list"               { return LISTA; }
"f"                  { return END_FLOAT; }
{IDENT}              { return ID; }
{DIGITO}+            { return NUMERO; }
{CARACTER}           { return LETRA; }
{CADENA}             { return CADENA; }
"'"                  { return COMILLAS; }
"\""                 { return COMILLAS; }
[ \t]+               { /* Ignorar espacios y tabuladores*/ }
\n                   { } 
.                    { printf("Error léxico: '%s' en línea %d\n", yytext, yylineno); }

{DIGITO}+"."{DIGITO}+([eE][-+]?{DIGITO}+)? { return NUMERO; }

"//".*                                          { /* Ignorar comentarios de una sola línea */ }

"/*"([^*]|\*+[^*/])*\*+"/"                      { /* Ignorar comentarios de múltiples líneas */ }

%%
