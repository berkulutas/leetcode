class WordNode {
public:
    WordNode() {
        for(int i=0; i<26; i++)
            v[i] = nullptr;
        eow = false;
    }
    WordNode* v[26];
    bool eow;
};

class WordDictionary {
public:
    WordNode* head;
    WordDictionary() {
        head = new WordNode();
    }
    
    void addWord(string word) {
        auto tmp = head;
        for (auto c : word) {
            if (tmp->v[c-'a'] == nullptr)
                tmp->v[c-'a'] = new WordNode();
            tmp = tmp->v[c-'a'];
        }
        tmp->eow = true;
    }

    bool recSearch(string word, int index, WordNode* tmp) {
        if (index == word.length()) {
            return tmp->eow;
        }
        char c = word[index];
        if (c == '.') {
            for(int i=0; i<26; i++) {
                if(tmp->v[i] && recSearch(word, index+1, tmp->v[i]))
                    return true; 
            }
            return false;
        }
        else {
            if (tmp->v[c-'a'] == nullptr)
                return false; 
            return recSearch(word, index+1, tmp->v[c-'a']);
        }
    }
    
    bool search(string word) {
        return recSearch(word, 0, head);
    }
};


/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */