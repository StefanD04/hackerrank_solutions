int countResponseTimeRegressions(vector<int> responseTimes) {
    int count = 0;
    long long size = static_cast<int>(responseTimes.size());
    if(size<=1){
        return 0;
    
    }
    long long sum = responseTimes[0];
    for(int i = 1; i < size; i++)
    { 
        
        double average = static_cast<double>(sum)/i;
        if( responseTimes[i] > average){
            count ++;
            
        }
            
        sum = responseTimes[i]+sum;
        
        
        
    }
    return count;
}