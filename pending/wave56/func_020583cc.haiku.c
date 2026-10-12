#include "ffc/types.h"

extern void func_0208763c(void *lock);
extern void func_02058194(void *destination, const void *source);
extern void func_02087678(void *lock);
extern void *func_02057df8(void *owner, uint32_t size, uint32_t key, uint32_t mult, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_02058228(void *node, uint32_t key, uint32_t zero, int32_t neg);

typedef struct {
    uint32_t *node;
    uint32_t *lock;
    uint8_t flag;
} Loc;

uint32_t *func_020583cc(uint32_t *this, uint32_t size, uint32_t key, uint32_t b)
{
    Loc loc;
    uint32_t *n;

    loc.lock = &this[8];
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c(loc.lock);
    }
    if (key != 0) {
        func_02058194(&loc, this);
        n = loc.node;
        if (n != 0) {
            do {
                if (n[5] == key) {
                    n[8]++;
                    if (loc.flag) {
                        func_02087678(loc.lock);
                    }
                    return n;
                }
                n = (uint32_t *)n[0];
                loc.node = n;
            } while (n != 0);
        }
    }
    n = (uint32_t *)func_02057df8(this, size * this[18], b, this[18], 0, 0, 0);
    n[4] = (uint32_t)this;
    n[6] = func_0209a978(n[1] - this[1], this[18]);
    n[5] = key;
    n[8] = 1;
    n[7] = this[18];
    if (key != 0) {
        func_02058228(n, key, 0, -1);
    }
    if (loc.flag) {
        func_02087678(loc.lock);
    }
    return n;
}
