#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern int32_t func_02071df8(void *);
extern int32_t func_02071e28(void *);
extern int32_t func_02071e3c(void *);
extern Pair data_020b284c;
extern Pair data_020b2854;
extern Pair data_020b285c;
extern Pair data_020b2864;

#define CHAIN(p) (*(void **)(*(uint8_t **)((uint8_t *)(p) + 0x80) + 0x80))

void func_020768ec(uint8_t *p)
{
    if (func_02071df8(CHAIN(p)) == 0) {
        *(Pair *)(p + 0x88) = data_020b284c;
        return;
    }
    if (func_02071e28(CHAIN(p)) == 0) {
        *(Pair *)(p + 0x88) = data_020b2854;
        return;
    }
    if (func_02071e3c(CHAIN(p)) != 0) {
        *(Pair *)(p + 0x88) = data_020b285c;
        return;
    }
    *(Pair *)(p + 0x88) = data_020b2864;
}
