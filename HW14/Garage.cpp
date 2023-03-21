#include "Garage.h"

void Garage::addVehicle(Vehicle* vehicle)
{
	vehicles.push_back(vehicle);
}

void Garage::removeVehicle(int num)
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		if (i == num)
		{
			vehicles.erase(vehicles.begin() + i);
			break;
		}
	}
}

void Garage::searchByType(string type)
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		if (vehicles[i]->get_type() == type)
		{
			vehicles[i]->show_info();
		}
	}
}

void Garage::searchByNum(int num)
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		if (i == num)
		{
			vehicles[i]->show_info();
		}
	}
}

void Garage::searchBySpeed(int speed)
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		if (i == speed)
		{
			vehicles[i]->show_info();
		}
	}
}

void Garage::editPrice(int num, double newPrice)
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		if (vehicles[i]->get_price() == num)
		{
			vehicles[i]->set_price(newPrice);
		}
	}
}


void Garage::sortByType()
{
	sort(vehicles.begin(), vehicles.end(), name);
}
void Garage::showAllVehicles()
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->show_info();
	}
}

bool name(Vehicle* a, Vehicle* b)
{
	return a->get_type() < b->get_type();
}

