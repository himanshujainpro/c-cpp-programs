#include<stdio.h>
#include<iostream>
#include<conio.h>
int main()
{
  int i,r;
  float n,cap,I,IR,TI,total[10] ;
  double *p=new double[r];
  std::cout<<"CAPITAL(principal amount)\n";
  std::cin>>cap;
  std::cout<<"INTERST RATE\n";
  std::cin>>IR;
  std::cout<<"TERM(year)\n";
  std::cin>>n;
  I=(IR*n*cap)/100;
  std::cout<<" your total without compound() interst is \n\n"<<I<<"+"<<cap<<"="<<I+cap<<"\n\n";
  total[0]=cap;
  for(i=0;i<10;i++)
  {
      TI=(total[i]*IR)/100;
      total[i+1]=total[i]+TI;
     std::cout<<i+1<<" year total interst = "<<TI<<"\n";
     std::cout<<i+1<<" year total capital = "<<total[i+1]<<"\n";
     std::cout<<"\n";
  }
  std::cout<<"@HIMANSHU JAIN(9104425268)";
  getch();
}

