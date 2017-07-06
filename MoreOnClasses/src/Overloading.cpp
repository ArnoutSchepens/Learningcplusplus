//
// Created by Arnout on 6/07/2017.
//

#include "../include/Overloading.h"

Overloading::Overloading()
{

}

Overloading::Overloading(int a) : var(a)
{

}

int Overloading::getVar()
{
	return var;
}

Overloading Overloading::operator+(Overloading &obj)
{
	Overloading overloading;
	overloading.var = this->var + obj.var;
	return overloading;
}