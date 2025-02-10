# Directorios
OBJ = obj
SRC = src
BIN = bin
INCLUDE = include
EXEC = $(BIN)/analizador

# Generar ejecutable
analizador: $(OBJ)/lex.yy.o $(OBJ)/parser.tab.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -o $(EXEC) $(OBJ)/lex.yy.o $(OBJ)/parser.tab.o -lfl
	@echo ""
	@echo Ejecutable generado con éxito
	@echo ""

# Compilar lex.yy.c generado por Flex
$(OBJ)/lex.yy.o: $(SRC)/lex.yy.c $(SRC)/parser.tab.h $(INCLUDE)/tabla_tokens.h
	gcc -o $@ -c $(SRC)/lex.yy.c -I$(INCLUDE)

# Compilar parser.tab.c generado por Bison
$(OBJ)/parser.tab.o: $(SRC)/parser.tab.c $(SRC)/parser.tab.h
	gcc -o $@ -c $(SRC)/parser.tab.c -I$(INCLUDE)

# Generar parser.tab.c y parser.tab.h a partir del archivo parser.y
$(SRC)/parser.tab.c $(SRC)/parser.tab.h: $(SRC)/parser.y
	bison -v -d -o $(SRC)/parser.tab.c $(SRC)/parser.y

# Generar lex.yy.c a partir del archivo analizador_lexico.lex
$(SRC)/lex.yy.c: $(SRC)/analizador_lexico.lex
	flex -o $@ $(SRC)/analizador_lexico.lex

# Objetivo principal
all:
	make analizador

# Ejecutar programa con un fichero de prueba
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

# Limpiar archivos generados
clean:
	@echo ""
	@echo Limpiando los ficheros...
	@echo ""
	rm -f $(EXEC) $(OBJ)/* $(SRC)/parser.tab.* $(SRC)/lex.yy.c $(SRC)/parser.output
	@echo ""
	@echo Limpieza finalizada
	@echo ""
