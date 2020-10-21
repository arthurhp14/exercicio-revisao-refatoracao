#include <string>
#pragma once

class Empregado
{
    public:
        double getPagamento_Hora();
        void setPagamento_Hora(double Valor_Salario_);
		std::string getNome();
		void setNome(std::string Nome);
		double Salario_Mes(double Horas_Trabalhadas);
    private:
        double Pagamento_Hora;
        std::string Nome;
};
