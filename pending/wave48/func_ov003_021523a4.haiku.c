#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_02056aec(void *);
extern void *func_ov003_0215249c(void *);
extern void *func_02056dd4(void *);
extern void *func_02061000(void *, uint32_t, int, int);
extern void func_02056bc0(void *, void *);
extern void *func_02060ef8(void *);
extern int func_0201bd84(void *, uint32_t);
extern void func_ov003_0214649c(void *);
extern void *func_ov003_02153470(void);
extern void *func_02060f6c(void *, uint32_t, int, int);
extern void *data_020b93b8;

void *func_ov003_021523a4(void *self, int unused, int flag, uint32_t idx)
{
    void *r4;
    void *r7;
    void *s;
    void *e;
    void *x;
    void *p;

    if (flag == 0) {
        if (*(void **)((uint8_t *)self + 0x88) != 0) {
            r4 = func_0203b688();
            r7 = func_02056aec(*(void **)((uint8_t *)self + 0x88));
            s = func_ov003_0215249c(self);
            e = func_02061000(*(void **)((uint8_t *)func_02056dd4(self) + 0x24), idx << 1, 0, 0);
            func_02056bc0(r4, e);
            func_02056bc0(r4, s);
            func_02056bc0(r4, r7);
            if (((uint8_t *)self)[0xac] == 0) {
                x = func_02060ef8(*(void **)((uint8_t *)func_02056dd4(self) + 0x24));
                func_02056bc0(r4, x);
            }
            *(void **)((uint8_t *)self + 0x88) = 0;
            return r4;
        }
    } else {
        if (func_0201bd84(data_020b93b8, 0x50) == 0) {
            func_ov003_0214649c(*(void **)((uint8_t *)self + 0x84));
            p = func_ov003_02153470();
            ((void (*)(void *, void *))((void **)(*(void **)self))[5])(self, *(void **)p);
            if (*(void **)((uint8_t *)self + 0x88) != 0) {
                r4 = func_0203b688();
                s = func_ov003_0215249c(self);
                func_02056bc0(r4, s);
                if (((uint8_t *)self)[0xac] == 0) {
                    x = func_02060f6c(*(void **)((uint8_t *)func_02056dd4(self) + 0x24), idx << 1, 0, 0);
                    func_02056bc0(r4, x);
                }
                return r4;
            }
        }
    }
    return func_0203b688();
}
