/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec20_fill_insert_grow_021c3058.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched 021C3058 size 0x100 (-O4,p). vector<Elem32>::fill-insert-at-end(n, x) with
   strong guarantee: zero temp vec {data,count,cap,f3=&v->cap,start}, CheckLen(v,
   count+n-cap), AllocStorage3(&t, nc, Al byte-struct by value — Al staged at w.a
   (sp+7, pointer-local shape) copied to w.a2 (sp+8, single 5-byte struct keeps both
   slots)), forward fill loop of n copies, backward move loop of old elems (srcE
   merged into dead param x for r5), 3-field swap (cap via pointer local for base-reg
   access), func_ov002_021c317c(&t). Elem copy = func_020095b8 x2 + u32 @0xC + s8 @0x1C. */

typedef struct { u8 b; } Al;
typedef struct { u32 data; u32 count; u32 cap; u32 f3; u32 start; } Tmp;
typedef struct { u32 data; u32 count; u32 cap; } Vec;

extern u32 func_ov002_021c2fd8(void* v, u32 need);
extern void func_ov002_021c31ac(Tmp* t, u32 n, Al al);
extern void func_020095b8(u8* d, u8* s);
extern void func_ov002_021c317c(Tmp* t);

void func_ov002_021c3058(Vec* v, u32 n, u8* x) {
    u32 z;
    struct { u8 pad[3]; Al a; Al a2; } w;
    Tmp t;
    u8* dst;
    u8* x10;
    u32 cnt;
    u8* src0;
    u32 nc;
    u32 c;
    u32* cp;
    Al* q;

    z = 0;
    t.f3 = (u32)((u8*)v + 8);
    t.data = z;
    t.count = z;
    t.cap = z;
    t.start = z;
    nc = func_ov002_021c2fd8(v, v->count + n - v->cap);
    q = &w.a;
    q->b = (u8)z;
    w.a2 = *q;
    func_ov002_021c31ac(&t, nc, w.a2);
    cnt = v->count;
    t.start = cnt;
    dst = (u8*)(t.data + cnt * 0x20 + t.count * 0x20);
    if (n != 0) {
        x10 = x + 0x10;
        do {
            if (dst != 0) {
                func_020095b8(dst, x);
                *(u32*)(dst + 0xC) = *(u32*)(x + 0xC);
                func_020095b8(dst + 0x10, x10);
                *(signed char*)(dst + 0x1C) = *(signed char*)(x + 0x1C);
            }
            t.count = t.count + 1;
            n--;
            dst += 0x20;
        } while (n != 0);
    }
    src0 = (u8*)v->data;
    x = src0 + v->count * 0x20;
    dst = (u8*)(t.data + t.start * 0x20);
    if (x > src0) {
        do {
            x -= 0x20;
            dst -= 0x20;
            if (dst != 0) {
                func_020095b8(dst, x);
                *(u32*)(dst + 0xC) = *(u32*)(x + 0xC);
                func_020095b8(dst + 0x10, x + 0x10);
                *(signed char*)(dst + 0x1C) = *(signed char*)(x + 0x1C);
            }
            t.start--;
            t.count = t.count + 1;
        } while (x > src0);
    }
    cp = &t.cap;
    c = v->cap; v->cap = *cp; *cp = c;
    c = v->data; v->data = t.data; t.data = c;
    c = v->count; v->count = t.count; t.count = c;
    func_ov002_021c317c(&t);
}
