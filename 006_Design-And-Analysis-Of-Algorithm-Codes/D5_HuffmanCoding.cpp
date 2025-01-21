#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Node structure for Huffman Tree
struct Node {
    char data;
    unsigned freq;
    Node* left;
    Node* right;

    Node(char data, unsigned freq) : data(data), freq(freq), left(nullptr), right(nullptr) {}
};

// Compare function for priority queue
struct Compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

// Generate Huffman Codes from the Huffman Tree
void generateCodes(Node* root, const string& str, unordered_map<char, string>& huffmanCodes) {
    if (!root) return;

    if (!root->left && !root->right) {
        huffmanCodes[root->data] = str;
    }

    generateCodes(root->left, str + "0", huffmanCodes);
    generateCodes(root->right, str + "1", huffmanCodes);
}

// Build the Huffman Tree and generate Huffman Codes
Node* buildHuffmanTree(const string& text, unordered_map<char, string>& huffmanCodes) {
    unordered_map<char, unsigned> freq;
    for (char ch : text) {
        freq[ch]++;
    }

    priority_queue<Node*, vector<Node*>, Compare> minHeap;
    for (auto& pair : freq) {
        minHeap.push(new Node(pair.first, pair.second));
    }

    while (minHeap.size() > 1) {
        Node* left = minHeap.top(); minHeap.pop();
        Node* right = minHeap.top(); minHeap.pop();

        Node* internal = new Node('$', left->freq + right->freq);
        internal->left = left;
        internal->right = right;
        minHeap.push(internal);
    }

    Node* root = minHeap.top();
    generateCodes(root, "", huffmanCodes);
    return root;
}

// Encode the input string using Huffman Codes
string encode(const string& text, const unordered_map<char, string>& huffmanCodes) {
    string encodedStr;
    for (auto i : huffmanCodes){
        cout << i.first << " \t\t\t " << i.second << endl;
    }
    for (char ch : text) {
        encodedStr += huffmanCodes.at(ch);
    }
    return encodedStr;
}

// Decode the encoded string using Huffman Tree
string decode(Node* root, const string& encodedStr) {
    string decodedStr;
    Node* current = root;
    for (char bit : encodedStr) {
        current = (bit == '0') ? current->left : current->right;
        if (!current->left && !current->right) {
            decodedStr += current->data;
            current = root;
        }
    }
    return decodedStr;
}

// Clean up the Huffman Tree nodes
void deleteTree(Node* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    cout<<endl;
    cout<<"Yash Pandey \t 12214802722"<<endl;
    string text = "aabbbccccdddddeeeeeef";

    unordered_map<char, string> huffmanCodes;

    // Measure time for building the Huffman Tree
    auto start = high_resolution_clock::now();
    Node* root = buildHuffmanTree(text, huffmanCodes);
    auto end = high_resolution_clock::now();
    auto buildDuration = duration_cast<microseconds>(end - start);

    // Encode the text
    string encodedText = encode(text, huffmanCodes);
    cout << "Encoded text: " << encodedText << endl;

    // Measure time for decoding
    start = high_resolution_clock::now();
    string decodedText = decode(root, encodedText);
    end = high_resolution_clock::now();
    auto decodeDuration = duration_cast<microseconds>(end - start);

    cout << "Decoded text: " << decodedText << endl;
    cout << "Build Huffman Tree took " << buildDuration.count() << " microseconds" << endl;
    cout << "Decoding took " << decodeDuration.count() << " microseconds" << endl;

    // Clean up the Huffman Tree
    deleteTree(root);

    return 0;
}
