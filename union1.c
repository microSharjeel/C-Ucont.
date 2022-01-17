#include <stdio.h>
/*struct test1 {
    int x;
    float y;
};
union test2 {
    int a;
    float b;
};
int main ()
{
    struct test1 t_1;
    t_1.x = 2;
    t_1.y=3.3;
    union test_2 t_2;
    t_2.a = 4;
    t_2.b = 5.3;
    return 0;
}*/

/*struct test1{
    union {
        int a;
        float b;
    };
};
int main ()
{
    struct test1 t_1;
    t_1.a = 3;
    printf("a = %d\n",t_1.a);
    t_1.b = 4.1;
    printf("b = %f\n",t_1.b);
    return 0;

}*/
struct test1{
    int x;
    float y;
};
union test2 {
    struct test1 t_1;
};
int main ()
{
    union test2 t_2;
    t_2.t_1.x=3;
    t_2.t_1.y=4;
    printf("x=%d\n",t_2.t_1.x);
    printf("y=%f\n",t_2.t_1.y);
    return 0;
}