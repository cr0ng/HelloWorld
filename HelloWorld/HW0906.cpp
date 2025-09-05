#include <stdio.h>
#include <iostream>
#include "HW0906.h"

float Avg3Number(int Number1, int Number2, int Number3)
{
	return (Number1 + Number2 + Number3)/3.0f;
}

int  SalePrice(int Price, int Sale)
{
	return Price - Price * Sale/100 ;
}

