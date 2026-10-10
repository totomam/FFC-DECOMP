#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void *func_02043508(void *obj, S s);
extern void func_02056bc0(void *object, void *node);
extern S data_020af67c;

void func_020439ac(uint8_t *p) {
    void *n = func_02043508(p, data_020af67c);
    func_02056bc0(p + 0x14, n);
}
