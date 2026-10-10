#include "ffc/types.h"

extern void func_ov000_02167b80(void *, void *, void *);
extern void func_ov000_02167d20(void *, void *, void *, uint32_t);
extern void func_ov000_02167bcc(void *, void *, void *);
extern uint8_t data_ov007_021c95a4[];
extern uint8_t data_ov007_021c95b8[];
extern uint8_t data_ov007_021c95c4[];

void func_ov007_021c0cf8(uint8_t *p, uint32_t *arr, int n)
{
    int i;

    func_ov000_02167b80(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c95b8);
    for (i = 0; i < n; i++) {
        func_ov000_02167d20(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c95c4, arr[i]);
    }
    func_ov000_02167bcc(*(void **)(p + 0x18), data_ov007_021c95a4, data_ov007_021c95b8);
}
