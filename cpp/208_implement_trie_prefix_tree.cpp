class Trie {
    class TrieNode {
    public:
        TrieNode() {
            isEOW = false; 
        }
        unordered_map<char, TrieNode*> charMap;
        bool isEOW;
    };
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* handle = root; 
        for (auto c : word) {
            if (handle->charMap.count(c) == 0) {
                handle->charMap[c] = new TrieNode();
            }
            handle = handle->charMap[c];
        }
        handle->isEOW = true; 
    }
    
    bool search(string word) {
        TrieNode* handle = root;
        for (auto c : word) {
            if (handle->charMap.count(c) == 0) {
                return false;
            }
            handle = handle->charMap[c];
        }
        return handle->isEOW ? true : false ;
    }
    
    bool startsWith(string prefix) {
        TrieNode* handle = root;
        for (auto c : prefix) {
            if (handle->charMap.count(c) == 0) {
                return false;
            }
            handle = handle->charMap[c];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */