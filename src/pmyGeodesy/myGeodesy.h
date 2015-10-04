/************************************************************/
/*    NAME: David Issa Mattos                                              */
/*    ORGN: ITA                                             */
/*    FILE: myGeodesy.h                                          */
/*   Conversao descrita no farrel e nos slides da Neusa                                         */
/************************************************************/

#ifndef myGeodesy_HEADER
#define myGeodesy_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

class myGeodesy : public CMOOSApp
{
 public:
   myGeodesy();
   ~myGeodesy();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();
   void Global2Local();

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
   double		lat_origin;
   double		lon_origin;
   double		altitude;
   double		mylat;
   double		mylon;
   double		myheading;
   double		myspeed;
   double 		north;
   double 		east;
   double 		down;
   double 		f;
   double		a;
   double		b;
   double		e;
   
	double origin_x;
	double origin_y;
	double origin_z;
   
   
};

#endif 
