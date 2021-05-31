#include <iostream>
#include <cmath>

static int Ij=0;
double Zufall() {

  int a=5;
  int c=3;
  int m=16;
  Ij=((a*Ij)+c)%m;

  return double(Ij)/m;

}

int main() {
  int N=1000000;
  double Ni=0;
  for (int n=1; n< N;++n){
    double x= 2*Zufall()-1;
    double y= 2*Zufall()-1;

    double dist=sqrt(x*x+y*y);
    if(dist<=1){
      Ni++;
    }
    //std::cout<<x<<","<<y<<","<<dist<<std::endl;

  }
  double p=3.141592654/4;
  double ENin=p*N;
  double VNin=p*(1-p)*N;
  double pi=4*Ni/N;
  double spi=4*sqrt(VNin)/N;

  std::cout<<"N: "<< N<<std::endl;
  std::cout<<"E[Nin]: "<< ENin<<std::endl;
  std::cout<<"V[Nin]: "<< VNin<<std::endl;
  std::cout<<"Nin: "<< Ni<<std::endl;
  std::cout<<"Pi: "<< pi<<std::endl;
  std::cout<<"sigma Pi: "<< spi<<std::endl;

}
