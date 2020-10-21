#include "Empregado.hpp"
const double Bonus = 0.5;
const int Jornada = 8;

double Empregado::getPagamento_Hora()
{
    return this -> Pagamento_Hora;
}

std::string Empregado::getNome()
{
    return this -> Nome;
}

void Empregado::setPagamento_Hora(double Pagamento_)
{
    this -> Pagamento_Hora = Pagamento_;
}

void Empregado::setNome(std::string Nome_)
{
	this -> Nome = Nome_;
}

double Empregado::Salario_Mes(double Horas_Trabalhadas)
{
    double Total = 0;
    double Sub_Total = Horas_Trabalhadas;
    double Horas_Extra;
    if(Horas_Trabalhadas > Jornada)
    {
        Horas_Extra = Horas_Trabalhadas - Jornada;
        Sub_Total += (Bonus * Horas_Extra);
    }
    Total = Sub_Total * Pagamento_Hora;
    return Total;
}

