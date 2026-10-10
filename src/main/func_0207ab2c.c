#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } P;
typedef struct { uint8_t pad[0x7c]; P v; } S;
extern S *data_0213ec90;
P func_0207ab2c(void) {
    return data_0213ec90->v;
}
