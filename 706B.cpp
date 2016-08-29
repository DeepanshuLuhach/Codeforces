/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359



/* Function to get index of ceiling of x in arr[low..high]*/
ll ceilSearch(ll arr[], ll low, ll high, ll x)
{
  ll mid;

  /* If x is smaller than or equal to the first element,
    then return the first element */
  if(x <= arr[low])
    return low;

  /* If x is greater than the last element, then return -1 */
  if(x > arr[high])
    return high;

  /* get the index of middle element of arr[low..high]*/
  mid = (low + high)/2;  /* low + (high - low)/2 */

  /* If x is same as middle element, then return mid */
  if(arr[mid] == x)
    {
        for(ll i=mid+1;i<high;i++)
        {
            if(arr[i]>arr[mid])
                return mid;
            mid++;
        }
    }
  /* If x is greater than arr[mid], then either arr[mid + 1]
    is ceiling of x or ceiling lies in arr[mid+1...high] */
  else if(arr[mid] < x)
  {
    if(mid + 1 <= high && x <= arr[mid+1])
      return mid + 1;
    else
      return ceilSearch(arr, mid+1, high, x);
  }

  /* If x is smaller than arr[mid], then either arr[mid]
     is ceiling of x or ceiling lies in arr[mid-1...high] */
  else
  {
    if(mid - 1 >= low && x > arr[mid-1])
      return mid;
    else
      return ceilSearch(arr, low, mid - 1, x);
  }
}

int main()
{
    ll n;
    cin>>n;
    ll a[n]={0};
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll x;
        cin>>x;
        ll p=ceilSearch(a,0,n-1,x);
        if(a[p]==x)
            cout<<++p<<endl;
        else
            cout<<p<<endl;
    }
}
