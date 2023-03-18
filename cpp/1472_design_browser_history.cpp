class HistoryNode {
public: 
    HistoryNode(string name, HistoryNode* prev=nullptr, HistoryNode* next=nullptr) {
        this->name = name;
        this->prev = prev;
        this->next = next; 
    }
public:
    string name;
    HistoryNode* prev;
    HistoryNode* next;

}; 

class BrowserHistory {
public:
    HistoryNode* current;
    BrowserHistory(string homepage) {
        current = new HistoryNode(homepage);
    }
    
    void visit(string url) {
        deleteforward(current->next);
        current->next = new HistoryNode(url, current, nullptr);
        current = current->next;
    }
    
    string back(int steps) {
        while(steps && current->prev) {
            current = current->prev;
            steps--; 
        }
        return current->name; 
    }
    
    string forward(int steps) {
        while(steps && current->next) {
            current = current->next;
            steps--; 
        }
        return current->name; 
    }
private: 
    void deleteforward(HistoryNode* current) {
        while(current) {
            auto tmp = current;
            current = current->next;
            delete tmp;
        }
    }
};