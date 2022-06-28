int solve(int r, int c, int target, vector<vector<int>>& matrix)
    {
            int cnt=0;
            for(int i=0;i<r;i++)
            {
                int l=0;
                int h=c-1;
                while(l<=h)
                {
                    int mid=l+(h-l)/2;
                    
                    if(matrix[i][mid]<=target)
                    l=mid+1;
                    else
                    h=mid-1;
                }
                cnt+=l;
            }
            return cnt;
    }
int Solution::findMedian(vector<vector<int> > &A) {
        int l=1;
        int h=1e9+5;
        int r=A.size();
        int c=A[0].size();
        int median=(r*c)/2;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(solve(r,c,mid,A)<=median)
            l=mid+1;
            else
            h=mid-1;
        }
        return l;
}
