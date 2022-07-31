
#include <stdio.h>
// #define NOTTESTING

enum Validity { Valid, Invalid};
enum ACFanSpeed {Off=0, Normal=750, High=1000, VeryHigh=1200, InvalidInput=9999};
enum RHCategory {Soothing, Humid, VeryHumid, InvalidRHCategory};
enum TempCategory {Cold, Pleasant, Hot, InvalidTempCategory};
enum HourOfDayCategory {Morning, Afternoon, Evening, InvalidHrCategory};

//typedef unsigned int ACFanSpeed;
//typedef enum Bool bool;
typedef unsigned int RelHumidity;
typedef unsigned int Temp;
typedef unsigned int HourOfDay;

// Function prototypes
enum Validity ValidateRH(RelHumidity rh);
enum Validity ValidateTemp(Temp t);
enum Validity ValidateHourOfDay(HourOfDay h);
enum RHCategory GetRHCategory(RelHumidity rh);
enum TempCategory GetTempCategory(Temp t);
enum HourOfDayCategory GetHourOfDayCategory(HourOfDay h);
enum ACFanSpeed GetACFanSpeed(RelHumidity rh, Temp t, HourOfDay hr);

