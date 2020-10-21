#ifndef VENDEDOR_H
#define VENDEDOR_H
#pragma once
const int Meses = 12;
#include "Empregado.hpp"

class Vendedor : public Empregado
{
    private:
        double Quantia_Mensal_Vendas;
    public:
       double Quantia_Total_Anual();
       void setQuantia_Mensal_Vendas(double Vendas_);
       int getQuantia_Mensal_Vendas() const;
};
#endif
