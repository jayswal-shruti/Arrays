class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(int i =0; i<nums.size(); i++){
            
            if(mp.find(target-nums[i]) != mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
        
        //Hashing
        
        
        
        //Two Pointer
        /*
        vector<int> res,store;
        store = nums;
        
        sort(store.begin(),store.end());
        
        int left = 0, right = nums.size()-1;
        int n1,n2;
        
        while(left < right){
            if(store[left]+store[right] == target){
                n1 = store[left];
                n2 = store[right];
                break;
            }
            
            else if(store[left]+store[right ]> target)
                right--;
                
            else
                left++;
                
            }
            
            for(int i =0; i<nums.size(); i++){
                if(nums[i] == n1)
                    res.emplace_back(i);
                
                else if(nums[i] == n2)
                    res.emplace_back(i);
            }
            return res;
        }
    */
        
        
        //Brute Force
        /*vector<int> res;
        for(int i =0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    res.emplace_back(i);
                    res.emplace_back(j);
                    break;
                }
            }
            if(res.size() == 2)
                break;
        }
        return res;
        
    }*/
};
