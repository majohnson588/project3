#include <stdio.h>
#include <stdlib.h>

long long Fib(int N)
{
	if (N < 3)
	{
		return 1;
	}

    return Fib(N - 1) + Fib(N - 2);
}

void Func(int N)
{
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			++count;
		}
	}

	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}

	int M = 10;
	while (M--)
	{
		++count;
	}
}

void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}

	int M = 10;
	while (M--)
	{
		++count;
	}

	printf("%d\n", count);
}

void Func3(int N, int M)
{
	int count = 0;
	for (int k = 0; k < M; ++k)
	{
		++count;
	}

	for (int k = 0; k < N; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

const char* strchr(const char* str, int character)
{
	while (*str)
	{
		if (*str == character)
		{
			return str;
		}
		else
		{
			++str;
		}
		return NULL;
	}
}

void BubbleSort(int* a, int n)
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}

		if (exchange == 0)
			break;
	}
}

int BinarySearch(int* a, int n, int x)
{
	assert(a);

	int begin = 0;
	int end = n - 1;
	[begin,end]:begin和end是左闭右闭区间，因此有=号
	while (begin <= end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid - 1;
		else
			return mid;
	}

	return -1;
}
