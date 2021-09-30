class Solution {
    public int maxProfit(int[] p) {
        
        int n=p.length;
        int r[]=new int[n];
        
        int max=p[n-1];
        r[n-1]=max;
        for(int i=n-2;i>=0;i--)
        {
            if(p[i]>max)
            {
                max=p[i];
            }
            r[i]=max;
        }
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(r[i]-p[i]>sum)
            {
                sum=r[i]-p[i];
            }
        }
        
        return sum;
    }
}
