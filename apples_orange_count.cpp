void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple_count=0, orange_count=0;
    int app, orag;
    
    for(int i=0; i<apples.size(); i++)
    {
        app = a+apples[i];
        if(app >= s && app <= t)
        apple_count++;
    }
    for(int i=0; i<oranges.size(); i++)
    {
        orag = b+oranges[i];
        if(orag >= s && orag <= t)
        orange_count++;
    }
    cout<<apple_count<<endl;
    cout<<orange_count;

}
