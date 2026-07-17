struct SegmentTree{
    int lenTree;
    vector<int>tree;

    SegmentTree(int len){
        lenTree=len;
        tree.resize(lenTree,-1);
    }   

    void print(){
        for(auto it : tree){
            cout<<it<<" ";
        }
        cout<<"\n";
    } 

    bool isPeakNode(vector<int>& arr, int ind){
        int n=arr.size();
        if(ind==0 || ind==n-1)  return 0;
        if(arr[ind]>arr[ind+1] && arr[ind]>arr[ind-1])  return 1;
        return 0;
    }

    void build(vector<int> &arr,int treeIndex,int left ,int right){
        if(right==left){
            tree[treeIndex]=isPeakNode(arr,left) ? 1 : 0;
            return ;
        }
        int mid=(left+right)/2;
        build(arr,treeIndex*2,left,mid);
        build(arr,treeIndex*2 +1,mid+1,right);
        tree[treeIndex]=tree[treeIndex*2]+tree[treeIndex*2+1];

    }


    void update(vector<int> &arr,int left ,int right ,int index ,int val ,int treeIndex){
        if(left==right){
            tree[treeIndex]=isPeakNode(arr,left);
            return ;
        }
        int mid=(left+right)/2;
        if(index <= mid){
            update(arr,left,mid,index,val,treeIndex*2);
        } else {
            update(arr,mid+1,right,index,val,treeIndex*2+1);
        }
        tree[treeIndex]=tree[treeIndex*2]+tree[treeIndex*2+1];
    } 

    int query(int left , int right , int query_start ,int query_end , int treeIndex){
        if(query_start > query_end){
            return 0;
        }
        if(left==query_start && right==query_end){
            return tree[treeIndex];
        }
        int mid=(left+right)/2;
        return query(left,mid,query_start,min(mid,query_end),treeIndex*2) +query(mid+1,right,max(query_start,mid+1),query_end,treeIndex*2+1); 
    }
};



class Solution {
public:
    vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        SegmentTree segTree(4*n);
        segTree.build(nums,1,0,n-1);
        // segTree.print();
        vector<int> ans;
        for(auto query : queries){
            int type=query[0];
            int first=query[1];
            int second=query[2];

            if(type==1){
               int queryResult= queryResult=segTree.query(0,n-1,first+1,second-1,1);
                
                ans.push_back(queryResult);
            }
            else{
                nums[first]=second;
                segTree.update(nums,0,n-1,first,second,1);
                if(first-1 >= 0){
                    segTree.update(nums,0,n-1,first-1,nums[first-1],1);
                }
                if( first +1 < n ) {
                    segTree.update(nums,0,n-1,first+1,nums[first+1],1);
                }
            }
        }
        return ans;
    }
};