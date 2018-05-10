#ifndef TRABALHADOR_H_
#define TRABALHADOR_H_

class Trabalhador{
	protected:
		std::string nome;
		double salario;
	public:
		Trabalhador();
		Trabalhador(std::string, double);
		virtual ~Trabalhador();
		
		void setNome(std::string);
		void setSalario(double);
		
		std::string getNome();
		double getSalario();

		double calculaPagamento(int horas);
}

#endif /* TRABALHADOR_H */