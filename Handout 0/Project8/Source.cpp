#include <iostream>
#include "Header.h"
using namespace std;





int main() {
	vec3 <float> v(10, 4, 6);
    vec3 <float> v2(10, 4, 6);

	cout << v.x << "x" << v.y << "y" << v.z  << "z" << endl;

	/*v.normalize();
	cout << v.x << "x" << v.y << "y" << v.z << "z" << endl;
	
	v.zero();
	if (v.is_zero()) cout << "Cleaned Parameters" << endl;

	float resultado = v.distance_to(v2);
	cout << resultado << endl;

	v.zero();
	if (v.is_zero()) cout << "Cleaned Parameters" << endl;*/

	float solucion = v.operador(v2);
	cout << solucion << endl;


	system("pause");

	return 0;
}


