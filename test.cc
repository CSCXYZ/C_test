#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int result = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}
	printf("%d", result);
	return 0;

}    //n!

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}  //1！+2！+3！...n!

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("find it,subscript:%d\n", mid);
			break;
		}  
	}
	if (left > right)
	{
		printf("cannot find\n");
	}
	return 0;
}  //find a number in the array(binary search)

#include<stdio.h>
#include<string.h>
#include<windows.h>
//#include<>
int main()
{
	char arr1[] = "welcom to alone!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}  //The characters move from both ends and converge towards the middle

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}   //Enter the password three times

#include<stdio.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return(a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
	return 0;
}  // 8,10,12,14,16

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		a = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
} // a b c依大到小排序

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
	return 0;
} //0~100 3的倍数

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r=m % n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
} //辗转相除法(欧几里得算法Euclidean algorithm)基于如下原理:
 //两个整数的最大公约数等于其中较小的数和两数的相除余数的最大公约数

int main()
{
	int year;
	int count=0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
} //1000年到2000年之间的闰年
int main()
{
	int year;
    int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
} //1000年到2000年之间的闰年

int main()
{
	int i;
	int count=0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
	} 
	printf("\ncount=%d\n", count);
	return 0;
} //质数 素数 PrimeNumber(Trial Division)
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}//质数 素数 PrimeNumber(Trial Division),若为素数一定含可除数小于等于原数开平方，若为素数一定非偶数

#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
    }
	printf("count=%d\n", count);
	return 0;
}//编写程序数一下1到100的所有整数中出现多少个数字9

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}//1/1-1/2+1/3-1/4+1/5......+1/99-1/100

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}//求10个整数中最大值

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}//乘法口诀表打印（对齐）"%2d右对齐，%-2d左对齐，2d打印两位"

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void menu()
{
	printf("********************\n");
	printf("*** 1.play 0.exit***\n");
	printf("********************\n");
}
void game()
{
	int ret = rand()%100+1;//生成随机数(取模100的余数为0~99，加1为1~100) 
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//拿时间戳设置生成起点
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}//循环猜数字游戏

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	//shutdown -s -t 60
	//system() 执行系统命令
	again:
	printf("电脑将在1分钟内关机，如果输入：取消，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "取消") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}//用goto again 执行循环
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	//shutdown -s -t 60
	//system() 执行系统命令
	while (1)
	{
		printf("电脑将在1分钟内关机，如果输入：取消，就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "取消") == 0)//比较两个字符串-strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}//用while（1）执行循环

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max= get_max(a, b);
	printf("%d\n", max);
	max = get_max(100, 300);
	printf("%d\n", max);
	return 0;
}//自定义函数，比大小

void Swap(int* pa, int* pb)//形参实例化之后其实相当于实参的一份临时拷贝
//void声明函数返回值为0（没有返回值）
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}//交换相应地址里的内容
int main()
{
int a = 10;
int b = 20;

printf("a=%d b=%d\n", a, b);
Swap(&a, &b);
printf("a=%d b=%d\n", a, b);
	return 0;
}//建立函数，交换数据 
