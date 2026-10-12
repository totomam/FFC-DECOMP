#include "ffc/types.h"

extern uint32_t data_02141510[];
extern uint32_t data_02141450[];

extern void func_02087498(void *a, void *b, uint32_t c);
extern uint32_t func_02088978(void);
extern uint32_t func_02085c4c(uint32_t a, uint32_t b, uint32_t c, void *d, void *e);
extern void func_02087024(uint32_t *p);
extern void func_020871d8(uint32_t x);
extern void func_0208898c(uint32_t h);
extern uint32_t func_02087508(void *a, void *b, uint32_t c);
extern void func_02088f30(void);
extern uint32_t func_020861e8(void);

uint32_t func_02085f20(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t ret;
    uint32_t buf1;
    uint32_t buf2[8];
    uint32_t h;

    if (data_02141510[1] == 0) {
        return 4;
    }
    func_02087498(buf2, &buf1, 1);
    for (;;) {
        h = func_02088978();
        ret = func_02085c4c(a, b, c, func_020861e8, buf2);
        if (ret == 1) {
            func_02087024(data_02141450);
        } else if (ret == 3) {
            func_020871d8(1);
        } else {
            func_0208898c(h);
            break;
        }
        func_0208898c(h);
    }
    if (ret == 0) {
        if (func_02087508(buf2, &ret, 1) == 0) {
            func_02088f30();
        }
    }
    return ret;
}
