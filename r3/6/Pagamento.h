#ifndef PAGAMENTO_H_
#define PAGAMENTO_H_
#include <string>

	class Pagamento
	{

		double valorPagamento;
		std::string nomeDoFuncionario;

	public:
		Pagamento();
		Pagamento(double v, std::string n);
		void setValorPagamento(double v);
		double getValorPagamento();
		void setNomeDoFuncionario(std::string n);
		std::string getNomeDoFuncionario();
	};




#endif /* PAGAMENTO_H_ */
