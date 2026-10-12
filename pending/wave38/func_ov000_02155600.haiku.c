#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint8_t *base;
} DataBlk;

extern void func_02087620(void *object);
extern int func_02086fe4(void *object);
extern void func_02086dcc(void *a, void *b, void *c, void *d, uint32_t e, uint32_t f);
extern void func_020870a0(void *object);
extern void func_ov000_02155888(void);
extern DataBlk data_ov000_0216e294;
extern uint8_t data_ov000_0216e298[];

void func_ov000_02155600(void)
{
    func_02087620(data_ov000_0216e294.base + 0x13d8);
    *(uint32_t *)(data_ov000_0216e294.base + 0x13f0) = 0;
    if (*(uint32_t *)(data_ov000_0216e294.base + 0x1384) != 0) {
        if (func_02086fe4(data_ov000_0216e294.base + 0x1318) == 0) {
            return;
        }
    }
    func_02086dcc(data_ov000_0216e294.base + 0x1318, (void *)func_ov000_02155888, data_ov000_0216e298,
                  data_ov000_0216e294.base + 0x1000, 0x1000, 0x10);
    func_020870a0(data_ov000_0216e294.base + 0x1318);
}
