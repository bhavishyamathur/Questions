/*
   SPOJ Problem Set (Classical)
   11736. Prime Time
   Problem Code: PTIME
*/

#include <iostream>
#define max 10007
using namespace std;

//p[] contains prime numbers upto 10000
int p[max] = {0};
void sieves()
{int i;
for(i=2;i<=max;i++)
{
if (p[i]!=0) continue;
for (int j=2*i;j<=max;j+=i)
{
if (p[j]==0)
p[j]=i;
}
}
}
int main()
	{
		int num, n;
		sieves();1

		while(cin >> num)
			{
				int h[10001] = {0};

				for(int j = num; j >= 2; j--)
					{
						n = j;

						for(int i = 0; p[i] <= n; i++)
							{
								while(n % p[i] == 0 && n != 0)
									{
										h[p[i]]++;
										n = n / p[i];
									}
							}
					}

				int s = 0;

				for(int i = 2; i <= num; i++)
					if(h[i] != 0)
						{	
							s++;

							if(s > 1)
								cout << " * ";
							cout << i << "^" << h[i];

						}

				cout << endl;
			}

		return 0;

	}
