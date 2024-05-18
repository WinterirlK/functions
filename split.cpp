vector<string> split(string tab, char separator) {
    vector<string> results;
    string temp;

    for (char c : tab) {
        if (c == separator) {
            if (!temp.empty()) {
                results.push_back(temp);
                temp.clear();
            }
        } else {
            temp.push_back(c);
        }
    }

    if (!temp.empty()) {
        results.push_back(temp);
    }

    return results;
}
