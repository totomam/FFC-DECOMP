#include "ffc/types.h"

extern uint32_t func_ov002_021ac8d8(const void *first, const void *second);
extern void func_02015e8c(void *dst, uint32_t src);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(void *ptr, uint32_t index);
extern void func_02052c04(void *ptr);
extern void *func_02053290(void *object);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t w0;
    void *ptr;
    uint32_t idx;
    uint8_t flag;
} Loc;

#define BLK(OFF)                                                   \
    {                                                              \
        Loc L;                                                     \
        Loc *p = &L;                                               \
        func_02015e8c(p, data_020b8e44);                          \
        void *m = func_02052d90(p->ptr, p->idx);                     \
        *out = *(uint32_t *)((uint8_t *)m + (OFF));                \
        if (p->ptr != 0) {                                          \
            if (p->flag != 0) {                                     \
                func_02052d3c(p->ptr, p->idx);                       \
            }                                                      \
            func_02052c04(p->ptr);                                  \
        }                                                          \
        func_02053290(p);                                         \
        return;                                                    \
    }

#define CNT \
    count = 0; \
    sub = *(uint8_t **)((uint8_t *)obj + 0x138); \
    if (sub[0x19] == 0xd) count++; \
    if (func_ov002_021aab40(arg) == 0xd) count++;

void func_ov002_021acb3c(uint32_t *out, void *obj, void *arg) {
    uint32_t r = func_ov002_021ac8d8(obj, arg);
    uint32_t count;
    uint8_t *sub;
    switch (r) {
    case 1:
        BLK(0x58)
    case 2:
        CNT
        switch (count) {
        case 0: BLK(0x48)
        case 1: BLK(0x44)
        case 2: BLK(0x40)
        }
        break;
    case 0:
        CNT
        switch (count) {
        case 0: BLK(0x4c)
        case 1: BLK(0x50)
        case 2: BLK(0x54)
        }
        break;
    }
    *out = 0;
}
