#pragma once

#include <Arduboy2.h>   
#include "../utils/Constants.h"
#include "../utils/Stack.h"

struct Flash {
    uint8_t frame;
};

struct Gate {
    uint8_t position;
    uint8_t closingDelay;
};
 
struct Door {
    uint8_t position;
};
 
struct Sword {
    bool onGround;
};
 
struct Torch {
    uint8_t frame;
};
 
struct CollapsingFloor {
    uint8_t frame;
    uint8_t distToFall;
    uint8_t distanceFallen;     // 255 not falling. Or 0 to distToFall when falling.  Turns into a CollapsedFloor when fallen.
    uint8_t timeToFall;         // 255 if not counting down.
};
 
struct FloorButton {
    uint8_t frame;              
    uint8_t gateX;
    uint8_t gateY;              // 255 not falling. Or 0 to distToFall when falling.  Turns into a CollapsedFloor when fallen.
    uint8_t timeToFall;         // How long does gate remain open for.
};
 
struct CollapsedFloor {
};
 
struct PotionSmall {
    uint8_t frame;
};

struct Item {

    ItemType itemType; // set accordingly
    uint8_t x;
    uint8_t y;
    bool active;

    union {
        struct Flash flash;
        struct Gate gate;
        struct Door door;
        struct Sword sword;
        struct Torch torch;
        struct CollapsingFloor collapsingFloor;
        struct CollapsedFloor collapsedFloor;
        struct PotionSmall potionSmall;
        struct FloorButton floorButton;
    } data; 
 
};
