#include <stddef.h>
#include <string.h>
#include <stdio.h>

//Macros
#define MAX_SIZE 20

//Structure
struct ElectricVehicle
{
    char ModelName[20];
    unsigned int VehicleMass, BatteryPack, DistanceCovered;
	unsigned long Price;
};

typedef struct ElectricVehicle VehD;

//Function Prototypes

unsigned long HighestPrice(const VehD *parr, int length);

unsigned int VehWithLeastDistanceCovered(const VehD *parr, int length);

unsigned int NoOfVehWithSpecificBatteryPack(const VehD *parr, int length, unsigned int VehBattPack);

unsigned int AverageVehicleMass (const VehD *parr, int length);

void displayEntries(const VehD *ptr, int length);

void displayOneEntry(const VehD *ptr);


