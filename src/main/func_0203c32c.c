#include "ffc/types.h"
typedef struct { uint8_t pad[0x1c]; uint32_t v; } B;
typedef struct { uint8_t pad[0x20]; B *b; } A;
extern A *data_0213df18;
uint32_t func_0203c32c(void) {
    return data_0213df18->b->v;
}
