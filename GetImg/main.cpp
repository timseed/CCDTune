
#include <iostream>
#include "ccdclient.h"

int main()
{
    CCDClient client;

    client.setServer("127.0.0.1", 7624);
    client.connectServer();

    sleep(2); // wait for devices

    auto exposure = client.ccd->getNumber("CCD_EXPOSURE");
    exposure[0].value = 5.0; // 5 seconds
    client.sendNewNumber(exposure);

    sleep(10); // wait for exposure + transfer
}

