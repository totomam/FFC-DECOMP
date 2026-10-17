/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/call_chain_add_x.c, externs renamed. */
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


/* 021B86AC (size 0x24) — p=A(f_BC,f_C0); n=B(p); n+=x; C(p,n) */
extern void* func_ov002_02198d08(u32, u32);
extern u32 func_ov002_0219c6ac(void*);
extern void func_ov002_0219c5d8(void*, u32);
void func_ov002_021b86ac(void* self, u32 x)
{
    void* p;
    u32 n;

    p = func_ov002_02198d08(*(u32*)((u8*)self + 0xBC), *(u32*)((u8*)self + 0xC0));
    n = func_ov002_0219c6ac(p);
    n += x;
    func_ov002_0219c5d8(p, n);
}
