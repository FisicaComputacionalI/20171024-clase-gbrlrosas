//este programa suma los primeros n numeros naturales
//Rosas Galicia Jose Gabriel
#include<iostream>
using namespace std;
int main(){
  long N;
  long sum=0;
  cout<<"dame un numero natura"<<endl;
  cin>>N;
  for(long i=1; i<=N; i++)
    {sum=sum+i;}
  cout<<"la suma es"<<sum<<endl;
  return 0;
}
