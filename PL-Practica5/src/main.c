#include "semantico.h"

extern FILE *yyin;

int yyparse(void);

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *archivo = fopen(argv[1], "r");
        if (!archivo) {
            printf("Error al abrir el archivo %s\n", argv[1]);
            return 1;
        }
        yyin = archivo;
    }
    yyparse();
    return 0;
}

/*
int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *archivo = fopen(argv[1], "r");
        if (!archivo) {
            printf("Error al abrir el archivo %s\n", argv[1]);
            return 1;
        }
        yyin = archivo;
    }
    fMain = fopen("/scr/prog.c", "w");
    fFunc = fopen("/include/dec_fun.h", "w");

    yyout = fMain ;
    yyparse();

    fclose(fMain);
    fclose(fFunc);

    if (hayError) {
        remove("prog.c");
        remove("dec_fun.h");
    }
    return 0;
}
*/
