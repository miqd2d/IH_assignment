int migratoryBirds(vector<int> arr) {
    // Sort the array to group identical elements together
    sort(arr.begin(), arr.end());

    // Creating a vector that would store the occurrence count for each bird type (from 1 to 5)
    vector<int> occurrence(6, 0);

    // Iterate through the array to count occurrences of each bird type
    for (int i = 0; i < arr.size(); i++) {
        occurrence[arr[i]]++;
    }

    int maxOccurrences = 0;
    int mostCommonBird = 0;

    // Finding the most common bird type
    for (int i = 1; i <= 5; i++) {
        if (occurrence[i] > maxOccurrences) {
            maxOccurrences = occurrence[i];
            mostCommonBird = i;
        }
    }

    return mostCommonBird;
}