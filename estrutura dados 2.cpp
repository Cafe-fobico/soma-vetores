#include <iostream>
using namespace std;

int main(int argc, char** argv){
int n, i;
int *pt1, *pt2, *pt3;

cout << "Tamanho dos vetores: \n";
cin >> n;

int *vet1= new int[n];
int *vet2= new int[n];
int *vet3= new int[n];
pt1=vet1;
pt2=vet2;
pt3=vet3;

cout<< "Insira os valores do primeiro vetor: \n";
for (int i=0; i<n; i++){
cout << i+1<<" valor: ";
cin>> vet1[i];
}
cout << "Insira os valores do segundo vetor: \n ";
for (int i=0; i<n; i++){
cout << i+1<<" valor: ";
cin>> vet2[i];
}
for(int i=0; i<n; i++){
*(pt3+i)= *(pt1+ i)+ *(pt2+i);
}
system("cls");
cout<< "A soma dos elementos do VETOR1 e VETOR2 sao:\n ";
for(int i=0; i< n; i++){
cout << *(pt3+i) <<"\n";
}
delete[] vet1;
delete[] vet2;
delete[] vet3;
return 0;
}

