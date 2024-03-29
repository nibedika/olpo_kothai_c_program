#include <stdio.h>

int main() {
int max=0, n, x;

    /* আমরা যতগুলো সংখ্যা থেকে বড় সংখ্যাটি
            বার করতে চাই সেই সংখ্যাটি ইনপুট নিবো এবং n-এ রাখব */
	printf("Enter number : ");
	scanf("%d",&n);

    // goto স্ট্যাটমেন্টের লেবেল নেওয়া
	repeat:

    if(n>0)
    {
        // সংখ্যা ইনপুট নেওয়া
        scanf("%d", &x);

        /* আমরা max-এর প্রাথমিক মান 0 নেওয়ায় আমাদের
                        ইনপুট নেওয়া সংখ্যাটি প্রথম বার 0-এর সাথে তুলনা
                        করে দেখবে বড় কিনা আর বড় হলে max-এর মান পরিবর্তিত
                        হয়ে আমাদের ইনপুট নেওয়া মান হয়ে যাবে */
        if(x>max)
        {
            max = x;
        }

        // একটি সংখ্যা ইনপুট নেওয়া হয়ে যাওয়ায়-এর মান কমিয়ে দেওয়া
        n--;

        /* প্রথম ইনপুট নেওয়া সংখ্যার সাথে max-এর মানের তুলনা
                        শেষ হলে পরবর্তী সংখ্যা ইনপুট নেওয়া এবং এভাবে পরপর
                        ইনপুট নিয়ে সকল সংখ্যার ক্ষেত্রে একই কাজ করার জন্য
        goto ব্যবহার করে repeat কল (কোনো কিছুর ব্যবহারকে
                    কল বলে) করা হয়েছে যেন আবার উপর থেকে শুরু হয়। যতক্ষন
                    না সব সংখ্যা চেক করা শেষ হবে ততক্ষণ এটা চলবে */
        goto repeat;
    }

    // সর্বশেষ যেই মানটি max-এর মান হিসেবে সেট হয়েছে তা প্রিন্ট করা
	printf("\nMax Number = %d", max);
	return 0;
}
