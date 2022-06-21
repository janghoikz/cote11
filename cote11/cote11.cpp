#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    vector<long long> num;
    //백터에다 한자리씩 넣기
    while (n != 0) 
    {
        num.push_back(n % 10);
        n /= 10;
    }
    // 백터 오름차순 정렬
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++)
    {
        if (i == 0)
        {
            answer = num[i];
        }
        else
        {
            int a = 0;
            a = pow(10, i);
            answer = answer + (num[i] * a);
        }
    }

    cout << answer << endl;
    return answer;
}

int main()
{
    long long ab = 157;
    solution(ab);

}

