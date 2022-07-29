#include<stdio.h>
#include<math.h>
#include<string.h>
#define PI 3.14159265358979323846

struct cabDatabase
{  
    char startPoint[20];
    char vechType[20];
    int rating;
    char driverNam[20];
    int speed;
};

struct location
{
    char locationName[20];
    float lati;
    float longi;
};


int sourDesti(const char *source, const char *desti);
int maxFare(const char *source,const char *desti,const char *vehi);
const char* goodDriver(const char *source, const char *vehi);
int times(const char *source, const char *desti,const char *name);


