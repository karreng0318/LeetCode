class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int i,j,k;
        k = 0;
        i = 0;
        j = 0;
        int total;
        double a,b,s1,s2,half,picked;
        s1 = nums1.size();
        s2 = nums2.size();
        total = s1+s2;
        half = total/2 + 1;
        
        while(k < half)
        {
            if(i < s1 && j < s2)
            {
                if ( nums1[i] <nums2[j])
                {
                    picked = nums1[i++];
                }
                else
                {
                    picked = nums2[j++];
                }
            }
            else if(i < s1)
            {
                picked = nums1[i++];
            }
            else if(j < s2)
            {
                picked = nums2[j++];
            }
        
            if (k%2 == 0)
            {
                a = picked;
            }
            else
            {
                b = picked;
            }
            k++;
        }
        k--;
        
        if(total%2 == 0)
        {
          return double((a+b)/2);
        }
        else if(k%2 == 0)
        {
            return double(a);
        }

        else{
            return double(b);}
        
        
    }
};