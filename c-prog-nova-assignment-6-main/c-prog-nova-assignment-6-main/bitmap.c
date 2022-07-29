#include "bitmap.h"
//Complete other records in this array...
VehD VD1[MAX_SIZE] = {
			{"KonaElectric", 7548, 42, 996, 920400},
			{"JaguarlPace", 8990, 70, 470, 5070000},
			{"StromMotorsR3", 4572, 12, 200, 701600},
			{"MerBenzEQC", 9098, 21, 120, 4798000},
			{"MG_ZS_EV", 9011, 42, 403, 3987111},
			{"E_Verito", 8006, 21, 140, 2055000},
			{"TigorEV", 7676, 21, 213, 1634000},
			{"NexonEV", 7155, 28, 220, 1533555}
			 //0
			//complete other records here...	 		

	};

//Pointer creation and pointing to the array...
VehD *ptr = VD1;

/*The function returns the Price of EV with the Highest 
Value in the given records.
In case there are 2 or more vehicles with the same 
highest price, return the first EV record found.*/
unsigned long HighestPrice(const VehD *parr, int length)
{
	int i=0;
	unsigned int max=0;
	for (i=0; i<length; i++)
	{
		if(parr[i].Price>max)
			max=parr[i].Price;
	}
	return max;
}

/*
The function returns the lowest/least distance covered 
in the given EV records.  
The candidate must navigate through the records and 
return the lowest no. of DistanceCovered.
In case there are 2 or more vehicles with the same distance 
covered, return the first EV record found.
*/
unsigned int VehWithLeastDistanceCovered(const VehD *parr, int length)
{
	int i=0;
	unsigned int min=__UINT16_MAX__;
	for (i=0; i<length; i++)
	{
		if(parr[i].DistanceCovered<min)
			min=parr[i].DistanceCovered;
	}	
	return min;
}

/*
The function returns the total number of vehicles with specific 
BatteryPack value from the given records. Specific BatteryPack 
Value to be identifed as per the third argument passed to the 
function. If argument value is not found in the records under 
BatteryPack, return 0 from function.
Else, return the number of vehicles with the given argument 
BatteryPack value from the function.
*/
unsigned int NoOfVehWithSpecificBatteryPack(const VehD *parr, int length, unsigned int VehBattPack)
{
	int i=0;
	unsigned int count=0;
	for (i=0; i<length; i++)
	{
		if(parr[i].BatteryPack==VehBattPack)
			count++;
	}
	if (count==0)
		return 0;
	return count;
}

/*
The function must calculate the average VehicleMass 
from provided record entries and return the average value 
(unsigned integer) from the function. 
In case records are absent, return 0 from the function.
*/
unsigned int AverageVehicleMass (const VehD *parr, int length)
{
	int i=0;
	unsigned int sum=0, avg=0;
	for (i=0; i<length; i++)
		sum=sum+parr[i].VehicleMass;
	if(sum==0)
		return 0;
	avg=sum/length;
	return avg;
}

/*
This function is used to display all Vehicle Data Records. 
Call the function displayOneEntry() in this function.
*/
void displayEntries(const VehD *ptr,int len)
{   
	int i=0;
	for(i=0; i<len; i++)
		displayOneEntry(&ptr[i]);	
}

/*
This function used for displaying a single record at a time. 
This function should be called inside displayEntries function.
*/
void displayOneEntry(const VehD *ptr)
{
	printf("%s", ptr->ModelName);
	printf("%d", ptr->VehicleMass);
	printf("%d", ptr->BatteryPack);
	printf("%d", ptr->DistanceCovered);
	printf("%d", ptr->Price);
}