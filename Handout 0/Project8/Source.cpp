#include <iostream>
#include "Header.h"
using namespace std;





int main() {
	 vec3 <float> v(10, 4, 6);
    vec3 <float>  v2(10, 4, 6);
	vec3 <float> resultado(0,0,0);

	cout << v.x << "x" << v.y << "y" << v.z  << "z" << endl;

	/*v.normalize();
	cout << v.x << "x" << v.y << "y" << v.z << "z" << endl;
	
	v.zero();
	if (v.is_zero()) cout << "Cleaned Parameters" << endl;

	float resultad = v.distance_to(v2);
	cout << resultad << endl;

	v.zero();
	if (v.is_zero()) cout << "Cleaned Parameters" << endl;*/

	resultado = v.operator+(v2);
	cout << resultado.x << "x" << resultado.y << "y" << resultado.z << "z" << endl;


	system("pause");

	return 0;
}


