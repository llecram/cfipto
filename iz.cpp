#include<iostream>
using namespace std;
string alfabeto="abcdefghijklmnopqrstuvwxyz_";
string volta(string b){
    string temp=b;
    for(int i=0;i<b.size();i++){
        for(int j=0;j<alfabeto.size();j++){
            if(b[i]==alfabeto[j]){
                temp[i]=alfabeto[alfabeto.size()-1-j];
            }
        }
    }
    return temp;
}
string cif(string a,int clave){
    int elementosola=(clave*2)-2;
    int elementogrupo=a.size()/elementosola;
    while(a.size()%elementosola!=0){
        a+='x';
    }
    for(int i=0;i<clave;i++){
        for(int j=0;j<a.size();j+=elementosola){

        }
    }
}
string rellenarx(string a,int clave){
    string aux=a;
    for(int i=0;i<100000;i+=(clave-1)){
        if(i>(a.size()-1)){
            //cout<<endl<<i<<endl;
            for(int j=(a.size()-1);j<i;j++){
                aux+='x';
            }
            break;
        }
    }
    return aux;
}
int main(){
    string mensaje;
    cout<<"ingrese el mensaje: ";
    cin>>mensaje;
    string result=volta(mensaje);
    cout<<endl<<endl<<result;
    cout<<endl<<result;
    string aux=rellenarx(mensaje,5);
    cout<<endl<<endl<<aux;

}
