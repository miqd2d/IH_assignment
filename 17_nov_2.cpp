vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer = 0;
    vector<vector<int>> seqList(n);
    vector<int> result;

    for (auto query : queries) {
        int queryType = query[0];
        int x = query[1];
        int y = query[2];
        int index = (x ^ lastAnswer) % n;

        if (queryType == 1) {
            seqList[index].push_back(y);
        } else if (queryType == 2) {
            int size = seqList[index].size();
            lastAnswer = seqList[index][y % size];
            result.push_back(lastAnswer);
        }
    }

    return result;
}