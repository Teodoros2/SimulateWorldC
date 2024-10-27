#include <stdio.h>
#include "world.h"

int main() {
    GameWorld world;
    initWorld(&world);
    runGame(&world);
    cleanupWorld(&world);
    return 0;
}
