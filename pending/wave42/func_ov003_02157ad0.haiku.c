#include "ffc/types.h"

extern int func_ov003_0214dcc8(void *a, uint16_t b);
extern int func_ov003_02156948(void *a, uint32_t *arr, int x, int y, int z);
extern void *func_0203b8bc(void *a);
extern void func_0202bde4(void *a, void *b, int c, int d, int e);
extern void func_02024db0(void *a, uint8_t b);
extern void func_02023e54(void *a, int b);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);

void func_ov003_02157ad0(uint8_t *p) {
    uint32_t arr[3];
    uint32_t i;
    void *r7;

    if (func_ov003_0214dcc8(*(void **)(p + 0x108), *(uint16_t *)(p + 0xac)) == 0) {
        return;
    }
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    r7 = (void *)func_ov003_02156948(p, arr, 0, 1, 1);
    if (r7 != 0) {
        *(void **)(p + 0x120) = func_0203b8bc(*(void **)(p + 0x10c));
        func_0202bde4(*(void **)(p + 0x120), r7, 0, 0, 0);
        func_02024db0(*(void **)((uint8_t *)*(void **)(p + 0x120) + 0x34), *(uint8_t *)(p + 0x343));
        func_02023e54(*(void **)((uint8_t *)*(void **)(p + 0x120) + 0x34), 1);
        func_02056bc0(*(void **)(p + 0x100), *(void **)(p + 0x120));
    }
    func_020059cc(arr);
}
