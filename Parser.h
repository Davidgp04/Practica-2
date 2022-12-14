#ifndef PARSER_H_
#define PARSER_H_
#include "Nodo.h"
class Parser{
private:
	Nodo** determinantesSingulares;
	Nodo** verbosSingulares;
	Nodo** verbosPlurales;
	Nodo** sustantivosSingulares;
	Nodo** sustantivosPlurales;
	Nodo** determinantesPlurales;
	Nodo** nombres;
	Nodo** apellidos;
	Nodo** conjunciones;
public:
	Parser();
	~Parser();
string analizador(string);
string analizadorSujeto(string,int);
};




#endif /* PARSER_H_ */
