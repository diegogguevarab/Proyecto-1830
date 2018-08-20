#ifndef __RUTA__H__
#define __RUTA__H__
#include <stack>
#include <queue>
#include <string.h>

using namespace std;


class Ruta {

private:
		string codigo;
		string dia;
		string origen;
		string destino;
		int hrsalida;
		int duracion;
		int sillas;
		int costosilla;

public:
		void setCodigo(string codigoIn);
		void setDia(string diaIn);
		void setOrigen(string origenIn);
		void setDestino(string destinoIn);
		void setHrsalida(int horsalidaIn);
		void setDuracion(int duracionIn);
		void setSillas(int sillasIn);
		void setCosto(int costosillaIn);
		string getCodigo();
		string getDia();
		string getOrigen();
		string getDestino();
		int getHrsalida();
		int getDuracion();
		int getSillas();
		int getCosto();

};

// #include "ruta.hpp"
#endif
