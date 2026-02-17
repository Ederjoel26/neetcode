class Solution {
public:

    string encode(vector<string>& strs) {
      string encoded = "";
      for (int i = 0; i < strs.size(); i++) {
        for (int j = 0; j < strs[i].size(); j++) {
          encoded += to_string((int)strs[i][j]);
          encoded += ',';
        }
        encoded += '|';
      }
      return encoded;
    }

    vector<string> decode(string s) {
      vector<string> strs;
      string aux = "";
      string word = "";

      for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',') {
          int code = stoi(aux);
          word.push_back((char)code);
          aux.clear();
        } else if (s[i] == '|') {
          strs.push_back(word);
          word.clear();
          aux.clear();
        } else {
          aux += s[i];
        }
      }

      return strs;
    }
};

class Solution {
public:
    string encode(vector<string>& strs) {
        string res;
        for (const string& s : strs) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }
        return res;
    }
};
