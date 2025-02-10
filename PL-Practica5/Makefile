OBJ = obj
SRC = src
BIN = bin
INCLUDE = include
EXEC = $(BIN)/semantic

semantic: $(OBJ)/semantic.o $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -o $(BIN)/semantic $(OBJ)/main.o $(OBJ)/semantic.o $(OBJ)/y.tab.o
	@echo ""
	@echo Ejecutable generado con éxito
	@echo ""

$(OBJ)/main.o: $(SRC)/main.c
	gcc -o $@ -c $(SRC)/main.c -I$(INCLUDE)

$(OBJ)/y.tab.o: $(SRC)/y.tab.c
	gcc -o $@ -c $(SRC)/y.tab.c -I$(INCLUDE)

$(SRC)/y.tab.c: $(SRC)/semantic.y $(SRC)/lex.yy.c
	bison -v -d -o $@ $(SRC)/semantic.y 

$(SRC)/lex.yy.c: $(SRC)/lexicon.l
	lex -o $@ $(SRC)/lexicon.l

$(OBJ)/semantic.o: $(SRC)/semantico.c
	gcc -o $@ -c $(SRC)/semantico.c -I$(INCLUDE)

all:
	make semantic

test:
	./$(EXEC) < programas_test/gencodigo2.txt > ./resultados_codigo_intermedio/resultado_intermedio.c

ejecutar:
	gcc -I ./include -o intermedio ./resultados_codigo_intermedio/resultado_intermedio.c
	./intermedio

clean:
	@echo ""
	@echo Limpiando los ficheros...
	@echo ""
	rm -f $(BIN)/semantic $(OBJ)/* $(SRC)/y.* $(SRC)/lex.yy.c
	@echo ""
	@echo Limpieza finalizada
	@echo ""

verbose-bison:
	bison -v src/semantic.y

