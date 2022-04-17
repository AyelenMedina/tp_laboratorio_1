/*
 * FuncionesTp1.c
 *
 * Ayelen Medina 1C
 */

int PedirEntero(char mensaje[])     //la funcion se encarga de pedir el numero, almacenarlo y retornarlo.
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);

    return numero;
}


float CalcularDescuentoAerolineas(int kmIngresados, int precioVueloAerolineas)
{
	float descuento;
	int precioTotal;
	float descuentoDebito;
	descuento=0;

	precioTotal=kmIngresados+precioVueloAerolineas;
	descuento=precioTotal*0.10;
	descuentoDebito=precioTotal-descuento;

	return descuentoDebito;
}


float CalcularDescuentoLatam(int kmIngresados, int precioVueloLatam)
{
	float descuento;
	int precioTotal;
	float descuentoDebito;
	descuento=0;

	precioTotal=kmIngresados+precioVueloLatam;
	descuento=precioTotal*0.10;
	descuentoDebito=precioTotal-descuento;

	return descuentoDebito;
}


float CalcularInteresAerolineas(int kmIngresados, int precioVueloAerolineas)
{
	float interes;
	int precioTotal;
	float interesCredito;
	interes=0;

	precioTotal=kmIngresados+precioVueloAerolineas;
	interes=precioTotal*1.25;
	interesCredito=precioTotal+interes;

	return interesCredito;
}


float CalcularInteresLatam(int kmIngresados, int precioVueloLatam)
{
	float interes;
	int precioTotal;
	float interesCredito;
	interes=0;

	precioTotal=kmIngresados+precioVueloLatam;
	interes=precioTotal*1.25;
	interesCredito=precioTotal+interes;

	return interesCredito;
}


float CalcularPesoAbitcoinAerolineas(int kmIngresados, int precioVueloAerolineas)
{
	int peso;
	float bitcoin;
	float conversion;
	float precioEnBitcoin;

	peso=1;
	bitcoin=4606954.55;
	conversion=peso*bitcoin;

	precioEnBitcoin=(kmIngresados*precioVueloAerolineas) * conversion;

	return precioEnBitcoin;
}


float CalcularPesoAbitcoinLatam(int kmIngresados, int precioVueloLatam)
{
	int peso;
	float bitcoin;
	float conversion;
	float precioEnBitcoin;

	peso=1;
	bitcoin=4606954.55;
	conversion=peso*bitcoin;

	precioEnBitcoin=(kmIngresados*precioVueloLatam) / conversion;

	return precioEnBitcoin;
}


float MostrarPrecioPorKmAerolinea(int kmIngresados, int precioVueloAerolineas)
{
	float precioUnitario;

	precioUnitario=precioVueloAerolineas/kmIngresados;

	return precioUnitario;
}


float MostrarPrecioPorKmLatam(int kmIngresados, int precioVueloLatam)
{
	float precioUnitario;

	precioUnitario=precioVueloLatam/kmIngresados;

	return precioUnitario;
}


float CalcularDiferenciaDePrecios(int precioVueloAerolineas, int precioVueloLatam)
{
	float diferencia;

	diferencia=precioVueloAerolineas-precioVueloLatam;

	return diferencia;
}












