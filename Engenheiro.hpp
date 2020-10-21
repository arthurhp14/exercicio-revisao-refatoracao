#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#pragma once
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
    private:
        int Projetos;
    public:
        void setProjetos(int Projetos_);
        int getProjetos();
};
#endif
