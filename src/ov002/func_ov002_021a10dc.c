/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ctor_members_x100_021A10DC.c, externs renamed. */
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

/* Matched 021A10DC size 0xDC (-O4).
   Ctor: base Init(self,0), two vtable member objects (+0x80 w/ MCtor at +0x9C,
   +0xC4 w/ MCtor at +0xD4), 0x100-region zero init, SCtor/SSet pair on +0x144,
   Alloc(0xC)+PCtor member stored at +0x180.
   Key: pointer-local bases (q/q2/r/q3/q4) + separate plain-store trees give the
   dual-base imm5-offset store pattern; plain per-offset stores rebuild addresses
   and overshoot by 32B. */
extern void func_02056c9c(void* self, u32 z);
extern void func_02087620(void* m);
extern void func_ov002_021c8530(void* m);
extern void func_ov002_021c8644(void* m, void* a);
extern void func_ov002_021c8630(void* m, void* b);
extern void* func_0205681c(u32 n);
extern void* func_ov002_021c86b0(void* p);
extern u32 data_020ae6d4;
extern u32 data_ov002_021d51f4;
extern u32 data_ov002_021d5210;
extern u32 data_020b0688;

void* func_ov002_021a10dc(void* self, void* a1, void* a2)
{
    u8* s = (u8*)self;
    u8* q;
    u8* q2;
    u8* r;
    u8* q3;
    u8* q4;
    void* p;

    func_02056c9c(self, 0);
    q = s + 0x80;
    *(u32*)(s + 0x80) = (u32)&data_020ae6d4;
    q2 = q + 0x10;
    *(u32*)(q + 4) = 0;
    *(u32*)(q + 8) = 0;
    *(u32*)(q + 0xC) = 0;
    *(u32*)(q + 0x10) = 0;
    *(u32*)(q2 + 4) = 0;
    *(u32*)(q2 + 8) = 0;
    func_02087620(q + 0x1C);
    *(u32*)s = (u32)&data_ov002_021d51f4;
    *(u32*)(s + 0x80) = (u32)&data_ov002_021d5210;
    r = s + 0xB8;
    *(u32*)(s + 0xB8) = 0;
    q3 = s + 0xC4;
    *(u32*)(r + 4) = 0;
    *(u32*)(r + 8) = 0;
    *(u32*)(s + 0xC4) = (u32)&data_020b0688;
    *(u32*)(q3 + 4) = 0;
    *(u32*)(q3 + 8) = 0;
    *(u32*)(q3 + 0xC) = 0;
    func_02087620(q3 + 0x10);
    *(u32*)(s + 0x100) = 0;
    q4 = s + 0x11C;
    *(u32*)(s + 0x11C) = 0;
    *(u32*)(q4 + 4) = 0;
    *(u32*)(q4 + 8) = 0;
    *(u8*)(s + 0x140) = 0;
    func_ov002_021c8530(s + 0x144);
    *(u32*)(s + 0x180) = 0;
    *(u32*)(s + 0x184) = 0;
    *(u32*)(s + 0x188) = 0;
    func_ov002_021c8644(s + 0x144, a1);
    func_ov002_021c8630(s + 0x144, a2);
    p = func_0205681c(0xC);
    if (p != 0) {
        p = func_ov002_021c86b0(p);
    }
    *(u32*)(s + 0x180) = (u32)p;
    return self;
}
