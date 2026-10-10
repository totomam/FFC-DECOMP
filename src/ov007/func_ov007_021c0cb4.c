#include "ffc/types.h"

extern void func_ov000_02167b80(void *, void *, void *);
extern void func_ov000_02167c24(void *, void *, void *, uint32_t);
extern void func_ov000_02167bcc(void *, void *, void *);
extern uint8_t data_ov007_021c95a4[];
extern uint8_t data_ov007_021c95a8[];
extern uint8_t data_ov007_021c95b0[];

void func_ov007_021c0cb4(uint8_t *p, uint32_t *arr, int n)
{
    int i;

    func_ov000_02167b80(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c95a8);
    for (i = 0; i < n; i++) {
        func_ov000_02167c24(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c95b0, arr[i]);
    }
    func_ov000_02167bcc(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c95a8);
}
