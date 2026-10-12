#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern void func_0201cf34(uint32_t, void *);
extern void func_ov003_0214649c(uint32_t);
extern uint32_t func_ov003_02153470(void);
extern uint32_t func_020192f4(uint32_t, uint32_t);
extern void func_02056c4c(uint32_t);
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_ov003_021600cc(void *, uint32_t, uint32_t, uint32_t);
extern void func_02021338(uint32_t);

uint32_t func_ov003_02160518(uint8_t *self) {
    uint32_t buf[40];
    uint8_t *obj;
    uint8_t *v;
    uint8_t *p4;
    uint8_t r7;
    uint8_t *p6;
    uint32_t flag;
    uint32_t w;
    uint32_t *sub;
    uint32_t *vt;

    func_0201cf34(data_020b93b8, &buf[2]);
    if (((buf[9] << 25) >> 30) != 0) {
        func_ov003_0214649c(*(uint32_t *)(self + 0x80));
        if (func_020192f4(data_020b8e44, *(uint32_t *)func_ov003_02153470()) != 0) {
            obj = *(uint8_t **)(self + 0x80);
            v = *(uint8_t **)(obj + 0x180);
            if (v != 0 && self[0xce] == 0) {
                func_02056c4c(*(uint32_t *)(self + 0xd8));
                p4 = *(uint8_t **)(self + 0xd4);
                p6 = p4 + 0x1c;
                r7 = p4[0x12];
                if (r7 != 0) {
                    func_0208763c(p6);
                }
                flag = (*(uint32_t *)(p4 + 0x14) == 0);
                if (r7 != 0) {
                    func_02087678(p6);
                }
                if (flag || *(uint32_t *)(*(uint8_t **)(*(uint8_t **)(self + 0x80) + 0x180) + 0xdc) == 0) {
                    func_02056c4c(*(uint32_t *)(self + 0xd4));
                    obj = *(uint8_t **)(self + 0x80);
                    v = *(uint8_t **)(obj + 0x180);
                    w = *(uint32_t *)(v + 0xdc);
                    if (w != 1) {
                        sub = *(uint32_t **)(obj + 0x20c);
                        vt = (uint32_t *)sub[0];
                        ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(sub, 6, 0);
                    } else {
                        if (w == 0) {
                            goto skip;
                        }
                        sub = *(uint32_t **)(obj + 0x20c);
                        vt = (uint32_t *)sub[0];
                        ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(sub, 3, 0);
                    }
skip:
                    func_ov003_021600cc(self, 1, 1, 0);
                }
                func_02021338(0xb2);
                return 1;
            }
        }
    }
    return 0;
}
