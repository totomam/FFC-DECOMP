#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_ov001_02188480(void);
extern void func_ov001_02188cbc(void (*f)(void));
extern uint8_t data_ov001_02195764[];
extern uint8_t data_ov001_02195780[];

typedef struct {
    int32_t a[5];
    int32_t state;
    void *sub;
} G1;

typedef struct {
    int32_t a[16];
    int32_t v;
} S2;

uint32_t func_ov001_02188788(void) {
    G1 *g = (G1 *)data_ov001_02195764;
    if (g->state == 0) {
        return 0;
    }
    func_0208763c(data_ov001_02195780);
    if (g->state == 0) {
        func_02087678(data_ov001_02195780);
        return 0;
    }
    g->state = 2;
    func_02087678(data_ov001_02195780);
    if (((S2 *)g->sub)->v == 0) {
        func_ov001_02188480();
    } else {
        func_ov001_02188cbc(func_ov001_02188480);
    }
    return 1;
}
