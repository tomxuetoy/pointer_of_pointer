#include <stdio.h>

int main( void )
{
    int i = 1, *p, *p2, b[2];
    p = &i;
    p2 = &p;
    printf("%x...%p...%p\n", p, p, &p);
    printf("%x...%p\n", &p, &p);
    printf("%x...%p\n", &p2, &p2);
    printf("%x...%p...%p\n", b, b, &b);
}

/*
run:
    $ ./a.out 
    bfac17e4...0xbfac17e4...0xbfac17e8
    bfac17e8...0xbfac17e8
    bfac17ec...0xbfac17ec
    bfac17dc...0xbfac17dc...0xbfac17dc

&b = b = &b[0]
Check detailed explaination on link: http://blog.sina.com.cn/s/blog_62ea3be40100nsvq.html

*/
