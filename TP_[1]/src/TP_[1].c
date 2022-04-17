/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Ayelen Medina  	1°C  T.M
 DNI		 : 35.341.540

Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTp1.h"

int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int kmIngresados;
	int precioVueloAerolineas;
	int precioVueloLatam;
	float descuentoDebitoAerolineas;
	float descuentoDebitoLatam;
	float interesCreditoAerolineas;
	float interesCreditoLatam;
	float conversionAbitcoinAerolineas;
	float conversionAbitcoinLatam;
	float diferenciaEntreLatamYaerolineas;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;

	do
	{

		printf("\n1. Ingresar Km. \n");
		printf("2. Ingresar precio de vuelos. \n");
		printf("3. Calcular todos los costos. \n");
		printf("4. Informar resultados. \n");
		printf("5. Carga forzada de datos. \n");
		printf("6. Salir. \n");
		printf("\nElija una opcion: ");
		scanf("%d", &opcion);



		switch(opcion)
		{
		case 1:
			kmIngresados=PedirEntero("\nIngresar Km: ");
			break;

		case 2:
			precioVueloAerolineas=PedirEntero("\n-Precio vuelo Aerolineas: ");
			precioVueloLatam=PedirEntero("-Precio vuelo Latam: ");
			break;
		}
		case 3:
			descuentoDebitoAerolineas=CalcularDescuentoAerolineas(kmIngresados, precioVueloAerolineas);
			descuentoDebitoLatam=CalcularDescuentoLatam(kmIngresados, precioVueloLatam);
			interesCreditoAerolineas=CalcularInteresAerolineas(kmIngresados, precioVueloAerolineas);
			interesCreditoLatam=CalcularInteresLatam(kmIngresados, precioVueloLatam);
			conversionAbitcoinAerolineas=CalcularPesoAbitcoinAerolineas(kmIngresados, precioVueloAerolineas);
			conversionAbitcoinLatam=CalcularPesoAbitcoinLatam(kmIngresados, precioVueloLatam);
			precioUnitarioAerolineas=MostrarPrecioPorKmAerolinea(kmIngresados, precioVueloAerolineas);
			precioUnitarioLatam=MostrarPrecioPorKmLatam(precioVueloAerolineas, precioVueloLatam);
			diferenciaEntreLatamYaerolineas=CalcularDiferenciaDePrecios(precioVueloAerolineas, precioVueloLatam)
			break;

		case 4
			printf("\nLATAM:\n");
			printf("a) Precio con tarjeta de débito: %.2f\n", descuentoDebitoLatam);
			printf("b) Precio con tarjeta de crédito: %.2f\n", interesCreditoLatam);
			printf("c) Precio pagando con bitcoin: %.2f\n", conversionAbitcoinLatam);
			printf("d) Precio unitario: %.2f\n\n", precioUnitarioLatam);
			printf("AEROLINEAS:\n");
			printf("a) Precio con tarjeta de débito: %.2f\n", descuentoDebitoAerolineas);
			printf("b) Precio con tarjeta de crédito: %.2f\n", interesCreditoAerolineas);
			printf("c) Precio pagando con bitcoin: %.2f\n", conversionAbitcoinAerolineas);
			printf("d) Precio unitario: %.2f\n\n", precioUnitarioAerolineas);
			printf("La diferencia de precio es: %.2f", diferenciaEntreLatamYaerolineas);
			break;

		case 5:
			descuentoDebitoAerolineas=CalcularDescuentoAerolineas(7090, 162965);
			descuentoDebitoLatam=CalcularDescuentoLatam(7090, 159339);
			interesCreditoAerolineas=CalcularInteresAerolineas(7090, 162965);
			interesCreditoLatam=CalcularInteresLatam(7090, 159339);
			conversionAbitcoinAerolineas=CalcularPesoAbitcoinAerolineas(7090, 162965);
			conversionAbitcoinLatam=CalcularPesoAbitcoinLatam(7090, 159339);
			precioUnitarioAerolineas=MostrarPrecioPorKmAerolinea(7090, 162965);
			precioUnitarioLatam=MostrarPrecioPorKmLatam(162965, 159339);
			diferenciaEntreLatamYaerolineas=CalcularDiferenciaDePrecios(162965, 159339)

			printf("\nLATAM:\n");
			printf("a) Precio con tarjeta de débito: %.2f\n", descuentoDebitoLatam);
			printf("b) Precio con tarjeta de crédito: %.2f\n", interesCreditoLatam);
			printf("c) Precio pagando con bitcoin: %.2f\n", conversionAbitcoinLatam);
			printf("d) Precio unitario: %.2f\n\n", precioUnitarioLatam);
			printf("AEROLINEAS:\n");
			printf("a) Precio con tarjeta de débito: %.2f\n", descuentoDebitoAerolineas);
			printf("b) Precio con tarjeta de crédito: %.2f\n", interesCreditoAerolineas);
			printf("c) Precio pagando con bitcoin: %.2f\n", conversionAbitcoinAerolineas);
			printf("d) Precio unitario: %.2f\n\n", precioUnitarioAerolineas);
			printf("La diferencia de precio es: %.2f", diferenciaEntreLatamYaerolineas);

			break;
		case 6:
			printf("")
			break;
		case 7:
			system("cls");
			printf("\aLa opcion ingresda es incorrecta.\nPresione enter para seguir con el programa...")
			break;

		}


	}while(opcion!=6);






	return EXIT_SUCCESS;
}
