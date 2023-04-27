#include <iostream>
using namespace std;

int main(){
	int n_szuf;
	int wynik=0;
	cout<<"Liczba szuflad: ";
	cin>>n_szuf;

	int szuf[sizeof(n_szuf)];
	for(int i=0;i<n_szuf;i++)
		cin>>szuf[i];

	for(int j=0;j<n_szuf;j++){
		if(szuf[j]-szuf[j+1] >= 0)
			wynik++;
		}
	if(0>wynik>n_szuf)
		return -1;
	else
		cout<<"Wynik: "<<wynik<<endl;
}
