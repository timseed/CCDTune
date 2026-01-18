#include "ccdclient.h"
    void newDevice(INDI::BaseDevice *dp) 
    {
        if (dp->getDeviceName() == std::string("My CCD"))
        {
            ccd = dp;
            std::cout << CCD detectedn;
        }
    }

    void newBLOB(IBLOB *bp) 
    {
        std::cout << "Received image": 
                  << bp->name
                  << " size= "<< bp->size << " bytes\n";

        // bp->blob contains FITS data
        FILE *f = fopen(image.fits, wb);
        fwrite(bp->blob, bp->size, 1, f);
        fclose(f);
    }

    void newProperty(INDI::Property *prop) 
    {
            enableBLOB(prop->getDeviceName(), prop->getName(), BLOB_ONLY);
    }


