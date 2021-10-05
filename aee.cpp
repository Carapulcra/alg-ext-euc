#include <iostream>
using namespace std;

void euclides_ext(int a, int b){
  int x0=1,y0=0,x=0,y=1;
  while(b>0){
  int aux=x;
  int q=a/b;
  int r=a%b;
  x=x0-q*x;
  x0=aux;
  aux=y;
  y=y0-q*y;
  y0=aux;
  a=b;
  b=r;
  }
	cout << "mcd: " << a <<endl;
	cout << "x: " << x0 << endl;
	cout << "y: " << y0 << endl;
}

int main() {
	int a,b;
	cout << "Ingrese el primer número: ";
	cin >> a;
	cout << "Ingrese el segundo número: ";
	cin >> b;
	euclides_ext(a,b);
}