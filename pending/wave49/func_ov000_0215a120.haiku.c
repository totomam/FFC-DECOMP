#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];
extern const uint8_t data_ov000_0216af88[];

extern int32_t func_ov000_02154ed0(uint8_t *e);
extern uint8_t *func_ov000_0215a638(void);
extern void func_ov000_02155498(uint8_t *a, uint8_t *e, uint8_t *buf);
extern int32_t func_02092948(uint8_t *a, uint8_t *b);
extern int32_t func_ov000_02154e58(uint8_t *e);
extern void func_ov001_02175c78(uint8_t *ctx, uint32_t id);
extern void func_ov000_02155478(uint8_t *e, uint32_t id);
extern void func_02086b04(uint8_t *buf, int32_t n, const uint8_t *fmt, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov000_021553c4(uint8_t *e);
extern int32_t func_02090410(const uint8_t *a, const uint8_t *b, uint32_t n);
extern void func_ov000_02159ea4(uint32_t id);
extern int32_t func_ov000_02159dd8(uint8_t *base, int32_t count, uint32_t id);
extern void func_ov000_02154f24(uint8_t *e, int32_t v);
extern void func_ov000_02154f48(uint8_t *e, int32_t v);
extern void func_ov000_02159a9c(int32_t idx);
extern void func_ov001_02175cb4(uint8_t *ctx, uint32_t id);

void func_ov000_0215a120(uint8_t *ctx, uint32_t *p) {
    uint8_t buf[0x1c];
    uint8_t *pa;
    uint8_t *pb;
    uint32_t flag = 0;
    uint32_t any = 0;
    int32_t i;
    int32_t idx;
    uint8_t *e;

    if (p[0] != 0) {
        return;
    }
    if (*(int32_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x14) > 0) {
        pa = (uint8_t *)p + 0x97;
        pb = (uint8_t *)p + 0x8e;
        for (i = 0; i < *(int32_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x14); i++) {
            uint32_t off = (uint32_t)i * 12;
            e = *(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off;
            if (func_ov000_02154ed0(e) == 1) {
                func_ov000_0215a638();
                func_ov000_02155498(func_ov000_0215a638(), e, buf + 1);
                if (func_02092948(buf + 1, pb) != 0) {
                    continue;
                }
                if (func_ov000_02154e58(e) != 0) {
                    flag = 1;
                }
                func_ov001_02175c78(ctx, p[1]);
                func_ov000_02155478(e, p[1]);
                any = 1;
            } else {
                if (func_ov000_02154ed0(e) == 3 || func_ov000_02154ed0(e) == 2) {
                    uint32_t v = *(uint32_t *)(func_ov000_0215a638() + 0x24);
                    func_02086b04(buf, 5, data_ov000_0216af88, v >> 24, (v >> 16) & 0xff,
                                  (v >> 8) & 0xff, v & 0xff);
                    func_ov000_0215a638();
                    if (p[1] != func_ov000_021553c4(e)) {
                        continue;
                    }
                    if (func_02090410(buf, pa, 4) != 0) {
                        continue;
                    }
                    if (func_ov000_02154e58(e) != 0) {
                        flag = 1;
                    }
                    func_ov001_02175c78(ctx, p[1]);
                    any = 1;
                }
            }
        }
    }
    if (any != 0) {
        func_ov000_02159ea4(p[1]);
        idx = func_ov000_02159dd8(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18),
                                  *(int32_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x14), p[1]);
        e = *(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + (uint32_t)idx * 12;
        func_ov000_02154f24(e, 1);
        if (func_ov000_02154e58(e) == 0) {
            return;
        }
        func_ov000_02154f48(e, 1);
        if (flag != 0) {
            return;
        }
        func_ov000_02159a9c(idx);
        (*(uint8_t **)(data_ov000_0217004c + 0xc))[0x1d] = 1;
    } else {
        func_ov001_02175cb4(ctx, p[1]);
    }
}
