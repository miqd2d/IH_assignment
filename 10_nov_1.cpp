int birthdayCakeCandles(vector<int> candles) {
    int max = candles[0];    // stores the max value in the vector
    int max_count= 0 ;    // stores the frequency of the maximum value
    
    // loop to find the maximum value
    for(int i = 0 ; i<candles.size() ; i++) {
        if (max<candles[i]) {
            max = candles[i];    
        }
    }
    
    // loop to find the frequency of max value
    for (int i = 0; i<candles.size() ; i++ ) {
        if (candles[i]==max) {
            max_count++;
        }
    }
    
    // returning the max count
    return max_count;
}