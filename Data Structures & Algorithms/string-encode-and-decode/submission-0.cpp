class Solution {
public:

    string encode(vector<string>& strs) {
        std::string output;
        auto n = strs.size();
        for (int i=0; i<n; i++) {
            int length = strs[i].length();
            output +=  std::to_string(length) + "#" + strs[i];
        }
        return output;        
    }

    vector<string> decode(string s) {
        std::vector<string> decode;
        auto n = s.size();
        size_t i {0};
        while (i < n) {
            size_t j = s.find('#',i);
            int length = std::stoi(s.substr(i, j-i));
            std::string splice = s.substr(j+1,length);
            decode.push_back(splice);
            i = j+1+length;
        }
        return decode;

    }
};
