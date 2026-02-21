class BrowserHistory {
public:
string webSite;
BrowserHistory* next;
BrowserHistory* prev;
BrowserHistory* head;
    BrowserHistory(string homepage) {
        webSite = homepage;
        next = nullptr;
        prev = nullptr;
        head = this;
    }
    
    void visit(string url) {
        BrowserHistory* newNode = new BrowserHistory(url);

    head->next = nullptr;

    newNode->prev = head;
    head->next = newNode;
    head = newNode;
    }
    
    string back(int steps) {
    BrowserHistory* temp = head;

    for(int i = steps; i > 0; i--){
        if(temp->prev == nullptr){
            head = temp;              
            return temp->webSite;
        }
        temp = temp->prev;
    }
    head = temp;
    return head->webSite;  
}

string forward(int steps) {
    BrowserHistory* temp = head;

    for(int i = steps; i > 0; i--){
        if(temp->next == nullptr){
            head = temp;            
            return temp->webSite;
        }
        temp = temp->next;
    }
    head = temp;
    return head->webSite; 
}

};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */