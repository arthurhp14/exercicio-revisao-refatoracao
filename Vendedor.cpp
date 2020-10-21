#include "Vendedor.hpp"

int Vendedor::getQuantia_Mensal_Vendas()const
{
    return this -> Quantia_Mensal_Vendas;
}
double Vendedor::Quantia_Total_Anual()
{
    return this -> Quantia_Mensal_Vendas * Meses;
}
void Vendedor::setQuantia_Mensal_Vendas(double Vendas_)
{
    this -> Quantia_Mensal_Vendas = Vendas_;
}

