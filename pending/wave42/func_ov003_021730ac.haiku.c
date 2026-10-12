#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02052d90(void *mar, uint32_t index);
extern Pair data_ov003_0217b7d0;
extern Pair data_ov003_0217b7d8;
extern Pair data_ov003_0217b7e0;

void func_ov003_021730ac(void *self) {
    uint8_t *p = (uint8_t *)self;
    switch (*(uint32_t *)(p + 0x90)) {
    case 1: {
        void *r = func_02052d90(*(void **)(p + 0xb0), *(uint32_t *)(p + 0xb4));
        *(uint32_t *)(p + 0x94) = *(uint16_t *)((uint8_t *)r + 6);
        r = func_02052d90(*(void **)(p + 0xb0), *(uint32_t *)(p + 0xb4));
        *(uint32_t *)(p + 0x98) = *(uint16_t *)((uint8_t *)r + 0xa);
        *(Pair *)(p + 0x80) = data_ov003_0217b7d0;
        break;
    }
    case 3: {
        void *r = func_02052d90(*(void **)(p + 0xb0), *(uint32_t *)(p + 0xb4));
        *(uint32_t *)(p + 0x98) = *(uint16_t *)((uint8_t *)r + 0xc);
        *(Pair *)(p + 0x80) = data_ov003_0217b7d8;
        break;
    }
    case 2: {
        void *r = func_02052d90(*(void **)(p + 0xb0), *(uint32_t *)(p + 0xb4));
        *(uint32_t *)(p + 0x98) = *(uint16_t *)((uint8_t *)r + 0xe);
        *(Pair *)(p + 0x80) = data_ov003_0217b7e0;
        break;
    }
    }
}
