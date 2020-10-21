#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <iostream>
using namespace std;
int main()
{
    Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setPagamento_Hora(35);
  eng1.setProjetos(3);
  cout << "Nome: " << eng1.getNome() << endl;
  cout << "Salario Mes: " << eng1.Salario_Mes(9.5) << endl;
  cout << "Projetos: " << eng1.getProjetos() << endl;
  cout << endl;

    Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setPagamento_Hora(30);
  eng2.setProjetos(1);
  cout << "Nome: " << eng2.getNome() << endl;
  cout << "Salario Mes: " << eng2.Salario_Mes(8) << endl;
  cout << "Projetos: " << eng2.getProjetos() << endl;
  cout << endl;

    Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setPagamento_Hora(30);
  eng3.setProjetos(2);
  cout << "Nome: " << eng3.getNome() << endl;
  cout << "Salario Mes: " << eng3.Salario_Mes(8) << endl;
  cout << "Projetos: " << eng3.getProjetos() << endl;
  cout << endl;


    Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setPagamento_Hora(20);
  vend1.setQuantia_Mensal_Vendas(5000);
  cout << "Nome: " << vend1.getNome() << endl;
  cout << "Salario Mes: " << vend1.Salario_Mes(6) << endl;
  cout << "Quota vendas: " << vend1.Quantia_Total_Anual() << endl;
  cout << endl;

    Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setPagamento_Hora(25);
  vend2.setQuantia_Mensal_Vendas(3000);
  cout << "Nome: " << vend2.getNome() << endl;
  cout << "Salario Mes: " << vend2.Salario_Mes(8) << endl;
  cout << "Quota vendas: " << vend2.Quantia_Total_Anual() << endl;
  cout << endl;

    Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setPagamento_Hora(30);
  vend3.setQuantia_Mensal_Vendas(4000);
  cout << "Nome: " << vend3.getNome() << endl;
  cout << "Salario Mes: " << vend3.Salario_Mes(8) << endl;
  cout << "Quota vendas: " << vend3.Quantia_Total_Anual() << endl;

  return 0;
}
