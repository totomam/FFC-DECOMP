#include "ffc/types.h"
typedef struct { uint8_t pad[0x18]; uint32_t v; } B;
typedef struct { uint8_t pad[0x24]; B *b; } A;
extern A *data_0213df18;
uint32_t func_0203c28c(void) {
    return data_0213df18->b->v;
}
