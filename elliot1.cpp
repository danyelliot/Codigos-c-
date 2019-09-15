#include <iostream>
using namespace std;
int main(){
int a[5];

for(int i=0;i<5;i++){
    do{
        cout<<"ingrese un nmr(10-100) : "<<endl;
        cin>>a[i];
    }while((a[i]<=10)||(a[i]>=100));

for(int j=0;j<i+1;j++){
    cout<<a[j]<<"  ";
    }
  cout<<"\n";
  }

return 0;
}
