#include "ffc/types.h"

extern void func_0208763c(void *p);
extern uint32_t func_0204f078(uint32_t x);
extern void func_02087678(void *p);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_0205847c(void *p);
extern void func_02056858(void *p);

void func_02063350(uint8_t *p, uint32_t id) {
    struct {
        void *ptr;
        volatile uint8_t flag;
    } g;
    uint32_t idx;
    uint32_t off;
    uint32_t n;
    uint32_t i;
    void **arr;

    g.ptr = p + 0x58;
    g.flag = 1;
    if (g.flag) {
        func_0208763c(g.ptr);
    }
    idx = func_0204f078(id);
    off = idx << 2;
    *(int32_t *)(p + 0x38 + off) -= 1;
    if (*(int32_t *)(p + 0x38 + off) > 0) {
        if (g.flag) {
            func_02087678(g.ptr);
        }
        return;
    }
    n = *(uint32_t *)((uint8_t *)func_02052d90(*(void **)(p + 4), *(uint32_t *)(p + 8)) + 0x24);
    for (i = 0; i < n; i++) {
        arr = *(void ***)(p + 0x48 + off);
        func_0205847c(*(void **)((uint8_t *)arr[i] + 0x10));
    }
    func_02056858(*(void **)(p + 0x48 + off));
    *(void **)(p + 0x48 + off) = 0;
    if (g.flag) {
        func_02087678(g.ptr);
    }
}
