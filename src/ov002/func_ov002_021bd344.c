/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_two_slots_bd344.c, externs renamed. */
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


/* 021BD344 (size 0x6a) — build container r=F(self), then alloc+init two 0x18
   sub-objects (clear low status byte, same vtable, +0x14 from self fields),
   register all three into r via Store. */
extern u32 data_ov002_021d697c[];
extern void* func_0203b6fc(void*);
extern void* func_02056b10(void*);
extern void* func_0205681c(u32);
extern void func_02056bc0(void*, void*);

void* func_ov002_021bd344(void* self) {
    void* r; void* g; void* p; void* q; u32 f1; u32 f2;
    r = func_0203b6fc(self);
    g = func_02056b10(*(void**)((u8*)self + 0xd4));
    p = func_0205681c(0x18);
    if (p) {
        f1 = *(u32*)((u8*)self + 0xb4);
        *(u32*)((u8*)p + 0xc) &= ~0xff;
        *(u32*)p = (u32)data_ov002_021d697c;
        *(u32*)((u8*)p + 0x14) = f1;
    }
    q = func_0205681c(0x18);
    if (q) {
        f2 = *(u32*)((u8*)self + 0x98);
        *(u32*)((u8*)q + 0xc) &= ~0xff;
        *(u32*)q = (u32)data_ov002_021d697c;
        *(u32*)((u8*)q + 0x14) = f2;
    }
    func_02056bc0(r, q);
    func_02056bc0(r, p);
    func_02056bc0(r, g);
    return r;
}
