int Solution::maximumGap(const vector<int> &A){  
    int n = A.size();
    int diff;
    int LMin[n], RMax[n]; //Make 2 arrays 
    LMin[0] = A[0]; //LMin[i] stores min value from (A[0],A[1]...A[i])
    for (int i = 1; i < n; ++i)  
        LMin[i] = min(A[i], LMin[i - 1]);  
  
    RMax[n - 1] = A[n - 1]; //RMax[i] stores max value from (A[j],A[j+1]...A[n-1])
    for (int j = n - 2; j >= 0; --j)  
        RMax[j] = max(A[j], RMax[j + 1]);  
   
    int i = 0, j = 0;
    while (j < n && i < n){  //Traverse LMin[] and RMax[] from left to right
        if (LMin[i] <= RMax[j]){  //T
            diff = max(diff, j - i);  
            j = j + 1;  
        }  
        else
            i = i + 1;  
    }  
    return diff;  
}  