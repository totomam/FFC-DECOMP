/* cflags:  */
/* From arcnid/ffc-decomp src/battle/makeobj_100fe_attach_members_021a43fc.c, externs renamed. */
/* Matched: 021A43FC size 0xC0 (192) at -O4,p */
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


extern s32 func_ov002_021a18bc(void* p);
extern void* func_ov002_021a1ac4(void* p);
extern void* func_0203b6fc(void);
extern void* func_0203bd04(u32 a, u32 b, u32 c, s32 d);
extern void func_02056bc0(void* a, void* b);
extern void* func_ov002_021a18c4(void* p, s32 i);
extern void* func_ov002_021ab244(void* e, u32 z, void* q);
extern void* func_02056aec(void* s);

void func_ov002_021a43fc(void* s)
{
    void* x;
    s32 i;
    void* arr[2];
    s32 n1;
    s32 n2;
    void* g;

    n1 = func_ov002_021a18bc(*(void**)((u8*)s + 0x80));
    n2 = func_ov002_021a18bc(func_ov002_021a1ac4(*(void**)((u8*)s + 0x80)));
    g = func_0203b6fc();
    x = func_0203bd04(0x100FE, 0, 0, n1 + n2);
    i = 0;
    func_02056bc0(g, x);
    arr[0] = *(void**)((u8*)s + 0x80);
    arr[1] = func_ov002_021a1ac4(arr[0]);
    do {
        s32 j;
        j = 0;
        if (func_ov002_021a18bc(arr[i]) > 0) {
            void* p;
            p = *(void* volatile*)&arr[i];
            do {
                void* e;
                u8* q;
                e = func_ov002_021a18c4(p, j);
                q = (u8*)x;
                if (q != 0) {
                    q = (u8*)x + 0x14;
                }
                func_02056bc0(g, func_ov002_021ab244(e, 0, q));
                j++;
            } while (j < func_ov002_021a18bc(p));
        }
        i++;
    } while (i < 2);
    func_02056bc0((u8*)s + 0x14, g);
    {
        void* c;
        c = func_02056aec(s);
        s = (u8*)s + 0x14;
        func_02056bc0(s, c);
    }
}
