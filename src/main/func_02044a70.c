#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *data_0213e098;
extern Pair data_020afb28;

extern void *func_02055054(void *p);
extern void func_0209a978(int a, void *b);
extern void func_020212a4(void);
extern void *func_0203bfe0(int x);
extern void *func_0203bfcc(int x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_02044a70(uint8_t *p) {
    void *t = func_02055054(data_0213e098);
    func_0209a978(0x1e, t);
    func_020212a4();
    void *r7 = func_0203bfe0(0x1e);
    void *r4 = func_0203bfcc(0x1e);
    void *r6 = func_0203b6fc();
    func_02056bc0(r6, r4);
    func_02056bc0(r6, r7);
    func_02056bc0(p + 0x14, r6);
    *(Pair *)(p + 0x80) = data_020afb28;
}
