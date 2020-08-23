using namespace std;
#include <iostream>
int prime(int num)
{
    int i, flag=0;
    for (i = 2; i <= num / 2; ++i) {

        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0&&num!=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int parindom(int num)
{
    int n, r, sum = 0, temp;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = (sum * 10) + r;
        num /= 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    cin >> num;
    while (1)
    {
        if (prime(num) == 1 && parindom(num) == 1)
        {
            cout << "Prime palindom is="<< num;
            break;

        }
        else
            num++;

   }
    


    return 0;
}