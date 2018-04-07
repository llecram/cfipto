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
int main(){
    string mensaje;
    cout<<"ingrese el mensaje: ";
    cin>>mensaje;
    string result=volta(mensaje);
    cout<<endl<<result;
}
