#include<stdio.h>

int main()
{
    // ওয়ান ডাইমেনশনাল অ্যারে ইনিশিয়ালাইজেশন
    int num[10] = {25, 4, 7, 125}, i;

    // প্রিন্টিং অ্যারে এলিমেন্টস/ভ্যালুজ
    for(i=0; i<4; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}

