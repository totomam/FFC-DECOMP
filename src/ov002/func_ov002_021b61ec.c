/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_vtbl_suballoc_tick_021B61EC.c, externs renamed. */
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

/* 021B61EC (size 0xB8, -O4) — ctor-ish init: base init 0x2069210, installs vtable
   (literal 0x021D5FD0), stores stack args g/e/h at +0x94/+0x98/+0x9C, byte c at +0xA0,
   b at +0xA8; allocs 0xA4 sub-object, if non-null builds it via 0x21B5AB8 with
   (func_ov002_021b6530(b), func_ov002_021b6528(b), *(+0x98), flag=(+0x94==2), c, d, 0); stores at +0xA4; tick 0x203B6F0
   to +0xAC; registers tick and sub-object with self+0x48 via 0x2056BC0 twice.
   KEY: self+0x48 must be a LOCAL (u8* lst) computed AFTER q's load; q reloaded from
   +0xA4 (reload-after-call idiom). */

extern void func_02069210(void*);
extern void* func_0205681c(u32);                       /* 0x205681c */
extern u32 func_ov002_021b6530(void*);                        /* 0x21b6530 */
extern u32 func_ov002_021b6528(void*);                        /* 0x21b6528 */
extern void* func_ov002_021b5ab8(void*, u32, u32, u32, u32, u32, void*, u32);  /* 0x21b5ab8 */
extern u32 func_0203b6f0(void);                         /* 0x203b6f0 */
extern void func_02056bc0(void*, u32);                   /* 0x2056bc0 */
extern u32 data_ov002_021d5fd0;

void* func_ov002_021b61ec(u8* self, void* b, u8 c, void* d, u32 e, u32 g, u32 h) {
    void* p;
    u32 t;
    u32 q;
    u8* lst;
    func_02069210(self);
    *(u32*)self = (u32)&data_ov002_021d5fd0;
    *(u32*)(self + 0x94) = g;
    *(u32*)(self + 0x98) = e;
    *(u32*)(self + 0x9c) = h;
    *(u8*)(self + 0xa0) = c;
    *(u32*)(self + 0xa8) = (u32)b;
    p = func_0205681c(0xa4);
    if (p != 0) {
        u32 v1;
        u32 v2;
        u32 flag;
        v1 = func_ov002_021b6530(*(void**)(self + 0xa8));
        v2 = func_ov002_021b6528(*(void**)(self + 0xa8));
        if (*(u32*)(self + 0x94) == 2) {
            flag = 1;
        } else {
            flag = 0;
        }
        p = func_ov002_021b5ab8(p, v1, v2, *(u32*)(self + 0x98), flag, c, d, 0);
    }
    *(u32*)(self + 0xa4) = (u32)p;
    t = func_0203b6f0();
    *(u32*)(self + 0xac) = t;
    q = *(u32*)(self + 0xa4);
    lst = self + 0x48;
    func_02056bc0(lst, t);
    func_02056bc0(lst, q);
    return self;
}
