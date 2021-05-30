/*Since many of you failed to help Sulekh in calculating the price of racket. So he failed to participate in tournament, and hence is very angry :rage:. His current anger level is A and each day his anger level increases by 1 i.e, on x th day his anger level will be A + x - 1 . He also has an Anger limit of L, exceeding which his brain would explode :exploding_head:(Not that i have any brain in the first place, lol :laughing:). So if you dont want that to happen, figure out how many values of A on current day will lead to his limit L.
For. e.g Given L = 12, Output : 2
bcz there are two values of A that will eventually add upto 12. First is 3+4+5 and second is 12 so for A=3 and 12 the anger level will reach 12. So output 2.

Input:
Take L, the anger limit of Sulekh, as the only input.

Output:
Determine for how many values of A, anger level of sulekh will lead to his limit L.

More example,
For input L = 15 , output : 4
The possible values of A are: 1 (1+2+3+4+5=L), 4 (4+5+6=L), 7 (7+8=L) and 15(15=L).
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	int res=0;
	for (int i = 1; i <= l; i++)
  {
    int sum = 0;
    for (int j = i; j <= l; j++)
    {
      sum += j;
      if (sum == l)
        res++;
    }
  }
  cout << res << endl;
}

