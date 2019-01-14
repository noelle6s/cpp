#include <iostream>
using namespace std;

int jumlahData;
int data[100];			//maksimal 100 data;

void tukar(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubb(int nilai[]){
	for(int i=0; i<jumlahData; ++i){
		for(int j=0; j<jumlahData-i-1;++j){
			if(nilai[j] > nilai[j+1]){
				tukar(&nilai[j],&nilai[j+1]);
			}
		}
	}
}

//cetak data
void cetak(int nilai[]){
	for(int i=0;i<jumlahData;++i){
		cout.width(3);
		cout<<nilai[i];
	}
}

int main(){
	cout<<"Masukkan jumlah data : ";
	cin>>jumlahData;

	//input data
	for(int i=0; i<jumlahData; ++i){
		cout<<"Data ke-" <<(i+1) <<" : ";
		cin>>data[i];
	}

	cout<<"\nSebelum di sorting : " <<endl;

	//cetak data
	cetak(data);
	//proses sorting
	bubb(data);

	cout<<"\nSesudah di sorting : " <<endl;

	//cetak data
	cetak(data);
	return 0;

}
