#include <bits/stdc++.h>
using namespace std;
int smallest_prime[100000000];

//here primes are stores in a vector and the vector is returned
//Disclaimer:
//First of all the create_sieve function is to be called 
//And when calling the prime_factor the return value should be stored in a vector 
//complexity of n test case: O(nlogn*n*log(log(n))
//complexity of each test case:O(log(n)*n*log(logn))
//n*log(log(n) is the complexity of creating the sieve
//log(n) is the complexity of prime factorization of each test case
void create_sieve(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (smallest_prime[i] == 0)
        {
            smallest_prime[i] = i;
            for (int j = i * i; j <= N; j += i)
            {
                if (smallest_prime[j] == 0)
                {
                    smallest_prime[j] = i;
                }
            }
        }
    }
}

vector<int> prime_factor(int x)
{
    vector<int> arr;
    while (x != 1)
    {
        arr.push_back(smallest_prime[x]);
        x = x / smallest_prime[x];
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    create_sieve(n);
    vector<int> arr = prime_factor(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
