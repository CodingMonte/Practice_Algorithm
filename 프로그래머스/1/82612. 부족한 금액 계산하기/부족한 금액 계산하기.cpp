using namespace std;

long long solution(int price, int money, int count)
{
    return (long long)price * (long long)count*((long long)count + 1)/2 >= (long long)money ? (long long)price * (long long)count*((long long)count + 1)/2 - (long long)money: 0;
}