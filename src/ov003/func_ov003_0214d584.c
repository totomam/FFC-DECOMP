#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_0202d4cc(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0202d85c(void *p, void *obj, uint32_t z);
extern void func_0202d774(void *p);
extern void func_0202d744(void *p);
extern void func_0202d838(void *p, uint32_t idx);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov003_02179924[];

void func_ov003_0214d584(uint8_t *self, uint32_t *arr, uint32_t count, uint32_t extra)
{
    uint8_t obj[0x44];
    uint32_t i;
    void *p;

    if (arr[0] != 0) {
        return;
    }
    func_02086ad4(obj, (uint32_t)data_ov003_02179924, extra);
    for (i = 0; i < count; i++) {
        p = func_0205681c(0x210);
        if (p != 0) {
            p = func_0202d4cc(p, *(uint32_t *)(self + 0x178), 0x7fff, 0, 0);
        }
        arr[i] = (uint32_t)p;
        func_0202d85c((void *)arr[i], obj, 0);
        func_0202d774((void *)arr[i]);
        func_0202d744((void *)arr[i]);
        func_0202d838((void *)arr[i], i);
        func_02056bc0(*(void **)(self + 0x338), (void *)arr[i]);
    }
}
