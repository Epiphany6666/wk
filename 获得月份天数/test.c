#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_leap_year(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	return 0;
}

//·¨1£º
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d%d", &year, &month) != EOF)
//
//    {
//        if (month <= 7)
//        {
//            if (month % 2 == 0)
//            {
//                if (month == 2)
//                {
//                    if (is_year(year))
//                        printf("29\n");
//                    else
//                        printf("28\n");
//                }
//                else
//                {
//                    printf("30\n");
//                }
//            }
//            else
//            {
//                printf("31\n");
//            }
//        }
//        else
//        {
//            if (month % 2 == 0)
//            {
//                printf("31\n");
//            }
//            else
//            {
//                printf("30\n");
//            }
//        }
//    }
//
//    return 0;
//}


//·¨2£º
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (scanf("%d%d", &y, &m) == 2)
	{
		d = days[m];
		if (is_leap_year(y) && m == 2)
			d++;
		printf("%d\n", d);
	}
}