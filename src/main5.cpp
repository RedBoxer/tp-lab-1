#include "task4.h"
#include <stdio.h>

using namespace std;

int main()
{
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');

    cout << result[0] << '\n';
    cout << result[1] << '\n';
    cout << result[2] << '\n';
    cout << N << '\n';
    return 0;
}