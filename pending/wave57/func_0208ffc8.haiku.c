#include "ffc/types.h"

typedef struct Obj Obj;

struct Obj {
    void *vt0;                                                  /* +0x00 */
    struct {
        uint32_t lo2:2;
        uint32_t m2:3;
        uint32_t mid5:2;
        uint32_t flag:3;
        uint32_t rest:22;
    } f4;                                                       /* +0x04 */
    struct {
        uint32_t st:3;
        uint32_t rest:29;
    } f8;                                                       /* +0x08 */
    uint8_t b0c;                                                /* +0x0c */
    uint8_t b0d;                                                /* +0x0d */
    uint8_t pad0e[0x18 - 0x0e];
    uint32_t f18;                                               /* +0x18 */
    uint32_t f1c;                                               /* +0x1c */
    uint8_t pad20[0x24 - 0x20];
    uint32_t f24;                                               /* +0x24 */
    uint32_t f28;                                               /* +0x28 */
    uint8_t pad2c[0x34 - 0x2c];
    uint32_t f34;                                               /* +0x34 */
    int32_t (*f38)(void *, int32_t *, int32_t, uint32_t);       /* +0x38 */
    uint8_t pad3c[0x48 - 0x3c];
    uint32_t f48;                                               /* +0x48 */
};

extern int32_t func_0208f70c(Obj *p, int32_t x);
extern int32_t func_0208fec8(Obj *p);
extern uint32_t data_02144c00;


int32_t func_0208ffc8(Obj *p, int32_t pos, int32_t mode, ...)
{
    if ((uint8_t)p->f4.flag != 1 || p->b0d != 0) {
        data_02144c00 = 0x28;
        return -1;
    }
    if (p->f8.st == 1) {
        if (func_0208f70c(p, 0)) {
            p->b0d = 1;
            p->f28 = 0;
            data_02144c00 = 0x28;
            return -1;
        }
    }
    if (mode == 1) {
        mode = 0;
        pos += func_0208fec8(p);
    }
    if (mode != 2 && p->f4.m2 != 3 && (p->f8.st - 2u) <= 1u) {
        if (pos >= p->f18 || pos < p->f34) {
            p->f8.st = 0;
        } else {
            p->f24 = p->f1c + (pos - p->f34);
            p->f28 = p->f18 - pos;
            p->f8.st = 2;
        }
    } else {
        p->f8.st = 0;
    }
    if (p->f8.st == 0) {
        if (p->f38 != 0) {
            if (p->f38(p->vt0, &pos, mode, p->f48)) {
                p->b0d = 1;
                p->f28 = 0;
                data_02144c00 = 0x28;
                return -1;
            }
        }
        p->b0c = 0;
        p->f18 = pos;
        p->f28 = 0;
    }
    return 0;
}
