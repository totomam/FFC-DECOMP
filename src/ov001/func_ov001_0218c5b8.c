#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t pad[2];
    uint32_t f8;
} Obj;

extern void func_ov001_0218c520(void *p);
extern void *data_020b8e44;
extern Pair data_ov001_02194874;
extern Pair data_ov001_0219487c;

void func_ov001_0218c5b8(void *p)
{
    func_ov001_0218c520(p);
    if (((Obj *)data_020b8e44)->f8 == 0) {
        *(Pair *)((char *)p + 0xb0) = data_ov001_02194874;
    } else {
        *(Pair *)((char *)p + 0xb0) = data_ov001_0219487c;
    }
}
