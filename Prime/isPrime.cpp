#include<bits/stdc++.h>
using namespace std;
bool a[100000000];
//No optimization
// void create_sieve(int N)
// {
    
//     for(int i=2;i<=N;i++)
//     {
//         a[i]=true;
//     }
//     for(int i=2;i<N;i++)
//     {
//         if(a[i]==true)
//         {
//             for(int j=2*i;j<=N;j+=i)
//             {
//                 a[j]=false;
//             }
//         }
//     }
// }
//1st optimization
// void create_sieve(int N)
// {
    
//     for(int i=2;i<=N;i++)
//     {
//         a[i]=true;
//     }
//     for(int i=2;i<=N;i++)
//     {
//         if(a[i]==true)
//         {
//             //here instead of starting from 2*i we start from i*i
//             //because all the numbers before i*i will be already marked by the numbers less than i
//             for(int j=i*i;j<=N;j+=i)
//             {
//                 a[j]=false;
//             }
//         }
//     }
// }

//most optimized
//first it would create an array of size N+1 that would hold all the numbers from 0 to N with prime numbers marked as true and non prime numbers marked as false.
// we now only need to check whether a specific index contains true or false to check whether it is prime or not
void create_sieve(int N)
{
    
    for(int i=2;i<=N;i++)
    {
        a[i]=true;
    }
    for(int i=2;i*i<=N;i++)
    {
        if(a[i]==true)
        {
           
            for(int j=i*i;j<=N;j+=i)
            {
                a[j]=false;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    create_sieve(n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]==true)
        {
            cout<<i<<" ";
        }
    }
}