#include "ffc/types.h"

extern uint32_t func_02088978(void *a, uint32_t p1, int32_t p2, uint16_t *p3);
extern void *func_ov000_0214da7c(void *a, int32_t *st, uint16_t *h1, uint16_t *h2, uint32_t *v);
extern void func_02084e04(void *obj, uint32_t p1, int32_t n);
extern void func_0208898c(uint32_t h);

int32_t func_ov000_0214d9b4(uint8_t *a, uint32_t p1, int32_t p2, uint16_t *p3, uint32_t *p4)
{
    int32_t r;
    int32_t st;
    uint32_t val;
    uint16_t hB;
    uint16_t hA;
    uint32_t h;
    uint8_t *obj;
    uint8_t *pp;
    int32_t flag;

    h = func_02088978(a, p1, p2, p3);
    obj = func_ov000_0214da7c(a, &st, &hB, &hA, &val);
    if (obj != 0) {
        if (st == 0) {
            r = -6;
        } else {
            if (p2 > st) {
                p2 = st;
            }
            r = st;
            flag = 1;
            if (*(int8_t *)(a + 0xaf) != 0 && *(int8_t *)(a + 0xaf) != 4) {
                flag = 0;
            }
            if (flag) {
                r = p2;
            }
            func_02084e04(obj, p1, p2);
            pp = *(uint8_t **)(a + 0xa0);
            if (*(int8_t *)(pp + 0xfe) == 0) {
                *(int32_t *)(pp + 0xf8) += r;
            }
        }
    } else {
        if (st == 0) {
            r = 0;
        } else {
            r = -28;
        }
        *(uint16_t *)(a + 0xac) = *(int16_t *)(a + 0xac) & ~6;
    }
    if (r >= 0) {
        if (p3 != 0 && p4 != 0) {
            *p3 = hA;
            *p4 = val;
        }
        if (*(uint16_t *)(a + 0xb0) == 0) {
            *(uint16_t *)(a + 0xb0) = hB;
        }
    }
    func_0208898c(h);
    return r;
}
