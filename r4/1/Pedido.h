#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido {
	public:
		Pedido();
		Pedido(int, std::string, int, double);
		virtual ~Pedido();

		int getNumero();
		std::string getDescricao();
		int getQuantidade();
		double getPreco();

		void setNumero(int);
		void setDescricao(std::string);
		void setQuantidade(int);
		void setPreco(double);

	private:
		int numero;
		std::string descricao;
		int quantidade;
		double preco;
};

#endif
