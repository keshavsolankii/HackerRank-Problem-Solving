int diagonalDifference(vector<vector<int>> arr) {
    int rsum=0, lsum=0;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            if(i == j) // Left diagonal elements
            lsum+=arr[i][j];
            
            if(i+j == arr.size()-1) // Right diagonal elements
            rsum+=arr[i][j];
        }
    }
    return (abs(lsum - rsum));
}
