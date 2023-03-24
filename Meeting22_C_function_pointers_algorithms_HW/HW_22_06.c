// Можем да измерим процесорното време, необходимо за изпълнението на част от кода, използвайки функцията clock() и константата CLOCKS_PER_SEC
// от time.h, по следния начин:
// clock_t begin = clock();
// // time-consuming thing to measure duration of (in cpu time)
// clock_t end = clock();
// double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
// Направете масив от указатели към функции, който е сортиран по бързина на изпълнение на функциите.

#include <time.h>
#include <stdio.h>

double measure_time(void (*func)())
{
    clock_t begin = clock();
    func();
    clock_t end = clock();
    return (double)(end - begin) / CLOCKS_PER_SEC;
}

void function1()
{
    // time-consuming code
}

void function2()
{
    // time-consuming code
}

void function3()
{
    // time-consuming code
}

int compare_speed(const void *a, const void *b)
{
    double time1 = measure_time(*(void (**)())a);
    double time2 = measure_time(*(void (**)())b);
    return (time1 < time2) ? -1 : (time1 > time2) ? 1
                                                  : 0;
}

int main()
{
    void (*functions[3])() = {function1, function2, function3};
    qsort(functions, 3, sizeof(void (*)()), compare_speed);

    return 0;
}

//=======================================================//

#include <time.h>


void fast_func(void)
{
    std::cout << "This is fast_func\n";
}

int slow_func(int i, float f)
{
    std::cout << "This is slow_func\n";
    return i + (int)f;
}

typedef void (*FUNC_PTR_V_V)(void);
typedef int (*FUNC_PTR_I_I_F)(int, float);

enum EFunctionType
{
    EFunctionType_v_v,
    EFunctionType_i_i_f
};

struct FunctionInfo
{
    void *funcPtr;
    enum EFunctionType type;
};

enum
{
    arr_sz = 2
};

struct FunctionInfo funcInfoArr[arr_sz] = {
    {.funcPtr = (void *)slow_func, .type = EFunctionType_i_i_f},
    {.funcPtr = (void *)fast_func, .type = EFunctionType_v_v},
};

int main(int argc, char *argv[])
{

    for (int i = 0; i != arr_sz; ++i)
    {
        switch (funcInfoArr[i].type)
        {
        case EFunctionType_v_v:
            ((FUNC_PTR_V_V)funcInfoArr[i].funcPtr)();
            break;
        case EFunctionType_i_i_f:
            ((FUNC_PTR_I_I_F)funcInfoArr[i].funcPtr)(0, .0f);
            break;
        default:
            break;
        }
    }

    return 0;
}