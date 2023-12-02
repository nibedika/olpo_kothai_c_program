#include <stdio.h>

int main() {
    int max=0, n, x;

    /* আমরা যতগুলো সংখ্যা থেকে বড় সংখ্যাটি
            বার করতে চাই সেই সংখ্যাটি ইনপুট নিবো  */
	printf("Enter number : ");
	scanf("%d",&n);

    // goto স্টেটমেন্ট এর লেভেল নেওয়া
	repeat:

	if(n>0)
    {
        // সংখ্যা ইনপুট নেওয়া
        scanf("%d", &x);

        /* আমরা max এর প্রাথমিক মান 0 নেওয়ায় আমাদের
                        ইনপুট নেওয়া সংখ্যাটি প্রথম বার ০ এর সাথে তুলনা
                        করে দেখবে বড় কিনা আর বড় হলে max এর পরিবর্তিত
                        হয়ে আমাদের ইনপুট নেওয়া মান হয়ে যাবে  */
        if(x>max)
        {
            max = x;
        }

        // একটি সংখ্যা ইনপুট নেওয়া হয়ে যাওয়ায় এর মান কমিয়ে দেওয়া
        n--;

        /* প্রথম ইনপুট নেওয়া সংখ্যার সাথে max এর মান এর তুলনা
                        শেষ হলে পরবর্তী সংখ্যা ইনপুট নেওয়া  এবং এভাবে পরপর
                        ইনপুট নেওয়া সকল সংখ্যার জন্য একই কাজ হবে repeat
                        লেভেল এ ফিরে যেয়ে যতক্ষণ না পর্যন্ত সংখ্যা বাকি থেকে যায়  */
        goto repeat;
    }

    // সর্বশেষ যেই মানটি max এর মান হিসেবে সেট হয়েছে তা প্রিন্ট করা
	printf("\nMax Number = %d", max);
	return 0;
}
