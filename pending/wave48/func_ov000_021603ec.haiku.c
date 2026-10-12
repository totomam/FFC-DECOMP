#include "ffc/types.h"

extern int func_ov000_0216376c(void);
extern void func_ov000_02163758(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_021832d4(void *p);
extern int func_ov000_021633a8(void);
extern void func_ov000_0216335c(int x);
extern void func_ov000_02160ed4(void *p);
extern int func_ov000_02163408(void);
extern void *func_ov000_02163634(int i);
extern int func_ov000_021614a0(void *v, int x);
extern void func_ov000_02160d04(void *p);
extern void func_ov000_0216384c(void);

int func_ov000_021603ec(void *a, void *b)
{
    uint8_t *p;
    int i;

    if (func_ov000_0216376c() != 0) {
        func_ov000_02163758();
    }
    func_ov000_02163350()[0x6d8] = 0xff;
    p = func_ov000_02163350();
    if (*(void **)(p + 0x618) != 0) {
        func_ov001_021832d4(*(void **)(func_ov000_02163350() + 0x618));
        *(uint32_t *)(func_ov000_02163350() + 0x618) = 0;
    }
    *(uint32_t *)(func_ov000_02163350() + 0x67c) = 0;
    if (func_ov000_021633a8() == 2) {
        func_ov000_02163350()[0x18] = 0;
        *(uint32_t *)(func_ov000_02163350() + 0x5dc) = 0;
        func_ov000_0216335c(0x11);
        *(uint32_t *)(func_ov000_02163350() + 0x654) = 0;
        *(uint16_t *)(func_ov000_02163350() + 0x632) = 0;
        func_ov000_02160ed4(a);
        for (i = 1; i < func_ov000_02163408(); i++) {
            if (func_ov000_021614a0(*(void **)func_ov000_02163634(i), 0xd) == 0) {
                return 0;
            }
        }
        if (func_ov000_02163408() == 1) {
            func_ov000_02160d04(b);
        }
    } else {
        func_ov000_0216384c();
    }
    return 1;
}
