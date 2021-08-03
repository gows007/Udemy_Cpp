#pragma once
class Car
{
private:
	float fuel;
	float speed;
	int passenger;

public:
	Car(); //Constuctor
	Car(float amount); //Parameterized constructor 

	~Car(); //Destructor

	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassenger(int count);
	void Dashboard(); //Display details 

	
};

