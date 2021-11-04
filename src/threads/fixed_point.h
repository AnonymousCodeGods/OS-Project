//fixed_point.h
/*定义fixed_t这个量*/
typedef int64_t fixed_t;
/*移动位数（就不用一直写了）*/
#define SHIFT_COUNT 14
/*转换成浮点数*/
#define CONST(A) ((fixed_t)(A << SHIFT_COUNT))
/*浮点数相加*/
#define ADD(A,B) (A + B)
/*浮点数加整数*/
#define ADD_MIX(A,B) (A + (B << SHIFT_COUNT))
/*浮点数相减*/
#define SUB(A,B) (A - B)
/*浮点数减去整数*/
#define SUB_MIX(A,B) (A - (B << SHIFT_COUNT))
/*浮点数A乘整数B*/
#define MULT_MIX(A,B) (A * B)
/*浮点数A除以整数B*/
#define DIV_MIX(A,B) (A / B)
/*浮点数相乘*/
#define MULT(A,B) ((fixed_t)(((int64_t) A) * B >> SHIFT_COUNT))
/*浮点数相除*/
#define DIV(A,B) ((fixed_t)((((int64_t) A) << SHIFT_COUNT) / B))
/*取整数部分*/
#define INT_PART(A) (A >> SHIFT_COUNT)
/*取整*/
#define ROUND(A) (A >= 0 ? ((A + (1 << (SHIFT_COUNT - 1))) >> SHIFT_COUNT) \
        : ((A - (1 << (SHIFT_COUNT - 1))) >> SHIFT_COUNT))
