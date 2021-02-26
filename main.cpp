#include <iostream>
#include <fstream>
using namespace std;
class licz{
public:
void p();
void d();
};
void licz::p(){
    ifstream plik1;
    ofstream plik2;
    int t[1000];
    int min,max,liczba;
    plik1.open("liczby1.txt");
    while(plik1.good()){
       int i=0;
       plik1 >> dec >> t[i];
	i++;
    }
    int dlugosc = sizeof(t);
    for(int i=1;i<dlugosc;i++) {
    if(min>t[i])
     min = t[i];
    }
    for(int i=1;i<dlugosc;i++) {
        if(max<t[i])
        max = t[i];
  }
cout<<"Najmniejsza liczba: "<<oct<<min<<endl;
cout<<"Najwieksza liczba: "<<oct<<max<<endl;
}
void licz::d(){
ifstream plik3;
ofstream plik4;
int t2[1000];
int n=0;
int n2=0;
int poczatek;
plik3.open("liczby2.txt");
while(plik3.good()){
      for(int i=0;i<999;i++){
      plik3 >> t2[i];
    }
    }
for(int i=0;i<999;i++){
    if(t2[i]<t2[i+1]){
         n++;
        }else{
	if(n>n2){
    n=n2;
    poczatek = t2[i-n];
    n = 0;
}else{
    n = 0;
    }
       }
    }
   cout<<"Pierwsza: "<<poczatek<<endl;
   cout<<"Liczba: "<<n2;
}
int main(int argc, char** argv) {
    licz l;
    l.p();
    l.d();
    return 0;
}
