#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter two number : ");
    scanf("%d%d%d",&x,&y,&z);

    // শুরুতে y-এর চেয়ে x বড় কিনা চেক করা
    if(x>y)
    {
        /* এরপর z-এর চেয়ে x বড় কিনা চেক করা
                        আর x যদি বাকি ২টি সংখ্যা y এবং z-এর চেয়ে
                        বড় হয়ে থাকে তার মানে x ই বড় সংখ্যা  */
        if(x>z)
        {
            printf("The maximum value x = %d",x);
        }

        /* এখানে x হলো y-এর চেয়ে বড় সংখ্যা
                        কিন্তু z-এর চেয়ে বড় না হলে z ই হলো বড় সংখ্যা  */
        else
        {
            printf("The maximum value z = %d",z);
        }
    }
    // এখানে x-এর চেয়ে y বড় কিনা চেক করা
    else if(y>x)
    {
        /* এরপর z-এর চেয়ে y বড় কিনা চেক করা
                        আর y যদি বাকি ২টি সংখ্যা x এবং z-এর চেয়ে
                        বড় হয়ে থাকে তার মানে y ই বড় সংখ্যা  */
        if(y>z)
        {
            printf("The maximum value y = %d",y);
        }

        /* এখানে y হলো x-এর চেয়ে বড় সংখ্যা
                        কিন্তু z-এর চেয়ে বড় না হলে z ই হলো বড় সংখ্যা  */
        else
        {
            printf("The maximum value z = %d",z);
        }
    }
    /* এখানে উপরের কোনো কন্ডিশন সত্য না হলে z কেই ডিফল্ট ভাবে
            বড় সংখ্যা হিসেবে প্রিন্ট করা হয়েছে স্ট্যাটমেন্টের ফ্লো বজায় রাখার জন্য
            কিন্তু এই অংশ বাদ দিলেও প্রোগ্রাম সঠিক ভাবেই রান করবে */
    else
    {
        printf("The maximum value z = %d",z);
    }
}
