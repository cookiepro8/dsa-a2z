class solution
{
public:
    int bianrySearch(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (target == nums[mid]) return mid;
            
            if(target > nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }

    //recursion method
    int bianrySearch(vector<int>& nums, int low, int high, int target){
            int (low>high) return -1 //base case

            int mid = (low+high)/2;

            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) 
                return bianrySearch(nums, mid+1, high, target); //search in right half
            //otherwise search in left half
            return bianrySearch(nums, low, mid-1, target);
    }

    //public func to execute the func
    bianrySearch(vector<int>& nums, int low, int high, int target)
};

