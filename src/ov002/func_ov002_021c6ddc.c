/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/anim_setup_6ddc.c, externs renamed. */
/* 021C6DDC size 0x5C (92) -- per-index: F/G tmp, H(mask 0x0FFFFFFF), I, cond J(e,x,0,0). -O4 */
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

void func_0202f180(void* e, u32* out);
void func_02035c18(u32* p);
void func_0202eb28(void* e, void* p, int one, int mask);
void func_0202edc4(void* e, int one);
void func_0202ea94(void* e, u32 x, int a, int b);

void func_ov002_021c6ddc(u8* s, int i) {
    u32 tmp;
    u32 x;
    tmp = *(u32*)(s + 0x23c);
    func_0202f180(*(void**)(s + 0x88 + i * 4), &tmp);
    func_02035c18(&tmp);
    func_0202eb28(*(void**)(s + 0x88 + i * 4), s + 0x178 + i * 65, 1, 0x0FFFFFFF);
    func_0202edc4(*(void**)(s + 0x88 + i * 4), 1);
    x = *(u32*)(s + i * 4 + 0x240);
    if (x != 0) {
        func_0202ea94(*(void**)(s + 0x88 + i * 4), x, 0, 0);
    }
}
