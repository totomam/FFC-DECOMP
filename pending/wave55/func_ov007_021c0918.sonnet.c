#include "ffc/types.h"

extern void func_ov000_02167b80(void *ctx, void *a, void *b);
extern void func_ov000_02167c24(void *ctx, void *a, void *b, uint32_t c);
extern void func_ov000_02167d20(void *ctx, void *a, void *b, int32_t c);
extern void func_ov000_02167d70(void *ctx, void *a, void *b, int32_t c, int32_t d);
extern void func_ov000_02167dbc(void *ctx, void *a, void *b, int32_t c);
extern void func_ov000_02167c88(void *ctx, void *a, void *b, int32_t c);
extern void func_ov000_02167e88(void *ctx, void *a, void *b, int32_t c);
extern void func_ov000_02167e14(void *ctx, void *a, void *b, int32_t c, int32_t d);
extern void func_ov000_02167bcc(void *ctx, void *a, void *b);

extern char data_ov007_021c9238[];
extern char data_ov007_021c923c[];
extern char data_ov007_021c9244[];
extern char data_ov007_021c9250[];
extern char data_ov007_021c9258[];
extern char data_ov007_021c9260[];
extern char data_ov007_021c926c[];
extern char data_ov007_021c9278[];
extern char data_ov007_021c9284[];
extern char data_ov007_021c9290[];
extern char data_ov007_021c929c[];
extern char data_ov007_021c92b0[];
extern char data_ov007_021c92c4[];
extern char data_ov007_021c92d4[];
extern char data_ov007_021c92e8[];

typedef struct {
    int32_t pad[6];
    void *ctx;
} Obj;

typedef struct {
    uint32_t id;
    int32_t type;
    union {
        int32_t a;
        uint8_t ua;
        int16_t sa;
    } u;
    int32_t b;
} Ent;

void func_ov007_021c0918(Obj *p, Ent *arr, int32_t count)
{
    int32_t i;

    func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c923c);
    for (i = 0; i < count; i++) {


        func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c9244);
        func_ov000_02167c24(p->ctx, data_ov007_021c9238, data_ov007_021c9250, arr[i].id);
        func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c9258);

        if (arr[i].type == 0) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c9260);
            func_ov000_02167d20(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.ua);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c9260);
        } else if (arr[i].type == 1) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c926c);
            func_ov000_02167d20(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.sa);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c926c);
        } else if (arr[i].type == 2) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c9278);
            func_ov000_02167d20(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c9278);
        } else if (arr[i].type == 9) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c9284);
            func_ov000_02167d70(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a, arr[i].b);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c9284);
        } else if (arr[i].type == 3) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c9290);
            func_ov000_02167dbc(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c9290);
        } else if (arr[i].type == 4) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c929c);
            func_ov000_02167c24(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c929c);
        } else if (arr[i].type == 5) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c92b0);
            func_ov000_02167c88(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c92b0);
        } else if (arr[i].type == 6) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c92c4);
            func_ov000_02167d20(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a != 0);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c92c4);
        } else if (arr[i].type == 7) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c92d4);
            func_ov000_02167e88(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c92d4);
        } else if (arr[i].type == 8) {
            func_ov000_02167b80(p->ctx, data_ov007_021c9238, data_ov007_021c92e8);
            func_ov000_02167e14(p->ctx, data_ov007_021c9238, data_ov007_021c9258, arr[i].u.a, arr[i].b);
            func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c92e8);
        }

        func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c9258);
        func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c9244);
    }
    func_ov000_02167bcc(p->ctx, data_ov007_021c9238, data_ov007_021c923c);
}
