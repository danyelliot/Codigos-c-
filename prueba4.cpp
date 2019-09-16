#include <iostream>
#define n 20
using namespace std;
int main(){
  int arr[n],i,pos,aux;
	for(int i=0;i<n;i++){

		cout<<"ingrese la gravedad n° "<<i+1<<" : ";
		cin>>arr[i];
		
		pos= i;
		aux=arr[i];
		
		while((pos>0)&&(arr[pos-1]<aux)){
			arr[pos]=arr[pos-1];
			pos--;
			}
	
		arr[pos]=aux;

			for(int j=0;j<i+1;j++){
			cout<<arr[j]<<"  ";
		}
	}

return 0;
}

