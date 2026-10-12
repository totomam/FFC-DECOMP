#include "ffc/types.h"

typedef struct { uint8_t *cur; uint16_t *key; } Pair;

extern void func_02051768(void *cursor);
extern uint32_t func_0205161c(void *list, void *node, int a, int b, uint16_t *key);
extern void func_0202a9ac(void *cursor);
extern void func_02051708(uint32_t *out, void *list, uint16_t *key);

uint32_t func_020514e8(uint32_t *out, uint8_t *list, Pair p)
{
    uint8_t *cur = p.cur;
    uint16_t *key = p.key;
    uint8_t *local;
    uint8_t *local2;
    uint32_t tmp;
    uint32_t r;
    int ok;
    int flag;
    uint8_t *end = list + 4;

    ok = 1;
    if (cur != end) {
        if (!(*key < *(uint16_t *)(cur + 0xc))) {
            ok = 0;
        }
    }
    if (ok) {
        flag = 1;
        local = cur;
        if (cur != *(uint8_t **)(list + 8)) {
            func_02051768(&local);
            if (!(*(uint16_t *)(local + 0xc) < *key)) {
                flag = 0;
            }
        }
        if (flag) {
            if (*(uint32_t *)cur == 0) {
                r = func_0205161c(list, cur, 1, cur == *(uint8_t **)(list + 8), key);
            } else {
                r = func_0205161c(list, local, 0, 0, key);
            }
            *out = r;
            return r;
        }
        goto fallback;
    }

    if (*(uint16_t *)(cur + 0xc) >= *key) {
        *out = (uint32_t)cur;
        return (uint32_t)cur;
    }
    local2 = cur;
    func_0202a9ac(&local2);
    ok = 1;
    if (local2 != end) {
        if (!(*key < *(uint16_t *)(local2 + 0xc))) {
            ok = 0;
        }
    }
    if (!ok) {
        goto fallback;
    }
    if (*(uint32_t *)(cur + 4) != 0) {
        r = func_0205161c(list, local2, 1, 0, key);
    } else {
        r = func_0205161c(list, cur, 0, 0, key);
    }
    *out = r;
    return r;

fallback:
    func_02051708(&tmp, list, key);
    *out = tmp;
    return tmp;
}
