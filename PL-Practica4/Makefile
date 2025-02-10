OBJ = obj
SRC = src
BIN = bin
INCLUDE = include
EXEC = $(BIN)/semantic

semantic: $(OBJ)/semantic.o $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -lfl -o $(BIN)/semantic $(OBJ)/semantic.o $(OBJ)/main.o $(OBJ)/y.tab.o
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
	@echo ""
	@echo "Introduce el nombre del archivo de prueba (ubicado en programas_test):"
	@read testfile; \
	if [ -f "programas_test/$$testfile" ]; then \
		echo ""; \
		echo "Ejecutando el analizador con $$testfile..."; \
		echo ""; \
		./$(EXEC) < programas_test/$$testfile; \
	else \
		echo ""; \
		echo "Error: El archivo programas_test/$$testfile no existe."; \
		echo ""; \
	fi

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

