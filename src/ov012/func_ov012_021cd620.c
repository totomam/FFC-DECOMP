#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0203bf7c(int);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bf90(int);
extern void *func_02056aec(void *object);
extern void *func_0203b708(int);

typedef struct Inner {
    uint32_t w0;
    uint8_t b4;
} Inner;

void func_ov012_021cd620(uint8_t *a)
{
    void *r4;
    void *tmp;
    uint8_t *b;
    void *n;

    ((Inner *)*(void **)(a + 0x108))->w0 = 1;
    r4 = func_0203b6fc();
    func_02056bc0(r4, func_0203bf7c(30));
    if (((Inner *)*(void **)(a + 0x108))->b4 != 0) {
        func_02056bc0(r4, func_0203bf90(30));
    }
    tmp = func_02056aec(a);
    n = func_0203b708(30);
    b = a + 0x14;
    func_02056bc0(b, n);
    func_02056bc0(b, r4);
    func_02056bc0(b, tmp);
}
