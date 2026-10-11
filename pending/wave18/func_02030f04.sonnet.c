#include "ffc/types.h"

typedef struct { uint32_t flag:1; uint32_t rest:31; uint32_t len; uint8_t *ptr; } L;
typedef struct { uint8_t flag:1; uint8_t len:7; uint8_t data[1]; } S;
extern void func_02030f24(void *a, void *b, void *c, uint32_t d);

void func_02030f04(void *a, void *p, void *c) {
    uint8_t *s;
    uint32_t n;
    if (((L *)p)->flag == 0) {
        s = ((S *)p)->data;
        n = ((S *)p)->len;
    } else {
        s = ((L *)p)->ptr;
        n = ((L *)p)->len;
    }
    func_02030f24(a, s, c, n);
}
