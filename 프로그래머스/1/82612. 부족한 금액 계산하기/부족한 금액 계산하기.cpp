using namespace std;

long long solution(int price, int money, int cnt)
{
    long long temp = (long long)(cnt * (cnt + 1) / 2) * price - money;

    return temp >= 0 ? temp : 0;
}