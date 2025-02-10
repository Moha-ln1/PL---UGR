# Directorios
OBJ = obj
SRC = src
BIN = bin
INCLUDE = include
EXEC = $(BIN)/lexyy

# Generar ejecutable
lexyy: $(OBJ)/lex.yy.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -lfl -o $(EXEC) $(OBJ)/lex.yy.o
	@echo ""
	@echo Ejecutable generado con éxito
	@echo ""

# Compilar archivo generado por Flex
$(OBJ)/lex.yy.o: $(SRC)/lex.yy.c $(INCLUDE)/tabla_tokens.h
	gcc -o $@ -c $(SRC)/lex.yy.c -I$(INCLUDE)

# Generar archivo lex.yy.c a partir del archivo .lex
$(SRC)/lex.yy.c: $(SRC)/analizador_lexico.lex
	flex -l -o $@ $(SRC)/analizador_lexico.lex

# Objetivo principal
all:
	make lexyy


# Limpiar archivos generados
clean:
	@echo ""
	@echo Limpiando los ficheros...
	@echo ""
	rm -f $(EXEC) $(OBJ)/* $(SRC)/lex.yy.c
	@echo ""
	@echo Limpieza finalizada
	@echo ""
