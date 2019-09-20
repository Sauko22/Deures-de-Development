#pragma once
template<class T>

class vec3 {


public:

	T x, y, z;

	vec3() {
		x = 0;
		y = 0;
		z = 0;



	}

	vec3(T x1, T y1, T z1) {
		x = x1;
		y = y1;
		z = z1;

	}

	void normalize() {
		float modulo;

		modulo = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		x = x / modulo;
		y = y / modulo;
		z = z / modulo;

	}

	bool is_zero() {
		if (x == 0 || y == 0 || z == 0) {
			return true;

		}
		return false;
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;


	}

	float distance_to(vec3 <T> v2) {
		float result;
		result = sqrt(pow((v2.x - x), 2) + pow((v2.y - y),2) + pow((v2.z - z),2));
		return result;

	}

	vec3<float> operator+(vec3<T> v2) {
		vec3 aux;
		
		aux.x = x + v2.x;
		aux.y = y + v2.y;
		aux.z = z + v2.z;

		return aux;

	}
	//constructor buit



	/*void inicialitza(); // demana valors de radi i color a l'usuari

	void visualitza(); // escriu els valors de la bombolla per pantalla

	vec3 operator+(vec3&); // Sobrecàrrega operador suma (+)+*/
};