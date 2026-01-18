#pragma ONCE
#include <libindi/baseclient.h>
#include <libindi/basedevice.h>
#include <iostream>

class CCDClient : public INDI::BaseClient
{
public:
   void newDevice(INDI::BaseDevice *dp) ;

    void newBLOB(IBLOB *bp) ;
    void newProperty(INDI::Property *prop) ;

    INDI::BaseDevice *ccd = nullptr;
};

