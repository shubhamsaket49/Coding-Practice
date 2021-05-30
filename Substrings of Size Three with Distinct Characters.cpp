// 

int N = s.size();
        int answer = 0;
     unordered_map<char, int> m;
    for (int i = 0; i < 3; i++) {
        m[s[i]]++;
    }
    if (m.size() == 3)
        answer++;
    for (int i = 3; i < N; i++) {
        m[s[i]]++;
        m[s[i - 3]]--;
        if (m[s[i - 3]] == 0) {
            m.erase(s[i - 3]);
        }
        if (m.size() == 3) {
            answer++;
        }
    }
    return answer;
