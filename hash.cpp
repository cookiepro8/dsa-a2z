// Find the number of times a number appears

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int appear(vector<int> &a, int n)
{
   int hash[] = {0};
   for(auto it: a){
    hash[a[it]] += 1;
   }

   int q;
   cin >> q;
   while(q--){
    int number;
    cin >> number;
    
    cout << hash[number] << endl;
   }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}