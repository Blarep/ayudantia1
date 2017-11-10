#include <math.h>
#define PI 3.1415
#define g 9.81

float grados_a_rad(float grados)
{
	return grados/(180*PI);
}

float vel_horizontal(float x, float angulo, float velocidad)
{
	return velocidad*cos(angulo);
}
float vel_vertical (float y, float angulo, float velocidad, float tiempo)
{
	//vel_y = velocidad*sin(angulo) - gt
	float vel_y =  velocidad * sin(angulo) - g*tiempo;
	return vel_y;
}

float pos_horizontal (float x, float velocidad, float angulo, float tiempo)
{
	return x+velocidad*cos(angulo)*tiempo;
}

float pos_vertical(float y, float velocidad,float angulo,float tiempo)
{
	return y+velocidad*sin(angulo)*tiempo-g*tiempo*tiempo/2;
}

float tiempo_en_aire(float y, float velocidad, float angulo)
{
	float raiz = velocidad * velocidad * sin(angulo) * sin(angulo) + 2 * y * g ;
	raiz = pow(raiz,0.5);
	return (velocidad * sin(angulo) + raiz)/g ;
}

float alcance (float x, float y, float velocidad, float angulo)
{
	float tiempo = tiempo_en_aire(y, velocidad, angulo);
	return x + (velocidad*cos(angulo))*tiempo;
}

float tiempo_alt_max(float velocidad, float angulo)
{
	if (angulo < PI) {
		return velocidad*sin(angulo)/g;
	} else {
		return 0;
	}
}

float alt_max(float y, float velocidad, float angulo)
{
	if (angulo < PI) {
		return y + velocidad * velocidad * sin(angulo) * sin(angulo)/(2 * g);
	} else {
		return y;
	}
}

float vel_caer(float y, float velocidad, float angulo)
{
	float tiempo = tiempo_en_aire(y, velocidad, angulo);
	float al_cuadrado = velocidad * sin(angulo) * tiempo - g * tiempo;
	al_cuadrado = al_cuadrado*al_cuadrado;
	float raiz = velocidad * velocidad * cos(angulo) * cos(angulo) + al_cuadrado;
	raiz = pow(raiz,0.5);
	return raiz;
}
int main()
{
	return 0;
}