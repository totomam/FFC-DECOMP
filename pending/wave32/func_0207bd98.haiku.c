#include "ffc/types.h"

extern void func_0207be0c(void);
extern void func_0207be70(void *a, void *b);
extern void func_0207bac8(void *p);
extern uint8_t data_02140750[];
extern uint32_t data_0213ecd0[];

typedef struct {
    uint8_t pad[0x118];
    int32_t flag : 1;
} S;

void func_0207bd98(void *p) {
    S *s = (S *)p;
    if (s->flag) {
        void (*fn)(void *);
        func_0207be0c();
        fn = *(void (**)(void *))((uint8_t *)p + 0x170);
        fn(p);
        func_0207be70(data_02140750, p);
        if (data_0213ecd0[1] != 0) {
            func_0207be70((void *)(data_0213ecd0[1] + 0x10e0), p);
        }
        func_0207bac8(p);
    }
}
