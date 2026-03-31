#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
        //using map TC: O(2N) SC: O(N)
        vector<int> FindUnion1(int arr1[], int arr2[], int n, int m){
            map<int, int> freq;
            vector<int> unionArr;
            for(int i = 0; i<n; i++){
                freq[arr1[i]]++;
            }
            for(int i = 0; i<m; i++){
                freq[arr2[i]]++;
            }

            for(auto& it: freq){
                unionArr.push_back(it.first);
            }
            return unionArr;
        }

        //using set -> sore all the unique elements
        vector<int> FindUnion2(int arr1[], int arr2[], int n, int m){
            set<int, int> st;
            
            for (int i = 0; i < n; i++)
            {
                st.insert(arr1[i]);
            }

            for (int j = 0;j < m; j++)
            {
                st.insert(arr2[j]);
            }
            //convert set to vector
            vector<int> unionArr1(st.begin(), st.end());
            return unionArr1;
        }

        //using Two-pointer aapraoch -> optimal
        vector<int> FindUnion3(int arr1[], int arr2[], int n, int m){
            vector<int> unionArr2;
            int i = 0, j = 0;

            while(i<n && j<m){
                if(arr1[i] < arr2[j]){
                    if(unionArr2.empty() || unionArr2.back() != arr1[i]){
                        unionArr2.push_back(arr1[i]);
                        i++;
                    }
                }
                else if(arr2[j] < arr1[i]){
                    if(unionArr2.empty() || unionArr2.back() != arr2[j]){
                        unionArr2.push_back(arr2[j]);
                        j++;
                    }
                }
                else{
                    //if same elements
                    if(unionArr2.empty() || unionArr2.back() != arr1[i])
                    unionArr2.push_back(arr1[i]);
                    i++, j++;
                }
            }
            //append remaining elements
            while(i<n){
                if(unionArr2.empty() || unionArr2.back() != arr1[i])
                unionArr2.push_back(arr1[i]);
                i++;
            }

            while(j<m){
                if(unionArr2.empty() || unionArr2.back() != arr2[j])
                unionArr2.push_back(arr2[j]);
                j++;
            }

            return unionArr2;
        }
};
int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    solution sol;
    vector<int> result = sol.FindUnion3(arr1, arr2, n, m);
    for(int val: result) cout << val << " ";
    return 0;
}