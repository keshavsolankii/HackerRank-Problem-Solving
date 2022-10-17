void plusMinus(vector<int> arr) {
    int countpos=0, countneg=0, countzero=0;
    
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] < 0)
        countneg++;
        else if(arr[i] > 0)
        countpos++;
        else {
        countzero++;
        }
    }
    
    cout<<(float)countpos/arr.size()<<endl;
    cout<<(float)countneg/arr.size()<<endl;
    cout<<(float)countzero/arr.size()<<endl;

}
