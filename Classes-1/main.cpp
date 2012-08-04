//
//  main.cpp
//  Classes-1
//
//  Created by Kris Evans on 04/08/2012.
//  Copyright (c) 2012 Kris Evans. All rights reserved.
//

#include <iostream>

// Declaration of apartment struct

struct apartment;
// Declaration of counter object
int i;


// Definition of apartment struct
struct apartment {
    int number;
    int numRooms;
    // bool hasGarage;
    
    void newApartment(int number,int numRooms,bool hasGarage);
    
};

// Create an array of placeToLive of type apartment (our struct)
apartment placeToLive[3];

// Constructor function for creating a new apartment structure
void apartment::newApartment(int numberInit,int numRoomsInit,bool hasGarageInit){
    number = numberInit;
    numRooms = numRoomsInit;
    //hasGarage = hasGarageInit;
    };

int main(int argc, const char * argv[])
{
    for (i=1;i<4;i++){
        placeToLive[i].newApartment(i*2, i, 0);
    }
    
    for (i=1;i<4;i++){
        std::cout << i << ". Apartment number " << placeToLive[i].number << " has " << placeToLive[i].numRooms << " rooms\n";
    }

    return 0;
}

