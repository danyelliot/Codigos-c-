#include <iostream>
#include <math.h>
#define n 20
using namespace std;
int main(){
int aux,barra[n];
float p=0,max=0;
srand(time(NULL));
for(int i=0;i<n;i++){
  barra[i]=1+rand()%20;
  cout<<barra[i]<<" ";
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if(barra[j]<=barra[j+1]){
      aux=barra[j];
      barra[j]=barra[j+1];
      barra[j+1]=aux;
    }
  }
}
cout<<"\n";
for(int i=0;i<3;i++){
  cout<<"barra mayor"<<i+1<<" "<<barra[i]<<endl;
}
p=(barra[0]+barra[1]+barra[2])/2;
max=sqrt(p*(p-barra[0])*(p-barra[1])*(p-barra[2]));
cout<<"\n"<<max<<endl;
return 0;
}
