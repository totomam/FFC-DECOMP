/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint8_t *p; } It;

extern "C" void func_02051768(void *cursor);
extern "C" uint32_t func_0205161c(void *list, void *node, int a, int b, uint16_t *key);
extern "C" void func_0202a9ac(void *cursor);
extern "C" void func_02051708(uint32_t *out, void *list, uint16_t *key);

extern "C" void func_020514e8(uint32_t *out, uint8_t *list, It cur, uint16_t *key)
{
    It a, b;
    uint32_t tmp[2];
    int ok = 1;
    int flag;

    if (list + 4 != cur.p) {
        if (!(*key < *(uint16_t *)(cur.p + 0xc))) ok = 0;
    }
    if (ok) {
        flag = 1;
        a = cur;
        if (cur.p != *(uint8_t **)(list + 8)) {
            func_02051768(&a);
            if (!(*(uint16_t *)(a.p + 0xc) < *key)) flag = 0;
        }
        if (flag) {
            uint8_t *c = cur.p;
            uint8_t *n = a.p;
            if (*(uint32_t *)c == 0) {
                *out = func_0205161c(list, c, 1, c == *(uint8_t **)(list + 8), key);
            } else {
                *out = func_0205161c(list, n, 0, 0, key);
            }
            return;
        }
    } else {
        if (*(uint16_t *)(cur.p + 0xc) < *key) {
            b = cur;
            func_0202a9ac(&b);
            ok = 1;
            if (b.p != list + 4) {
                if (!(*key < *(uint16_t *)(b.p + 0xc))) ok = 0;
            }
            if (ok) {
                if (*(uint32_t *)(cur.p + 4) != 0) {
                    *out = func_0205161c(list, b.p, 1, 0, key);
                } else {
                    *out = func_0205161c(list, cur.p, 0, 0, key);
                }
                return;
            }
            goto fb;
        }
        *out = (uint32_t)cur.p;
        return;
    }
fb:
    func_02051708(tmp, list, key);
    *out = tmp[0];
}
