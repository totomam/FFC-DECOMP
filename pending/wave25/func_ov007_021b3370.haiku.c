#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern char data_ov007_021c6230[];
extern Pair data_ov007_021c62d4;
extern void func_ov001_0218dff4(void *self);
extern void func_ov001_0218e13c(void *self, int a);

void *func_ov007_021b3370(void *self, int unused, uint32_t val) {
    uint8_t *p = (uint8_t *)self;
    func_ov001_0218dff4(self);
    *(void **)p = data_ov007_021c6230;
    *(uint32_t *)(p + 0xb8) = 0;
    *(uint32_t *)(p + 0xbc) = val;
    func_ov001_0218e13c(self, 1);
    *(uint32_t *)(p + 0xc0) = 1;
    *(Pair *)(p + 0xb0) = data_ov007_021c62d4;
    return self;
}
