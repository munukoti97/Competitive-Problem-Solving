class Solution {
    public int max=0;
    public void path(int[] d,int i,int j,int c,int c1)
    {
        if(i==j && c1==1)
        {
           if(max<c)
             max=c;
        }
        else
            {
              c++;
              path(d,d[i],j,c,1);  
            }
    }
    
    
    public int solution(int[] A) {
        // write your code in Java SE 8
      for(int i=0;i<A.length;i++)
    if( max<(A.length-max))
        path(A,i,i,0,0);
    else
        return max;
          return max;
    }
}
