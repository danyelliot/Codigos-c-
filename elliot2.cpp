#include <iostream>
#include <time.h>
#include <stdlib.h>
#define n 2000
using namespace std;
int main(){
  int v1[n],v2[n],s[n];
  int s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0,s12=0;
  srand(time(NULL));
  for(int i=0;i<n;i++){
    v1[i]=1+rand()%(6);
    v2[i]=1+rand()%(6);
    s[i]=v1[i]+v2[i];
    switch(s[i]){
      case 2:s2++;break;
      case 3:s3++;break;
      case 4:s4++;break;
      case 5:s5++;break;
      case 6:s6++;break;
      case 7:s7++;break;
      case 8:s8++;break;
      case 9:s9++;break;
      case 10:s10++;break;
      case 11:s11++;break;
      case 12:s12++;break;
    }
  }
cout<<"\nsuma 2 "<<s2;
cout<<"\nsuma 3 "<<s3;
cout<<"\nsuma 4 "<<s4;
cout<<"\nsuma 5 "<<s5;
cout<<"\nsuma 6 "<<s6;
cout<<"\nsuma 7 "<<s7;
cout<<"\nsuma 8 "<<s8;
cout<<"\nsuma 9 "<<s9;
cout<<"\nsuma 10 "<<s10;
cout<<"\nsuma 11 "<<s11;
cout<<"\nsuma 12 "<<s12<<endl;
cout<<s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12;
return 0;
}
