
#include"bitmap.h"

//Complete other records in this array...

struct cabDatabase vechArr[100] = { 
                                     {"electroniccity","mini",5,"azar",20},
                                     {"electroniccity","mini",4,"arun",25},
                                     {"electroniccity","macro",4,"birbal",25},
                                     {"electroniccity","macro",5,"billu",30},
                                     {"electroniccity","suv",5,"mani",30},
                                     {"electroniccity","suv",3,"jai",35},
                                     {"silkboard","mini",5,"ranjith",20},
                                     {"silkboard","mini",3,"riyaz",25},
                                     {"silkboard","macro",5,"vasanth",25},
                                     {"silkboard","macro",3,"durgesh",30},
                                     {"silkboard","suv",5,"ragu",30},
                                     {"silkboard","suv",3,"raman",35},
                                     {"ecoworld","mini",5,"sam",20},
                                     {"ecoworld","mini",5,"dheena",25},
                                     {"ecoworld","macro",5,"dixon",25},
                                     {"ecoworld","macro",5,"nixon",30},
                                     {"ecoworld","suv",5,"sridhar",30},
                                     {"ecoworld","suv",5,"joseph",35},
                                     {"madiwala","mini",5,"chira",20},
                                     {"madiwala","mini",3,"laxshman",25},
                                     {"madiwala","macro",5,"dravid",25},
                                     {"madiwala","macro",3,"tanu",30},
                                     {"madiwala","suv",5,"maxi",30},
                                     {"madiwala","suv",3,"john",35},
                                     {"majestic","mini",5,"ravi",20},
                                     {"majestic","mini",3,"ram",25},
                                     {"majestic","macro",5,"somesh",25},
                                     {"majestic","macro",3,"navin",30},
                                     {"majestic","suv",5,"raj",30},
                                     {"majestic","suv",3,"boss",35}
                                     //complete other records here...

                                  };

struct location locArr[05] = {

                                 {"electroniccity",12.8452, 77.6602},
                                 {"silkboard",12.9177, 77.6238},
                                 {"ecoworld",12.9213, 77.6844},
                                 {"madiwala",12.9226, 77.6174},
                                 {"majestic",12.9767, 77.5713}

                                 //complete other records here...

                             };

/* The function has two arguments, like source and destination. 
The function helps to find the distance between two points and 
return the result(distance (km)) in integer format.

Hint:
Use â€œHaversine formulaâ€ to calculate the distance between two points. */


int sourDesti(const char *source, const char *desti)
{    
   int i=0, distance=0;
   double lat1=0.0, lon1=0.0, lat2=0.0, lon2=0.0, dlat=0.0, dlon=0.0, aHarv=0.0, cHarv=0.0;
   const double earth=6378.137;
   for (i=0; i<sizeof(locArr); i++)
   {
      if(strcmp(locArr[i].locationName,source)==0)
      {
         lat1=locArr[i].lati*(PI/180);
         lon1=locArr[i].longi*(PI/180);
      }
      if(strcmp(locArr[i].locationName,desti)==0)
      {
         lat2=locArr[i].lati*(PI/180);
         lon2=locArr[i].longi*(PI/180);
      }
   } 
   dlat=lat1-lat2;
   dlon=lon1-lon2;
   aHarv= pow(sin(dlat/2.0),2.0)+cos(lat1)*cos(lat2)*pow(sin(dlon/2),2);
   cHarv=2*atan2(sqrt(aHarv),sqrt(1.0-aHarv));
   distance=(int)ceil(earth*cHarv);
   return distance;
}

/*  
 The function has three arguments source, destination, and VechType
 The function help to find the fare(price). To get fare , first find the 
 distance (KM) by using first two arguments (source and destination)
 and then find the fare by using third arguments. Refer below hint for different cab charges.

Hint:
â€¢	Fare for mini cab â€“ 5RS/km
â€¢	Fare for macro cab â€“ 10RS/km
â€¢	Fare for SUV cab â€“ 15RS/km          */


int maxFare(const char *source,const char *desti,const char *vehi)
{
   int distance=sourDesti(source, desti);
   int fare=0;
   if(strcmp(vehi, "mini")==0 || strcmp(vehi, "Mini")==0 || strcmp(vehi, "MINI")==0)
      fare=5*distance;
   else if (strcmp(vehi, "macro")==0 || strcmp(vehi, "Macro")==0 || strcmp(vehi, "MACRO")==0)
      fare=10*distance;
   else if (strcmp(vehi, "suv")==0 || strcmp(vehi, "Suv")==0 || strcmp(vehi, "SUV")==0)
      fare=15*distance;
   return fare;
}

/* The function has two arguments, like source and vehicle type. 
The function helps to find best driver in the given cabDatabase records.
the candidate must navigate through record return the best driver. 
(Return the result in string format). */

const char* goodDriver(const char *source, const char *vehi)
{
   int i=0;
   char* driver;
   for(i=0; i<sizeof(vechArr); i++)   
   {
      if(strcmp(vechArr[i].startPoint,source)==0 && strcmp(vechArr[i].vechType,vehi)==0)
         if(vechArr[i].rating>vechArr[i+1].rating)
            return vechArr[i].driverNam;
         else
            return vechArr[i+1].driverNam;
   }
}

/* The function has three arguments, like source, 
destination, and driver name. The function helps to
find maximum time to reach destination (Return the result in integer format).

Hint:
To solve, use time formula. 
Refer cabDatabase (structure name) for speed value. */


int times(const char *source, const char *desti,const char *name)
{  
   int distance=sourDesti(source, desti);
   int i=0, speed=0;
   for (i=0; i<30; i++) 
   {
      if(strcmp(vechArr[i].driverNam, name)==0)
         speed=vechArr[i].speed;
   }    
   return (distance*60)/speed;
}

