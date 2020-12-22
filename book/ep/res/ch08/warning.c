/*
gcc warning.c -Wall -Wextra
*/

#include <stdio.h>

#if 0
int misc1(idx)
{
    int mode;
    if (idx > 1)
    {
        mode = 1;
    }
    int set = mode;
    printf("bbb: %d\n", mode, idx, set);
    printf("bbb: %s %s %s\n", mode, idx, set);
    if (idx == 1)
    {
        return 0;
    }
    return 0;
}

int misc2()
{
    char buffer[100];
    sprintf(buffer, "");
    printf("aaa: %d\n");

    int mode = 0;
    short int* idx = 1;

    printf("bbb: %s %d\n", mode, idx);

    short int uWord = 0;
    sscanf("test: 250", "test: %d", &uWord);

    unsigned long long c = 12345678;
    printf("c: %d", c);

    int d = 0;
    unsigned int e = 1;
    if (d == e)
    {
    }

    float f = 2.0;
    int i = 1;
    if (f == i) {}
}
#endif

void foo(char *p)
{

}

void foo1()
{
    printf("foo1\n");
}

void bar1()
{
    printf("bar1\n");
}

void test1()
{
    unsigned char* p = "hello";
	foo(p);
}

void test2()
{
    int a, b, c, d;
    a = b = c = d = 1;
    int e = a && b || c ^ d;


    int reg = 1;

    reg = reg&(~(1<<4))|(1<<4);

    reg = (reg&(~(1<<4))) | (1<<4); // OK

    {
        a = 0;
        if (a)
            if (b)
                foo1();
        else
            bar1(); // 这个else实际是if (b)的分支，不是if (a)，因此，要用括号来表明其属于哪个分支
    }
}

void test3()
{
    enum foobar {LL_FOO, LL_BAR};

    enum foobar e = LL_FOO;
    switch (e)
    {
    case LL_FOO:
        break;

    // default:
    //     break;
    }

    char* p = 1;
    *p++;
    
    int a[2][2] = { 0, 1, 2, 3 };
    int b[2][2] = { { 0, 1 }, { 2, 3 } }; // OK
}

int g_var;

void test4()
{
    double g_var;
}


int test5()
{
    char c;
    if (c < 0xff)
        return 0;
    else
        return -1;
}

int main(void)
{
	
    //foo(1);
    test2();
    return 0;
}