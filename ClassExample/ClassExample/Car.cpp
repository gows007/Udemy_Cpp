#include "Car.h"
#include <iostream>
#include <stdio.h>

void Car::FillFuel(float amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	speed++;
	fuel -= 0.4f;
}

void Car::Brake()
{
	speed = 0;
}

void Car::AddPassenger(int count)
{
	passenger = count;
}

void Car::Dashboard()
{
	std::cout << "\nFuel: " << fuel;
	std::cout << "\nSpeed: " << speed;
	std::cout << "\nPassengers: " << passenger;
}

Car::~Car()
{
	//Destructor
	std::cout<<"\nObject Destroyed";
}

//Constructor
Car::Car()
{
	fuel = 0;
	speed = 0;
	passenger = 0;

}

Car::Car(float amount)
{
	std::cout << "\nParameterized constructor called\n";
	fuel = amount;
	speed = 0;
	passenger = 0;
}
