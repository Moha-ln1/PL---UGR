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
