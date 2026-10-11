#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S;

extern void *func_ov000_02163350(void *p);
extern void func_ov001_021832d4(uint32_t v);
extern void func_ov001_02182a18(void);
extern S data_ov000_0217020c;

void func_ov000_02163bd0(void *p)
{
    void *q = func_ov000_02163350(p);
    func_ov001_021832d4(*(uint32_t *)((uint8_t *)q + 0x618));
    if (data_ov000_0217020c.a == 0) {
        func_ov001_02182a18();
    } else {
        data_ov000_0217020c.c = 1;
    }
}
