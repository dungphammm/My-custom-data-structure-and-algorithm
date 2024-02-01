#include <iostream>

using namespace std;

class Node{
public:
    bool isTerminal;
    Node *child[26];
    /* Initialize attributes for each node */
    Node(){
        isTerminal = false;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
    /* Release the node */
    ~Node(){
        delete[] (Node*) child;
    }
};

class Trie{
private:
    Node* root;
public:
    Trie();
    ~Trie(){ 
        /* Just do nothing, destructor for root will be automaticlly called  */
    }
    void addWord(string word);
    bool searchWord(string word);
};

Trie::Trie(){
    root = new Node;
}  

void Trie::addWord(string word){
    Node *pCursor = root;
    int wordSize = word.size();
    for (int i =0; i < wordSize; i++){
        if (pCursor -> child[word[i]-'A']== NULL)
            pCursor -> child[word[i]-'A'] = new Node();
        pCursor = pCursor -> child[word[i]-'A'];
    }
    pCursor -> isTerminal = true;
}

bool Trie:: searchWord(string word){
    int n = word.size();
    Node *pCursor = root;
    for (int i = 0; i < n; i++){
        if (pCursor -> child[word[i] - 'A'] == NULL) return false;
        pCursor = pCursor -> child[word[i] - 'A'];
    }
    return pCursor -> isTerminal;
}

int main(){
    Trie test;
    test.addWord("Hello");
    test.addWord("Hi");
    cout << test.searchWord("Hello2") << endl;
    return 0;
}