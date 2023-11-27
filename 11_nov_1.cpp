bool isAnagram(string s, string t) {
        int flag = 0;
        // applying the concept of bucket sort 
        vector <int> alpha (26,0);
        // adding values in bucket
        for (int i = 0 ; i<s.size() ; i++ ) {
            int char_val = s[i]-97;
            alpha[char_val]++;
        }
        // now checking values
        for (int i=0 ; i<t.size() ; i++ ) {
            int char_val = t[i]-97;
            alpha[char_val]--;
        }
        // now checking if all values of alpha vector is 0
        for (int i =0 ; i<alpha.size() ; i++) {
            if (alpha[i]!=0) {
                flag = 1;
                break; 
            }
        }
        if (flag) {
            return false;
        }
        else {
            return true;
        }
}
